#pragma once

#include <MyCriteriaVisitor.h>

class MyCriteriaVisitorImpl : MyCriteriaVisitor {
public:
    virtual std::any visitFuncCall(MyCriteriaParser::FuncCallContext *context) override;

    virtual std::any visitNull(MyCriteriaParser::NullContext *context) override;

    virtual std::any visitComparison(MyCriteriaParser::ComparisonContext *context) override;

    virtual std::any visitBool(MyCriteriaParser::BoolContext *context) override;

    virtual std::any visitMulDiv(MyCriteriaParser::MulDivContext *context) override;

    virtual std::any visitAddSub(MyCriteriaParser::AddSubContext *context) override;

    virtual std::any visitObjectAccess(MyCriteriaParser::ObjectAccessContext *context) override;

    virtual std::any visitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *context) override;

    virtual std::any visitNotExpr(MyCriteriaParser::NotExprContext *context) override;

    virtual std::any visitParenExpr(MyCriteriaParser::ParenExprContext *context) override;

    virtual std::any visitAndOr(MyCriteriaParser::AndOrContext *context) override;

    virtual std::any visitInt(MyCriteriaParser::IntContext *context) override;

    virtual std::any visitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *context) override;
};
