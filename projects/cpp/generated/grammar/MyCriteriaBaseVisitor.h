
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "MyCriteriaVisitor.h"


/**
 * This class provides an empty implementation of MyCriteriaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MyCriteriaBaseVisitor : public MyCriteriaVisitor {
public:

  virtual std::any visitFuncCall(MyCriteriaParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNull(MyCriteriaParser::NullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(MyCriteriaParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBool(MyCriteriaParser::BoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(MyCriteriaParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(MyCriteriaParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectAccess(MyCriteriaParser::ObjectAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotExpr(MyCriteriaParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(MyCriteriaParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndOr(MyCriteriaParser::AndOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(MyCriteriaParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *ctx) override {
    return visitChildren(ctx);
  }


};

