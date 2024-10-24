package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.functions.Functions
import com.exoline.mycriteria.functions.Functions.isInfixFunction
import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import kotlin.reflect.KFunction
import kotlin.reflect.KParameter

sealed class Result {
    class Func(val f: F) : Result()
    class App(
        val fields: Set<String>,
        val app: AppF
    ) : Result()
}

// typealias Result = F

class MyCriteriaVisitorImpl : MyCriteriaBaseVisitor<Result>() {
    private val fields = mutableSetOf<String>()

    private fun resetState() {
        fields.clear()
    }
    override fun visitApp(ctx: MyCriteriaParser.AppContext): Result {
        resetState()
        val app = (visit(ctx.expr()) as Result.Func).f
        return Result.App(fields) { it: VarType ->
            ParseResult.AppResult(
                app(it) as Boolean, mapOf()
            )
        }
    }

    override fun visitStrLiteral(ctx: MyCriteriaParser.StrLiteralContext): Result {
        val text = ctx.text.trim('\'').trim('"')
        return Result.Func { it: VarType ->
            text
        }
    }

    override fun visitNull(ctx: MyCriteriaParser.NullContext): Result {
        return Result.Func { it: VarType ->
            null
        }
    }

    override fun visitComparison(ctx: MyCriteriaParser.ComparisonContext): Result {
        val lF = (visit(ctx.expr(0)) as Result.Func).f
        val rF = (visit(ctx.expr(1)) as Result.Func).f
        return Result.Func { it: VarType ->
            val l = lF(it)
            val r = rF(it)
            when (ctx.op.text) {
                ">" -> l > r
                "<" -> l < r
                ">=" -> l >= r
                "<=" -> l <= r
                "==" -> l == r
                "!=" -> l != r
                else -> TODO("Not implemented yet")
            }
        }
    }

    override fun visitBool(ctx: MyCriteriaParser.BoolContext): Result {
        return Result.Func { it: VarType ->
            ctx.text == "true"
        }
    }

    override fun visitMulDiv(ctx: MyCriteriaParser.MulDivContext): Result {
        val lF = (visit(ctx.expr(0)) as Result.Func).f
        val rF = (visit(ctx.expr(1)) as Result.Func).f
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
        val lF = (visit(ctx.expr(0)) as Result.Func).f
        val rF = (visit(ctx.expr(1)) as Result.Func).f
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

    override fun visitObjectAccess(ctx: MyCriteriaParser.ObjectAccessContext): Result {
        val field = ctx.objectAccessParser().STR_LITERAL(0).text.trim('\'').trim('\"')
        fields += field
        return Result.Func { it: VarType ->
            it[field].toAny()
        }
    }

    override fun visitNotExpr(ctx: MyCriteriaParser.NotExprContext): Result {
        val exprF = (visit(ctx.expr()) as Result.Func).f
        return Result.Func { it: VarType ->
            (exprF(it) as Boolean).not()
        }
    }

    override fun visitParenExpr(ctx: MyCriteriaParser.ParenExprContext): Result {
        return visit(ctx.expr())
    }

    override fun visitAndOr(ctx: MyCriteriaParser.AndOrContext): Result {
        val lF = (visit(ctx.expr(0)) as Result.Func).f
        val rF = (visit(ctx.expr(1)) as Result.Func).f
        return Result.Func { it: VarType ->
            val l = lF(it) as Boolean
            val r = rF(it) as Boolean
            when (ctx.op.text) {
                "&&" -> l && r
                "||" -> l || r
                else -> TODO("Not implemented yet")
            }
        }
    }

    override fun visitInt(ctx: MyCriteriaParser.IntContext): Result {
        return Result.Func { it: VarType ->
            ctx.text.toInt()
        }
    }

    override fun visitObjectAccessParser(ctx: MyCriteriaParser.ObjectAccessParserContext): Result {
        return super.visitObjectAccessParser(ctx)
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
                    (x as Result.Func).f(it)
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
                (x as Result.Func).f(it)
            }.toTypedArray())
        }
    }

    private fun KFunction<*>.params(): List<KParameter> {
        return parameters.drop(1)
    }
}