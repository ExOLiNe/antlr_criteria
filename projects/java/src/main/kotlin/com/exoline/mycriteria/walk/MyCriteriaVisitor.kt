package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.exception.RecursiveImportException
import com.exoline.mycriteria.functions.Functions
import com.exoline.mycriteria.functions.Functions.isInfixFunction
import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaLexer
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser.ExprContext
import org.antlr.v4.runtime.CharStreams
import org.antlr.v4.runtime.CommonTokenStream
import kotlin.reflect.KFunction
import kotlin.reflect.KParameter
import kotlin.reflect.javaType

sealed class Result {
    class Runtime(val f: F) : Result() {
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

        override fun map(transform: (Any?) -> Any?): Result = if (computed) {
            CompileTime { transform(value) }
        } else {
            Runtime {
                transform(f(it))
            }
        }
    }

    class CompileTime(private val vl: Any?): Result() {
        constructor(lambda: () -> Any?) : this(lambda())
        override fun invoke(it: VarType): Any? = vl
        override fun getValue(): Any? = vl
        override fun map(transform: (Any?) -> Any?): Result = CompileTime { transform(vl) }
    }

    class App(
        val fields: Set<String>,
        val app: AppF
    ) : Result() {
        override fun invoke(it: VarType): Any? {
            TODO("Not yet implemented")
        }

        override fun getValue(): Any? {
            TODO("Not yet implemented")
        }

        override fun map(transform: (Any?) -> Any?): Result {
            TODO("Not yet implemented")
        }
    }
    abstract operator fun invoke(it: VarType): Any?
    abstract fun getValue(): Any?
    abstract fun map(transform: (Any?) -> Any?): Result
}

