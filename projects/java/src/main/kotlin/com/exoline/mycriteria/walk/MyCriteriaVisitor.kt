package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.functions.Functions
import com.exoline.mycriteria.functions.Functions.isInfixFunction
import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import kotlin.reflect.KFunction
import kotlin.reflect.KParameter
import kotlin.reflect.javaType

sealed class Result {
    class Func(val f: F) : Result() {
        override fun invoke(it: VarType): Any? = f(it)
    }
    /*class Func { val value: Any?) : Result( } {
        override fun invoke(it: VarType): Any? = value
    }*/
    class App(
        val fields: Set<String>,
        val app: AppF
    ) : Result() {
        override fun invoke(it: VarType): Any? {
            TODO("Not yet implemented")
        }
    }
    abstract operator fun invoke(it: VarType): Any?
}

class MyCriteriaVisitorImpl : MyCriteriaBaseVisitor<Result>() {
    override fun visitStrOrNum(ctx: MyCriteriaParser.StrOrNumContext): Result {
        return Result.Func { null }
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
        return Result.Func { it: VarType ->
            (obj(it) in values).xor(isIn).not()
        }
    }

    override fun visitInArray(ctx: MyCriteriaParser.InArrayContext): Result {
        return visit(ctx.inArrayParser())
    }

    private val fields = mutableSetOf<String>()

    private fun resetState() {
        fields.clear()
    }
    override fun visitApp(ctx: MyCriteriaParser.AppContext): Result {
        resetState()
        val app = visit(ctx.expr())
        return Result.App(fields) { it: VarType ->
            ParseResult.AppResult(
                app(it) as Boolean, mapOf()
            )
        }
    }

    override fun visitStrLiteral(ctx: MyCriteriaParser.StrLiteralContext): Result {
        val text = ctx.text.trim('\'').trim('"')
        return Result.Func { text }
    }

    override fun visitNull(ctx: MyCriteriaParser.NullContext): Result {
        return Result.Func { null }
    }

    override fun visitComparison(ctx: MyCriteriaParser.ComparisonContext): Result {
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        val op = ctx.op.text
        return Result.Func { it: VarType ->
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
        return Result.Func { ctx.text == "true" }
    }

    override fun visitMulDiv(ctx: MyCriteriaParser.MulDivContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return Result.Func { it: VarType ->
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
        return Result.Func { it: VarType ->
            val l = lF(it) as Number
            val r = rF(it) as Number
            when (ctx.op.text) {
                "+" -> l + r
                "-" -> l - r
                else -> TODO("Not implemented yet")
            }
        }
    }

    override fun visitObjectAccessParser(ctx: MyCriteriaParser.ObjectAccessParserContext): Result {
        val field = ctx.jsonPointer(0).text.trim('\'').trim('\"')
        fields += field
        return Result.Func { it: VarType ->
            it.getRecursively(field)
        }
    }

    override fun visitObjectAccess(ctx: MyCriteriaParser.ObjectAccessContext): Result {
        return visitObjectAccessParser(ctx.objectAccessParser())
    }

    override fun visitNotExpr(ctx: MyCriteriaParser.NotExprContext): Result {
        val exprF = visit(ctx.expr())
        return Result.Func { it: VarType ->
            (exprF(it) as Boolean).not()
        }
    }

    override fun visitParenExpr(ctx: MyCriteriaParser.ParenExprContext): Result {
        return visit(ctx.expr())
    }

    override fun visitAnd(ctx: MyCriteriaParser.AndContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return Result.Func { it: VarType ->
            val l = lF(it) as Boolean
            val r = rF(it) as Boolean
            l && r
        }
    }

    override fun visitOr(ctx: MyCriteriaParser.OrContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return Result.Func { it: VarType ->
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
        return Result.Func {
            convert(ctx.text)
        }
    }

    @OptIn(ExperimentalStdlibApi::class)
    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): Result {
        val funcName = ctx.STR().text
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
        return Result.Func { it: VarType ->
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
        val funcName = ctx.STR().text
        val functions = Functions.getFunctions(ctx.STR().text)
        if (functions.isEmpty()) {
            throw IllegalArgumentException("Unresolved function name")
        }
        val filteredFunctions = functions.filter { it.isInfixFunction() }
        if (filteredFunctions.isEmpty()) {
            throw IllegalArgumentException("Function $funcName is not infix")
        }
        val expr = ctx.expr().map {
            visit(it)
        }
        return Result.Func { it: VarType ->
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