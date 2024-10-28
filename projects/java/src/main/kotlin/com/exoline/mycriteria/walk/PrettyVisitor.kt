package com.exoline.mycriteria.walk

import com.exoline.mycriteria.generated.grammar.MyCriteriaBaseVisitor
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser

class PrettyVisitor : MyCriteriaBaseVisitor<String>() {

    override fun visitIdAccess(ctx: MyCriteriaParser.IdAccessContext?): String {
        return super.visitIdAccess(ctx)
    }

    override fun visitIdentifierDefinition(ctx: MyCriteriaParser.IdentifierDefinitionContext): String {
        val idName = ctx.IDENTIFIER().text
        val expr = visit(ctx.expr())
        println("\$${idName}=$expr;")
        return ""
    }

    override fun visitIdentifierAccess(ctx: MyCriteriaParser.IdentifierAccessContext): String {
        return "\$${ctx.IDENTIFIER().text}"
    }

    override fun visitInArrayParser(ctx: MyCriteriaParser.InArrayParserContext?): String {
        return super.visitInArrayParser(ctx)
    }

    override fun visitStrOrNum(ctx: MyCriteriaParser.StrOrNumContext?): String {
        return super.visitStrOrNum(ctx)
    }

    /*override fun visitJsonPointer(ctx: MyCriteriaParser.JsonPointerContext?): String {
        return super.visitJsonPointer(ctx)
    }*/

    override fun visitInArray(ctx: MyCriteriaParser.InArrayContext): String {
        val obj = visit(ctx.inArrayParser().objectAccessParser())
        val values = ctx.inArrayParser().strOrNum().map {
            visit(it)
        }
        val nt = if (ctx.inArrayParser().EXCL().text == null) {
            ""
        } else {
            "!"
        }
        return "$obj ${nt}in [${values.joinToString(", ")}]"
    }

    /*override fun visitStrOrNum(ctx: MyCriteriaParser.StrOrNumContext): String {
        return super.visitStrOrNum(ctx)
    }*/

    private var indentLevel = 0
    companion object {
        private val SPECIAL_SYMBOL = ""
    }

    private fun indent(): String {
        return " ".repeat(indentLevel * 1)
    }

    override fun visitStrLiteral(ctx: MyCriteriaParser.StrLiteralContext): String {
        return ctx.text
    }

    override fun visitInfixFuncCall(ctx: MyCriteriaParser.InfixFuncCallContext?): String {
        return super.visitInfixFuncCall(ctx)
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

    override fun visitAnd(ctx: MyCriteriaParser.AndContext): String {
        indentLevel++
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        indentLevel--
        //return indent() + "($l ${ctx.op.text} $r)"
        return indentBinary(l, "&&", r)
    }

    override fun visitOr(ctx: MyCriteriaParser.OrContext): String {
        indentLevel++
        val l = visit(ctx.expr(0))
        val r = visit(ctx.expr(1))
        indentLevel--
        //return indent() + "($l ${ctx.op.text} $r)"
        return indentBinary(l, "||", r)
    }

    override fun visitNumb(ctx: MyCriteriaParser.NumbContext): String {
        return indent() + ctx.text
    }

    override fun visitObjectAccessParser(ctx: MyCriteriaParser.ObjectAccessParserContext): String {
        return ctx.text
    }

    override fun visitFuncCall(ctx: MyCriteriaParser.FuncCallContext): String {
        return "${ctx.IDENTIFIER().text}(${ctx.expr().map { it.text }})"
    }

    private fun indentBinary(left: String, op: String, right: String): String {
        return "${indent()}($SPECIAL_SYMBOL${indent()}$left$SPECIAL_SYMBOL${indent()}$op$SPECIAL_SYMBOL${indent()}$right$SPECIAL_SYMBOL${indent()})"
    }

    private fun indentUnary(op: String, expr: String): String {
        return "${indent()}($SPECIAL_SYMBOL${indent()}$op$SPECIAL_SYMBOL${indent()}$expr$SPECIAL_SYMBOL${indent()})"
    }
}