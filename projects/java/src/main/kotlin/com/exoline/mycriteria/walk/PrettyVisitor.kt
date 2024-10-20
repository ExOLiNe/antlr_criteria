package com.exoline.mycriteria.walk

import com.exoline.mycriteria.*
import com.exoline.mycriteria.generated.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.MyCriteriaParser

class PrettyVisitor : MyCriteriaBaseVisitor<String>() {
    private var indentLevel = 0
    companion object {
        private val SPECIAL_SYMBOL = ""
    }

    private fun indent(): String {
        return " ".repeat(indentLevel * 1)
    }

    override fun visitNull(ctx: MyCriteriaParser.NullContext): String {
        return indent() + ctx.text
    }

    override fun visitComparison(ctx: MyCriteriaParser.ComparisonContext): String {
        indentLevel++
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        indentLevel--
        // return indent() + "($l ${ctx.op.text} $r)"
        return indentBinary(l, ctx.op.text, r)
    }

    override fun visitBool(ctx: MyCriteriaParser.BoolContext): String {
        return indent() + ctx.text
    }

    override fun visitMulDiv(ctx: MyCriteriaParser.MulDivContext): String {
        indentLevel++
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        indentLevel--
        //return indent() + "($l ${ctx.op.text} $r)"
        return indentBinary(l, ctx.op.text, r)
    }

    override fun visitAddSub(ctx: MyCriteriaParser.AddSubContext): String {
        indentLevel++
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        indentLevel--
        //return indent() + "($l ${ctx.op.text} $r)"
        return indentBinary(l, ctx.op.text, r)
    }

    override fun visitObjectAccess(ctx: MyCriteriaParser.ObjectAccessContext): String {
        return super.visitObjectAccess(ctx)
    }

    override fun visitNotExpr(ctx: MyCriteriaParser.NotExprContext): String {
        indentLevel++
        val expr = visit(ctx.expr())
        indentLevel--
        //return indent() + "(!$expr)"
        return indentUnary("!", expr)
    }

    override fun visitParenExpr(ctx: MyCriteriaParser.ParenExprContext): String {
        return visit(ctx.expr())
    }

    override fun visitAndOr(ctx: MyCriteriaParser.AndOrContext): String {
        indentLevel++
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        indentLevel--
        //return indent() + "($l ${ctx.op.text} $r)"
        return indentBinary(l, ctx.op.text, r)
    }

    override fun visitInt(ctx: MyCriteriaParser.IntContext): String {
        return indent() + ctx.text
    }

    override fun visitObjectAccessParser(ctx: MyCriteriaParser.ObjectAccessParserContext): String {
        return "object[\"${ctx.text}\"]"
    }

    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): String {
        return "${ctx.STR().text}(${ctx.expr().map { it.text }})"
    }

    private fun indentBinary(left: String, op: String, right: String): String {
        return "${indent()}($SPECIAL_SYMBOL${indent()}$left$SPECIAL_SYMBOL${indent()}$op$SPECIAL_SYMBOL${indent()}$right$SPECIAL_SYMBOL${indent()})"
    }

    private fun indentUnary(op: String, expr: String): String {
        return "${indent()}($SPECIAL_SYMBOL${indent()}$op$SPECIAL_SYMBOL${indent()}$expr$SPECIAL_SYMBOL${indent()})"
    }
}