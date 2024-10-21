
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MyCriteriaListener.h"


/**
 * This class provides an empty implementation of MyCriteriaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MyCriteriaBaseListener : public MyCriteriaListener {
public:

  virtual void enterFuncCall(MyCriteriaParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(MyCriteriaParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterNull(MyCriteriaParser::NullContext * /*ctx*/) override { }
  virtual void exitNull(MyCriteriaParser::NullContext * /*ctx*/) override { }

  virtual void enterComparison(MyCriteriaParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(MyCriteriaParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterBool(MyCriteriaParser::BoolContext * /*ctx*/) override { }
  virtual void exitBool(MyCriteriaParser::BoolContext * /*ctx*/) override { }

  virtual void enterMulDiv(MyCriteriaParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(MyCriteriaParser::MulDivContext * /*ctx*/) override { }

  virtual void enterAddSub(MyCriteriaParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(MyCriteriaParser::AddSubContext * /*ctx*/) override { }

  virtual void enterObjectAccess(MyCriteriaParser::ObjectAccessContext * /*ctx*/) override { }
  virtual void exitObjectAccess(MyCriteriaParser::ObjectAccessContext * /*ctx*/) override { }

  virtual void enterInfixFuncCall(MyCriteriaParser::InfixFuncCallContext * /*ctx*/) override { }
  virtual void exitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext * /*ctx*/) override { }

  virtual void enterNotExpr(MyCriteriaParser::NotExprContext * /*ctx*/) override { }
  virtual void exitNotExpr(MyCriteriaParser::NotExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(MyCriteriaParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(MyCriteriaParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterAndOr(MyCriteriaParser::AndOrContext * /*ctx*/) override { }
  virtual void exitAndOr(MyCriteriaParser::AndOrContext * /*ctx*/) override { }

  virtual void enterInt(MyCriteriaParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(MyCriteriaParser::IntContext * /*ctx*/) override { }

  virtual void enterObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext * /*ctx*/) override { }
  virtual void exitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

