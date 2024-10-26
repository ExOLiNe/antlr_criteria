
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MyCriteriaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MyCriteriaParser.
 */
class  MyCriteriaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MyCriteriaParser.
   */
    virtual std::any visitApp(MyCriteriaParser::AppContext *context) = 0;

    virtual std::any visitNull(MyCriteriaParser::NullContext *context) = 0;

    virtual std::any visitComparison(MyCriteriaParser::ComparisonContext *context) = 0;

    virtual std::any visitOr(MyCriteriaParser::OrContext *context) = 0;

    virtual std::any visitMulDiv(MyCriteriaParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(MyCriteriaParser::AddSubContext *context) = 0;

    virtual std::any visitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *context) = 0;

    virtual std::any visitStrLiteral(MyCriteriaParser::StrLiteralContext *context) = 0;

    virtual std::any visitInArray(MyCriteriaParser::InArrayContext *context) = 0;

    virtual std::any visitFuncCall(MyCriteriaParser::FuncCallContext *context) = 0;

    virtual std::any visitNumber(MyCriteriaParser::NumberContext *context) = 0;

    virtual std::any visitBool(MyCriteriaParser::BoolContext *context) = 0;

    virtual std::any visitAnd(MyCriteriaParser::AndContext *context) = 0;

    virtual std::any visitObjectAccess(MyCriteriaParser::ObjectAccessContext *context) = 0;

    virtual std::any visitNotExpr(MyCriteriaParser::NotExprContext *context) = 0;

    virtual std::any visitParenExpr(MyCriteriaParser::ParenExprContext *context) = 0;

    virtual std::any visitTest_expr(MyCriteriaParser::Test_exprContext *context) = 0;

    virtual std::any visitJsonPointerInner(MyCriteriaParser::JsonPointerInnerContext *context) = 0;

    virtual std::any visitJsonPointer(MyCriteriaParser::JsonPointerContext *context) = 0;

    virtual std::any visitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *context) = 0;

    virtual std::any visitStrOrNum(MyCriteriaParser::StrOrNumContext *context) = 0;

    virtual std::any visitNumb(MyCriteriaParser::NumbContext *context) = 0;

    virtual std::any visitInArrayParser(MyCriteriaParser::InArrayParserContext *context) = 0;


};
