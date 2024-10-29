package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.exception.InsufficientArgumentsException
import com.exoline.mycriteria.exception.UNREACHABLE
import com.exoline.mycriteria.exception.RecursiveImportException
import com.exoline.mycriteria.functions.Functions
import com.exoline.mycriteria.functions.Functions.isInfixFunction
import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaLexer
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser.ExprContext
import org.antlr.v4.runtime.CharStreams
import org.antlr.v4.runtime.CommonTokenStream
import java.lang.reflect.Method
import java.lang.reflect.Parameter

sealed class Expr {
    class Runtime(val f: F) : Expr() {
        private var value: Any? = null
        private var computed: Boolean = false
        override fun invoke(it: VarType): Any? {
            if (!computed) {
                value = f(it)
                computed = true
            }
            return value
        }
        override fun getValue(): Any? = if (computed) {
            value
        } else {
            throw IllegalStateException("Value not computed yet")
        }

        override fun map(transform: (Any?) -> Any?): Expr = if (computed) {
            CompileTime { transform(value) }
        } else {
            Runtime {
                transform(f(it))
            }
        }

        override fun flatMap(transform: (Any?) -> Expr): Expr = if (computed) {
            Runtime {
                transform(value)(it)
            }
        } else {
            Runtime {
                transform(this(it))(it)
            }
        }
    }

    class CompileTime(private val vl: Any?): Expr() {
        constructor(lambda: () -> Any?) : this(lambda())
        override fun invoke(it: VarType): Any? = vl
        override fun getValue(): Any? = vl
        override fun map(transform: (Any?) -> Any?): Expr = CompileTime { transform(vl) }
        override fun flatMap(transform: (Any?) -> Expr): Expr = transform(vl) // TODO very suspicious impl..
    }

    class App(
        val fields: Set<String>,
        val app: AppF
    ) : Expr() {
        override fun invoke(it: VarType): Any? { UNREACHABLE() }
        override fun getValue(): Any? { UNREACHABLE() }
        override fun map(transform: (Any?) -> Any?): Expr { UNREACHABLE() }
        override fun flatMap(transform: (Any?) -> Expr): Expr { UNREACHABLE() }
    }
    abstract operator fun invoke(it: VarType): Any?
    abstract fun getValue(): Any?
    abstract fun map(transform: (Any?) -> Any?): Expr
    abstract fun flatMap(transform: (Any?) -> Expr): Expr
}

class MyCriteriaVisitorImpl(
    private val importResolver: (String) -> String?
) : MyCriteriaBaseVisitor<Expr>() {
    private val imports = mutableSetOf<String>()
    private val memory = mutableMapOf<String, Expr>()

    override fun visitImportStatement(ctx: MyCriteriaParser.ImportStatementContext): Expr {
        val importRef = ctx.IDENTIFIER().text
        if (!imports.add(importRef)) {
            throw RecursiveImportException("Import $importRef has already used")
        }

        val importCode = importResolver(importRef) ?: throw IllegalArgumentException("Import $importRef not found")
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
            throw IllegalArgumentException("Redefinition of $idName")
        }
        memory[idName] = expr
        return Expr.CompileTime {}
    }

    override fun visitIdAccess(ctx: MyCriteriaParser.IdAccessContext): Expr {
        val idName = visit(ctx.identifierAccess()).getValue()
        if (idName !in memory) {
            throw IllegalStateException("Unresolved identifier $idName")
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

    private val fields = mutableSetOf<String>()

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

    @OptIn(ExperimentalStdlibApi::class)
    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        val exprs = ctx.expr().map {
            visit(it)
        }
        val functions = Functions.getFunctions(funcName) // TODO add param filter
        if (functions.isEmpty()) {
            throw IllegalArgumentException("Unresolved function name")
        }
        val filteredFunctions = functions.filter { function ->
            exprs.size == function.params().size
        }
        if (filteredFunctions.isEmpty()) {
            val argsRange = filteredFunctions.map { it.params().size }.let {
                (it.minOrNull() ?: 0)..(it.maxOrNull() ?: 0)
            }
            throw InsufficientArgumentsException("Function $funcName called with " +
                    "insufficient parameters. Expected: $argsRange")
        }
        fun callF(args: List<Any?>): Any? {
            return filteredFunctions.map {
                val result = runCatching {
                    it.invoke(Functions, *args.toTypedArray())
                }
                result
            }.first { it.isSuccess }.getOrNull()
        }
        val compileTimeExprs = exprs.filterIsInstance<Expr.CompileTime>()
        val rootExpr = if (exprs.size == compileTimeExprs.size) {
            Expr.CompileTime {
                val args = exprs.map { x -> x.getValue() }
                callF(args)
            }
        } else {
            Expr.Runtime {
                val args = exprs.map { x -> x(it) }
                callF(args)
            }
        }
        return rootExpr
    }

    override fun visitInfixFuncCall(ctx: MyCriteriaParser.InfixFuncCallContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        return callInfix(funcName) {
            ctx.expr()
        }
    }

    override fun visitInfixFuncCallNot(ctx: MyCriteriaParser.InfixFuncCallNotContext): Expr {
        val funcName = ctx.IDENTIFIER().text
        return callInfix(funcName) { ctx.expr() }.map {
            (it as Boolean).not()
        }
    }

    private fun callInfix(funcName: String, expr: () -> List<ExprContext>): Expr {
        val functions = Functions.getFunctions(funcName)
        if (functions.isEmpty()) {
            throw IllegalArgumentException("Unresolved function name")
        }
        val filteredFunctions = functions.filter { it.isInfixFunction() }
        if (filteredFunctions.isEmpty()) {
            throw IllegalArgumentException("Function $funcName is not infix")
        }
        val expr = expr().map {
            visit(it)
        }
        return Expr.Runtime { it: VarType ->
            // TODO replace `first` with something else
            filteredFunctions.first().invoke(Functions, *expr.map { x ->
                x(it)
            }.toTypedArray())
        }
    }

    private fun Method.params(): List<Parameter> = parameters.toList()

    private fun <T>binOp(l: Expr, r: Expr, op: (l: T, r: T) -> Any?): Expr =
        l.flatMap { lVal ->
            r.map { rVal ->
                lVal as T
                rVal as T
                op(lVal, rVal)
            }
        }
}