package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.exception.*
import com.exoline.mycriteria.functions.LibraryLoader
import com.exoline.mycriteria.functions.StdLibrary
import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaLexer as Lexer
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import org.antlr.v4.runtime.CharStreams
import org.antlr.v4.runtime.CommonTokenStream

class MyCriteriaVisitorImpl(
    private val importResolver: (String) -> String?,
    additionalLibraries: List<Any>
) : MyCriteriaBaseVisitor<Expr>() {
    private operator fun Int.invoke() = Lexer.VOCABULARY.getLiteralName(this).trim('\'')
    private val libraries = LibraryLoader(listOf(StdLibrary) + additionalLibraries)

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
        val lexer = Lexer(stream)
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
        val idName = ctx.IDENTIFIER().text
        if (idName !in memory) {
            throw UnresolvedIdentifierException("Unresolved identifier $idName")
        }
        return memory[idName]!!
    }

    override fun visitObjectAccess(ctx: MyCriteriaParser.ObjectAccessContext): Expr {
        return visit(ctx.objectAccessParser())
    }

    override fun visitObjectAccessParser(ctx: MyCriteriaParser.ObjectAccessParserContext): Expr {
        val field = ctx.STR_LITERAL(0).text.trimQuotes()
        fields += field
        return Expr.Runtime { it: VarType ->
            it.getRecursively(field)
        }
    }

    override fun visitArray(ctx: MyCriteriaParser.ArrayContext): Expr =
        ctx.expr().map { visit(it) }.sequence()

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
        val text = ctx.text.trimQuotes()
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
                    Lexer.GT() -> lEv > rEv
                    Lexer.LT() -> lEv < rEv
                    Lexer.GTE() -> lEv >= rEv
                    Lexer.LTE() -> lEv <= rEv
                    Lexer.EQUALS() -> lEv == rEv
                    Lexer.NOT_EQUALS() -> lEv != rEv
                    else -> UNREACHABLE()
                }
            }
        }
    }

    override fun visitBool(ctx: MyCriteriaParser.BoolContext): Expr {
        return Expr.CompileTime { ctx.text == Lexer.TRUE() }
    }

    override fun visitMulDiv(ctx: MyCriteriaParser.MulDivContext): Expr {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return binOp<Number>(lF, rF) { l, r ->
            when (ctx.op.text) {
                Lexer.MUL() -> l * r
                Lexer.SLASH() -> l / r
                else -> UNREACHABLE()
            }
        }
    }

    override fun visitAddSub(ctx: MyCriteriaParser.AddSubContext): Expr {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return binOp<Number>(lF, rF) { l, r ->
            when (ctx.op.text) {
                Lexer.ADD() -> l + r
                Lexer.SUB() -> l - r
                else -> UNREACHABLE()
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
        // optimized one
        return lF.flatMap { lVal ->
            lVal as Boolean
            if (lVal) {
                Expr.CompileTime { true }
            } else {
                rF.map { rVal ->
                    rVal as Boolean
                    lVal || rVal
                }
            }
        }
        // return binOp<Boolean>(lF, rF) { l, r -> l || r }
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

    override fun visitLambda(ctx: MyCriteriaParser.LambdaContext): Expr {
        //ctx.altNumber
        ctx
        val params = visit(ctx.lambdaParams()).getValue() as List<String>
        return Expr.CompileTime { true }
    }

    override fun visitLambdaParams(ctx: MyCriteriaParser.LambdaParamsContext): Expr =
        Expr.CompileTime { ctx.IDENTIFIER().map { it.text } }

    override fun visitMethodCall(ctx: MyCriteriaParser.MethodCallContext): Expr {
        val methodName = ctx.IDENTIFIER().text
        val obj = visit(ctx.expr())
        val exprs = visit(ctx.funcPars()).getValue() as List<Expr>
        return libraries.call(methodName, listOf(obj) + exprs, infix = false)
    }

    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        val exprs = visit(ctx.funcPars()).getValue() as List<Expr>
        return libraries.call(funcName, exprs, infix = false)
    }

    override fun visitFuncPars(ctx: MyCriteriaParser.FuncParsContext): Expr =
        Expr.CompileTime {
            ctx.expr().map {
                visit(it)
            }
        }

    override fun visitInfixFuncCall(ctx: MyCriteriaParser.InfixFuncCallContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        val exprs = ctx.expr().map {
            visit(it)
        }
        return libraries.call(funcName, exprs, infix = true)
    }

    override fun visitInfixFuncCallNot(ctx: MyCriteriaParser.InfixFuncCallNotContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        val exprs = ctx.expr().map {
            visit(it)
        }
        return libraries.call(funcName, exprs, infix = true).map {
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

    private fun String.trimQuotes(): String = trim('\'').trim('"')
}