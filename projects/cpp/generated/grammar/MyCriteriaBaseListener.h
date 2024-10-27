
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

  virtual void enterApp(MyCriteriaParser::AppContext * /*ctx*/) override { }
  virtual void exitApp(MyCriteriaParser::AppContext * /*ctx*/) override { }

  virtual void enterStatement(MyCriteriaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(MyCriteriaParser::StatementContext * /*ctx*/) override { }

  virtual void enterNull(MyCriteriaParser::NullContext * /*ctx*/) override { }
  virtual void exitNull(MyCriteriaParser::NullContext * /*ctx*/) override { }

  virtual void enterComparison(MyCriteriaParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(MyCriteriaParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterOr(MyCriteriaParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(MyCriteriaParser::OrContext * /*ctx*/) override { }

  virtual void enterMulDiv(MyCriteriaParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(MyCriteriaParser::MulDivContext * /*ctx*/) override { }

  virtual void enterAddSub(MyCriteriaParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(MyCriteriaParser::AddSubContext * /*ctx*/) override { }

  virtual void enterInfixFuncCall(MyCriteriaParser::InfixFuncCallContext * /*ctx*/) override { }
  virtual void exitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext * /*ctx*/) override { }

  virtual void enterIdAccess(MyCriteriaParser::IdAccessContext * /*ctx*/) override { }
  virtual void exitIdAccess(MyCriteriaParser::IdAccessContext * /*ctx*/) override { }

  virtual void enterStrLiteral(MyCriteriaParser::StrLiteralContext * /*ctx*/) override { }
  virtual void exitStrLiteral(MyCriteriaParser::StrLiteralContext * /*ctx*/) override { }

  virtual void enterInArray(MyCriteriaParser::InArrayContext * /*ctx*/) override { }
  virtual void exitInArray(MyCriteriaParser::InArrayContext * /*ctx*/) override { }

  virtual void enterFuncCall(MyCriteriaParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(MyCriteriaParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterNumber(MyCriteriaParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(MyCriteriaParser::NumberContext * /*ctx*/) override { }

  virtual void enterBool(MyCriteriaParser::BoolContext * /*ctx*/) override { }
  virtual void exitBool(MyCriteriaParser::BoolContext * /*ctx*/) override { }

  virtual void enterAnd(MyCriteriaParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(MyCriteriaParser::AndContext * /*ctx*/) override { }

  virtual void enterObjectAccess(MyCriteriaParser::ObjectAccessContext * /*ctx*/) override { }
  virtual void exitObjectAccess(MyCriteriaParser::ObjectAccessContext * /*ctx*/) override { }

  virtual void enterNotExpr(MyCriteriaParser::NotExprContext * /*ctx*/) override { }
  virtual void exitNotExpr(MyCriteriaParser::NotExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(MyCriteriaParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(MyCriteriaParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterTest_expr(MyCriteriaParser::Test_exprContext * /*ctx*/) override { }
  virtual void exitTest_expr(MyCriteriaParser::Test_exprContext * /*ctx*/) override { }

  virtual void enterIdentifierDefinition(MyCriteriaParser::IdentifierDefinitionContext * /*ctx*/) override { }
  virtual void exitIdentifierDefinition(MyCriteriaParser::IdentifierDefinitionContext * /*ctx*/) override { }

  virtual void enterIdentifierAccess(MyCriteriaParser::IdentifierAccessContext * /*ctx*/) override { }
  virtual void exitIdentifierAccess(MyCriteriaParser::IdentifierAccessContext * /*ctx*/) override { }

  virtual void enterJsonPointerInner(MyCriteriaParser::JsonPointerInnerContext * /*ctx*/) override { }
  virtual void exitJsonPointerInner(MyCriteriaParser::JsonPointerInnerContext * /*ctx*/) override { }

  virtual void enterJsonPointer(MyCriteriaParser::JsonPointerContext * /*ctx*/) override { }
  virtual void exitJsonPointer(MyCriteriaParser::JsonPointerContext * /*ctx*/) override { }

  virtual void enterObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext * /*ctx*/) override { }
  virtual void exitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext * /*ctx*/) override { }

  virtual void enterStrOrNum(MyCriteriaParser::StrOrNumContext * /*ctx*/) override { }
  virtual void exitStrOrNum(MyCriteriaParser::StrOrNumContext * /*ctx*/) override { }

  virtual void enterNumb(MyCriteriaParser::NumbContext * /*ctx*/) override { }
  virtual void exitNumb(MyCriteriaParser::NumbContext * /*ctx*/) override { }

  virtual void enterInArrayParser(MyCriteriaParser::InArrayParserContext * /*ctx*/) override { }
  virtual void exitInArrayParser(MyCriteriaParser::InArrayParserContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

