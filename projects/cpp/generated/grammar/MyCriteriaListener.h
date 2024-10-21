
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MyCriteriaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MyCriteriaParser.
 */
class  MyCriteriaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFuncCall(MyCriteriaParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(MyCriteriaParser::FuncCallContext *ctx) = 0;

  virtual void enterNull(MyCriteriaParser::NullContext *ctx) = 0;
  virtual void exitNull(MyCriteriaParser::NullContext *ctx) = 0;

  virtual void enterComparison(MyCriteriaParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(MyCriteriaParser::ComparisonContext *ctx) = 0;

  virtual void enterBool(MyCriteriaParser::BoolContext *ctx) = 0;
  virtual void exitBool(MyCriteriaParser::BoolContext *ctx) = 0;

  virtual void enterMulDiv(MyCriteriaParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(MyCriteriaParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(MyCriteriaParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(MyCriteriaParser::AddSubContext *ctx) = 0;

  virtual void enterObjectAccess(MyCriteriaParser::ObjectAccessContext *ctx) = 0;
  virtual void exitObjectAccess(MyCriteriaParser::ObjectAccessContext *ctx) = 0;

  virtual void enterInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *ctx) = 0;
  virtual void exitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *ctx) = 0;

  virtual void enterNotExpr(MyCriteriaParser::NotExprContext *ctx) = 0;
  virtual void exitNotExpr(MyCriteriaParser::NotExprContext *ctx) = 0;

  virtual void enterParenExpr(MyCriteriaParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(MyCriteriaParser::ParenExprContext *ctx) = 0;

  virtual void enterAndOr(MyCriteriaParser::AndOrContext *ctx) = 0;
  virtual void exitAndOr(MyCriteriaParser::AndOrContext *ctx) = 0;

  virtual void enterInt(MyCriteriaParser::IntContext *ctx) = 0;
  virtual void exitInt(MyCriteriaParser::IntContext *ctx) = 0;

  virtual void enterObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *ctx) = 0;
  virtual void exitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *ctx) = 0;


};

