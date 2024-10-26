package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.functions.Functions
import com.exoline.mycriteria.functions.Functions.isInfixFunction
import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import kotlin.reflect.KFunction
import kotlin.reflect.KParameter

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
            parsetimeComparison(lEv, rEv, op)
        }
    }

    private fun parsetimeComparison(l: Any?, r: Any?, op: String): Boolean = when (op) {
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
        val field = ctx.STR_LITERAL(0).text.trim('\'').trim('\"')
        fields += field
        return Result.Func { it: VarType ->
            it[field].toAny()
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

    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): Result {
        val funcName = ctx.STR().text
        val function = Functions.getFunction(ctx.STR().text)
            ?: throw IllegalArgumentException("Unresolved function name")
        val totalArgs = function.params().size
        val nonOptionalArgs = function.params().filter {
            !it.isOptional
        }.size
        val expr = ctx.expr().map {
            visit(it)
        }
        return if (expr.size in (nonOptionalArgs..totalArgs)) {
            val f = Result.Func { it: VarType ->
                function.call(Functions, *expr.map { x ->
                    x(it)
                }.toTypedArray())
            }
            f
        } else {
            throw IllegalArgumentException("Function $funcName called with " +
                    "insufficient parameters. Expected: ($nonOptionalArgs..$totalArgs)," +
                    "but got: $expr.size")
        }
    }

    override fun visitInfixFuncCall(ctx: MyCriteriaParser.InfixFuncCallContext): Result {
        val funcName = ctx.STR().text
        val function = Functions.getFunction(ctx.STR().text) ?: throw IllegalArgumentException("Unresolved function name")
        if (!function.isInfixFunction()) {
            throw IllegalArgumentException("Function $funcName is not infix")
        }
        val expr = ctx.expr().map {
            visit(it)
        }
        return Result.Func { it: VarType ->
            function.call(Functions, *expr.map { x ->
                x(it)
            }.toTypedArray())
        }
    }

    private fun KFunction<*>.params(): List<KParameter> {
        return parameters.drop(1)
    }
}