class MyCriteriaVisitorImpl(
    private val importResolver: (String) -> String?
) : MyCriteriaBaseVisitor<Result>() {
    private val imports = mutableSetOf<String>()
    private val memory = mutableMapOf<String, Result>()

    override fun visitImportStatement(ctx: MyCriteriaParser.ImportStatementContext): Result {
        val importRef = ctx.IDENTIFIER().text
        if (!imports.add(importRef)) {
            throw RecursiveImportException("Import $importRef has already used")
        }

        val importCode = importResolver(importRef) ?: throw IllegalArgumentException("Import $importRef not found")
        val stream = CharStreams.fromString(importCode)
        val lexer = MyCriteriaLexer(stream)
        val tokens = CommonTokenStream(lexer)
        val parser = MyCriteriaParser(tokens)
        val tree = parser.statements().apply {
            visit(this)
        }
        println(tree)
        return Result.CompileTime { }
    }

    override fun visitIdentifierDefinition(ctx: MyCriteriaParser.IdentifierDefinitionContext): Result {
        val expr = visit(ctx.expr())
        val idName = ctx.IDENTIFIER().text
        if (idName in memory) {
            throw IllegalArgumentException("Redefinition of $idName")
        }
        memory[idName] = expr
        return Result.CompileTime {}
    }

    override fun visitIdAccess(ctx: MyCriteriaParser.IdAccessContext): Result {
        val idName = visit(ctx.identifierAccess()).getValue()
        if (idName !in memory) {
            throw IllegalStateException("Unresolved identifier $idName")
        }
        return Result.Runtime {
            memory[idName]!!(it)
        }
    }

    override fun visitIdentifierAccess(ctx: MyCriteriaParser.IdentifierAccessContext): Result {
        return Result.CompileTime { ctx.IDENTIFIER().text }
    }

    override fun visitObjectAccess(ctx: MyCriteriaParser.ObjectAccessContext): Result {
        return visit(ctx.objectAccessParser())
    }

    override fun visitObjectAccessParser(ctx: MyCriteriaParser.ObjectAccessParserContext): Result {
        val field = ctx.STR_LITERAL(0).text.trim('\'').trim('\"')
        fields += field
        return Result.Runtime { it: VarType ->
            it.getRecursively(field)
        }
    }

    override fun visitInArrayParser(ctx: MyCriteriaParser.InArrayParserContext): Result {
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

    override fun visitInArray(ctx: MyCriteriaParser.InArrayContext): Result {
        return visit(ctx.inArrayParser())
    }

    private val fields = mutableSetOf<String>()

    private fun resetState() {
        imports.clear()
        memory.clear()
        fields.clear()
    }
    override fun visitApp(ctx: MyCriteriaParser.AppContext): Result {
        resetState()
        ctx.statement().forEach {
            visit(it)
        }
        val app = visit(ctx.expr())
        return Result.App(fields) { it: VarType ->
            ParseResult.AppResult(
                app(it) as Boolean, memory.mapValues { it.value.getValue() }
            )
        }
    }

    override fun visitStrLiteral(ctx: MyCriteriaParser.StrLiteralContext): Result {
        val text = ctx.text.trim('\'').trim('"')
        return Result.CompileTime { text }
    }

    override fun visitNull(ctx: MyCriteriaParser.NullContext): Result {
        return Result.CompileTime { null }
    }

    override fun visitComparison(ctx: MyCriteriaParser.ComparisonContext): Result {
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        val op = ctx.op.text
        return Result.Runtime { it: VarType ->
            val lEv = l(it)
            val rEv = r(it)
            compare(lEv, rEv, op)
        }
    }

    private fun compare(l: Any?, r: Any?, op: String): Boolean = when (op) {
        ">" -> l > r
        "<" -> l < r
        ">=" -> l >= r
        "<=" -> l <= r
        "==" -> l == r
        "!=" -> l != r
        else -> TODO("Not implemented yet")
    }

    override fun visitBool(ctx: MyCriteriaParser.BoolContext): Result {
        return Result.Runtime { ctx.text == "true" }
    }

    override fun visitMulDiv(ctx: MyCriteriaParser.MulDivContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return Result.Runtime { it: VarType ->
            val l = lF(it) as Number
            val r = rF(it) as Number
            when (ctx.op.text) {
                "*" -> l * r
                "/" -> l / r
                else -> TODO("Not implemented yet")
            }
        }
    }

    override fun visitAddSub(ctx: MyCriteriaParser.AddSubContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return Result.Runtime { it: VarType ->
            val l = lF(it) as Number
            val r = rF(it) as Number
            when (ctx.op.text) {
                "+" -> l + r
                "-" -> l - r
                else -> TODO("Not implemented yet")
            }
        }
    }

    override fun visitNotExpr(ctx: MyCriteriaParser.NotExprContext): Result {
        val exprF = visit(ctx.expr())
        return exprF.map {
            (it as Boolean).not()
        }
    }

    override fun visitParenExpr(ctx: MyCriteriaParser.ParenExprContext): Result {
        return visit(ctx.expr())
    }

    override fun visitAnd(ctx: MyCriteriaParser.AndContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return Result.Runtime { it: VarType ->
            val l = lF(it) as Boolean
            val r = rF(it) as Boolean
            l && r
        }
    }

    override fun visitOr(ctx: MyCriteriaParser.OrContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return Result.Runtime { it: VarType ->
            val l = lF(it) as Boolean
            val r = rF(it) as Boolean
            l || r
        }
    }

    override fun visitNumb(ctx: MyCriteriaParser.NumbContext): Result {
        val convert: (String) -> Any = if (ctx.DOT() != null)  {
            { it.toDouble() }
        } else {
            { it.toInt() }
        }
        return Result.Runtime {
            convert(ctx.text)
        }
    }

    @OptIn(ExperimentalStdlibApi::class)
    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): Result {
        val funcName = ctx.IDENTIFIER().text
        val functions = Functions.getFunctions(funcName) // TODO add param filter
        if (functions.isEmpty()) {
            throw IllegalArgumentException("Unresolved function name")
        }
        val expr = ctx.expr().map {
            visit(it)
        }
        val filteredFunctions = functions.filter { function ->
            val totalArgs = function.params().size
            val nonOptionalArgs = function.params().filter {
                !it.isOptional
            }.size
            expr.size in (nonOptionalArgs..totalArgs)
        }
        if (filteredFunctions.isEmpty()) {
            throw IllegalArgumentException("Function $funcName called with " +
                    "insufficient parameters. ")
            /* TODO
            Expected: ($nonOptionalArgs..$totalArgs)," +
                    "but got: $expr.size
             */
        }
        return Result.Runtime { it: VarType ->
            val args = expr.map { x -> x(it) }
            filteredFunctions.filter { function ->
                val expectedArgTypes: Set<String> = function.params().map {
                    it.type.javaType.typeName
                }.toSet()
                val actualArgTypes: Set<String> = args.mapNotNull {
                    it?.javaClass?.typeName
                }.toSet()
                expectedArgTypes.containsAll(actualArgTypes)
            }.first().call(Functions, *args.toTypedArray())
        }
    }

    override fun visitInfixFuncCall(ctx: MyCriteriaParser.InfixFuncCallContext): Result {
        val funcName = ctx.IDENTIFIER().text
        return funcCall(funcName) {
            ctx.expr()
        }
    }

    override fun visitInfixFuncCallNot(ctx: MyCriteriaParser.InfixFuncCallNotContext): Result {
        val funcName = ctx.IDENTIFIER().text
        return funcCall(funcName) {
            ctx.expr()
        }.map {
            (it as Boolean).not()
        }
    }

    private fun funcCall(funcName: String, expr: () -> List<ExprContext>): Result {
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
        return Result.Runtime { it: VarType ->
            // TODO replace `first` with something else
            filteredFunctions.first().call(Functions, *expr.map { x ->
                x(it)
            }.toTypedArray())
        }
    }

    private fun KFunction<*>.params(): List<KParameter> {
        return parameters.drop(1)
    }
}