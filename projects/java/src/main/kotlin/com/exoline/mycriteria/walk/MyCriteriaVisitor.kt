package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.functions.Functions
import com.exoline.mycriteria.functions.Functions.isInfixFunction
import com.exoline.mycriteria.generated.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.MyCriteriaParser
import kotlin.reflect.KFunction
import kotlin.reflect.KParameter

typealias Result = F

class MyCriteriaVisitorImpl : MyCriteriaBaseVisitor<Result>() {
    override fun visitNull(ctx: MyCriteriaParser.NullContext): Result {
        return { it: VarType ->
            null
        }
    }

    override fun visitComparison(ctx: MyCriteriaParser.ComparisonContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return { it: VarType ->
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
        return { it: VarType ->
            ctx.text == "true"
        }
    }

    override fun visitMulDiv(ctx: MyCriteriaParser.MulDivContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return { it: VarType ->
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
        return { it: VarType ->
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
        return { it: VarType ->
            it[field].toAny()
        }
    }

    override fun visitNotExpr(ctx: MyCriteriaParser.NotExprContext): Result {
        val exprF = visit(ctx.expr());
        return { it: VarType ->
            (exprF(it) as Boolean).not()
        }
    }

    override fun visitParenExpr(ctx: MyCriteriaParser.ParenExprContext): Result {
        return visit(ctx.expr())
    }

    override fun visitAndOr(ctx: MyCriteriaParser.AndOrContext): Result {
        val lF = visit(ctx.expr(0))
        val rF = visit(ctx.expr(1))
        return { it: VarType ->
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
        return { it: VarType ->
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
            val f = { it: VarType ->
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
        return { it: VarType ->
            function.call(Functions, *expr.map { x ->
                x(it)
            }.toTypedArray())
        }
    }

    private fun KFunction<*>.params(): List<KParameter> {
        return parameters.drop(1)
    }
}