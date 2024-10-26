
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MyCriteriaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MyCriteriaParser.
 */
class  MyCriteriaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterApp(MyCriteriaParser::AppContext *ctx) = 0;
  virtual void exitApp(MyCriteriaParser::AppContext *ctx) = 0;

  virtual void enterNull(MyCriteriaParser::NullContext *ctx) = 0;
  virtual void exitNull(MyCriteriaParser::NullContext *ctx) = 0;

  virtual void enterComparison(MyCriteriaParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(MyCriteriaParser::ComparisonContext *ctx) = 0;

  virtual void enterOr(MyCriteriaParser::OrContext *ctx) = 0;
  virtual void exitOr(MyCriteriaParser::OrContext *ctx) = 0;

  virtual void enterMulDiv(MyCriteriaParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(MyCriteriaParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(MyCriteriaParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(MyCriteriaParser::AddSubContext *ctx) = 0;

  virtual void enterInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *ctx) = 0;
  virtual void exitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *ctx) = 0;

  virtual void enterStrLiteral(MyCriteriaParser::StrLiteralContext *ctx) = 0;
  virtual void exitStrLiteral(MyCriteriaParser::StrLiteralContext *ctx) = 0;

  virtual void enterInArray(MyCriteriaParser::InArrayContext *ctx) = 0;
  virtual void exitInArray(MyCriteriaParser::InArrayContext *ctx) = 0;

  virtual void enterFuncCall(MyCriteriaParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(MyCriteriaParser::FuncCallContext *ctx) = 0;

  virtual void enterNumber(MyCriteriaParser::NumberContext *ctx) = 0;
  virtual void exitNumber(MyCriteriaParser::NumberContext *ctx) = 0;

  virtual void enterBool(MyCriteriaParser::BoolContext *ctx) = 0;
  virtual void exitBool(MyCriteriaParser::BoolContext *ctx) = 0;

  virtual void enterAnd(MyCriteriaParser::AndContext *ctx) = 0;
  virtual void exitAnd(MyCriteriaParser::AndContext *ctx) = 0;

  virtual void enterObjectAccess(MyCriteriaParser::ObjectAccessContext *ctx) = 0;
  virtual void exitObjectAccess(MyCriteriaParser::ObjectAccessContext *ctx) = 0;

  virtual void enterNotExpr(MyCriteriaParser::NotExprContext *ctx) = 0;
  virtual void exitNotExpr(MyCriteriaParser::NotExprContext *ctx) = 0;

  virtual void enterParenExpr(MyCriteriaParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(MyCriteriaParser::ParenExprContext *ctx) = 0;

  virtual void enterTest_expr(MyCriteriaParser::Test_exprContext *ctx) = 0;
  virtual void exitTest_expr(MyCriteriaParser::Test_exprContext *ctx) = 0;

  virtual void enterObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *ctx) = 0;
  virtual void exitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *ctx) = 0;

  virtual void enterStrOrNum(MyCriteriaParser::StrOrNumContext *ctx) = 0;
  virtual void exitStrOrNum(MyCriteriaParser::StrOrNumContext *ctx) = 0;

  virtual void enterNumb(MyCriteriaParser::NumbContext *ctx) = 0;
  virtual void exitNumb(MyCriteriaParser::NumbContext *ctx) = 0;

  virtual void enterInArrayParser(MyCriteriaParser::InArrayParserContext *ctx) = 0;
  virtual void exitInArrayParser(MyCriteriaParser::InArrayParserContext *ctx) = 0;


};

