package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.exception.*
import com.exoline.mycriteria.functions.FunctionResolver
import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaLexer
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import org.antlr.v4.runtime.CharStreams
import org.antlr.v4.runtime.CommonTokenStream

class MyCriteriaVisitorImpl(
    private val importResolver: (String) -> String?
) : MyCriteriaBaseVisitor<Expr>() {
    private val imports = mutableSetOf<String>()
    private val memory = mutableMapOf<String, Expr>()
    private val fields = mutableSetOf<String>()

    override fun visitImportStatement(ctx: MyCriteriaParser.ImportStatementContext): Expr {
        val importRef = ctx.IDENTIFIER().text
        if (!imports.add(importRef)) {
            throw RecursiveImportException("Import $importRef has already used")
        }

        val importCode = importResolver(importRef) ?: throw ImportNotFoundException("Import $importRef not found")
        val stream = CharStreams.fromString(importCode)
        val lexer = MyCriteriaLexer(stream)
        val tokens = CommonTokenStream(lexer)
        val parser = MyCriteriaParser(tokens)
        parser.statements().apply {
            visit(this)
        }
        return Expr.CompileTime { }
    }

    override fun visitIdentifierDefinition(ctx: MyCriteriaParser.IdentifierDefinitionContext): Expr {
        val expr = visit(ctx.expr())
        val idName = ctx.IDENTIFIER().text
        if (idName in memory) {
            throw RedefinitionException("Redefinition of $idName")
        }
        memory[idName] = expr
        return Expr.CompileTime {}
    }

    override fun visitIdAccess(ctx: MyCriteriaParser.IdAccessContext): Expr {
        val idName = visit(ctx.identifierAccess()).getValue()
        if (idName !in memory) {
            throw UnresolvedIdentifierException("Unresolved identifier $idName")
        }
        // TODO simplify and fix new bug
        return memory[idName]!!
    }

    override fun visitIdentifierAccess(ctx: MyCriteriaParser.IdentifierAccessContext): Expr {
        return Expr.CompileTime { ctx.IDENTIFIER().text }
    }

    override fun visitObjectAccess(ctx: MyCriteriaParser.ObjectAccessContext): Expr {
        return visit(ctx.objectAccessParser())
    }

    override fun visitObjectAccessParser(ctx: MyCriteriaParser.ObjectAccessParserContext): Expr {
        val field = ctx.STR_LITERAL(0).text.trim('\'').trim('\"')
        fields += field
        return Expr.Runtime { it: VarType ->
            it.getRecursively(field)
        }
    }

    override fun visitInArrayParser(ctx: MyCriteriaParser.InArrayParserContext): Expr {
        val obj = visitObjectAccessParser(ctx.objectAccessParser())
        val values = ctx.strOrNum().map {
            when {
                it.numb() != null -> it.text.toInt()
                it.STR_LITERAL() != null -> it.text.trim('\'').trim('"')
                else -> throw IllegalStateException("???")
            }
        }
        val isIn = ctx.EXCL() == null
        return obj.map {
            (it in values).xor(isIn).not()
        }
    }

    override fun visitInArray(ctx: MyCriteriaParser.InArrayContext): Expr {
        return visit(ctx.inArrayParser())
    }

    private fun resetState() {
        imports.clear()
        memory.clear()
        fields.clear()
    }
    override fun visitApp(ctx: MyCriteriaParser.AppContext): Expr {
        resetState()
        ctx.statement().forEach {
            visit(it)
        }
        val app = visit(ctx.expr())
        return Expr.App(fields) { it: VarType ->
            ParseResult.AppResult(
                app(it) as Boolean, memory.mapValues {
                    it.value.getValue()
                }
            )
        }
    }

    override fun visitStrLiteral(ctx: MyCriteriaParser.StrLiteralContext): Expr {
        val text = ctx.text.trim('\'').trim('"')
        return Expr.CompileTime { text }
    }

    override fun visitNull(ctx: MyCriteriaParser.NullContext): Expr {
        return Expr.CompileTime { null }
    }

    override fun visitComparison(ctx: MyCriteriaParser.ComparisonContext): Expr {
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        val op = ctx.op.text

        return l.flatMap { lEv ->
            r.map { rEv ->
                when (op) {
                    ">" -> lEv > rEv
                    "<" -> lEv < rEv
                    ">=" -> lEv >= rEv
                    "<=" -> lEv <= rEv
                    "==" -> lEv == rEv
                    "!=" -> lEv != rEv
                    else -> TODO("Not implemented yet")
                }
            }
        }
    }

    override fun visitBool(ctx: MyCriteriaParser.BoolContext): Expr {
        return Expr.CompileTime { ctx.text == "true" }
    }

    override fun visitMulDiv(ctx: MyCriteriaParser.MulDivContext): Expr {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return binOp<Number>(lF, rF) { l, r ->
            when (ctx.op.text) {
                "*" -> l * r
                "/" -> l / r
                else -> TODO("Not implemented yet")
            }
        }
    }

    override fun visitAddSub(ctx: MyCriteriaParser.AddSubContext): Expr {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return binOp<Number>(lF, rF) { l, r ->
            when (ctx.op.text) {
                "+" -> l + r
                "-" -> l - r
                else -> TODO("Not implemented yet")
            }
        }
    }

    override fun visitNotExpr(ctx: MyCriteriaParser.NotExprContext): Expr {
        val expr = visit(ctx.expr())
        return expr.map {
            (it as Boolean).not()
        }
    }

    override fun visitParenExpr(ctx: MyCriteriaParser.ParenExprContext): Expr {
        return visit(ctx.expr())
    }

    override fun visitAnd(ctx: MyCriteriaParser.AndContext): Expr {
        val (lF, rF) = visit(ctx.expr(0)) to visit(ctx.expr(1))
        return binOp<Boolean>(lF, rF) { l, r -> l && r }
    }

    override fun visitOr(ctx: MyCriteriaParser.OrContext): Expr {
        val (lF, rF) = visit(ctx.expr(0)) to visit(ctx.expr(1))
        return binOp<Boolean>(lF, rF) { l, r -> l || r }
    }

    override fun visitNumb(ctx: MyCriteriaParser.NumbContext): Expr {
        val convert: (String) -> Any = if (ctx.DOT() != null)  {
            { it.toDouble() }
        } else {
            { it.toInt() }
        }
        return Expr.CompileTime {
            convert(ctx.text)
        }
    }

    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        val exprs = ctx.expr().map {
            visit(it)
        }
        return FunctionResolver.callFunction(funcName, exprs)
    }

    override fun visitInfixFuncCall(ctx: MyCriteriaParser.InfixFuncCallContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        val exprs = ctx.expr().map {
            visit(it)
        }
        return FunctionResolver.callInfixFunction(funcName, exprs)
    }

    override fun visitInfixFuncCallNot(ctx: MyCriteriaParser.InfixFuncCallNotContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        val exprs = ctx.expr().map {
            visit(it)
        }
        return FunctionResolver.callInfixFunction(funcName, exprs).map {
            (it as Boolean).not()
        }
    }

    private fun <T>binOp(l: Expr, r: Expr, op: (l: T, r: T) -> Any?): Expr =
        l.flatMap { lVal ->
            r.map { rVal ->
                lVal as T
                rVal as T
                op(lVal, rVal)
            }
        }
}