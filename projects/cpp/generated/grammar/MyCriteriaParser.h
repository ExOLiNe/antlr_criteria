
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MyCriteriaParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    IMPORT = 15, SLASH = 16, DOT = 17, COMMA = 18, SEMICOLON = 19, SQR_L = 20, 
    SQR_R = 21, IN = 22, BOOL = 23, EXCL = 24, NULL_T = 25, S_Q = 26, D_Q = 27, 
    BUCK = 28, EQUALS = 29, STR_LITERAL = 30, INT = 31, STR = 32, WS = 33
  };

  enum {
    RuleApp = 0, RuleStatements = 1, RuleStatement = 2, RuleExpr = 3, RuleTest_expr = 4, 
    RuleImportStatement = 5, RuleIdentifierDefinitions = 6, RuleIdentifierDefinition = 7, 
    RuleIdentifierAccess = 8, RuleJsonPointerInner = 9, RuleJsonPointer = 10, 
    RuleObjectAccessParser = 11, RuleStrOrNum = 12, RuleNumb = 13, RuleInArrayParser = 14
  };

  explicit MyCriteriaParser(antlr4::TokenStream *input);

  MyCriteriaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MyCriteriaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class AppContext;
  class StatementsContext;
  class StatementContext;
  class ExprContext;
  class Test_exprContext;
  class ImportStatementContext;
  class IdentifierDefinitionsContext;
  class IdentifierDefinitionContext;
  class IdentifierAccessContext;
  class JsonPointerInnerContext;
  class JsonPointerContext;
  class ObjectAccessParserContext;
  class StrOrNumContext;
  class NumbContext;
  class InArrayParserContext; 

  class  AppContext : public antlr4::ParserRuleContext {
  public:
    AppContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AppContext* app();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImportStatementContext *importStatement();
    antlr4::tree::TerminalNode *SEMICOLON();
    IdentifierDefinitionContext *identifierDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NullContext : public ExprContext {
  public:
    NullContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NULL_T();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonContext : public ExprContext {
  public:
    ComparisonContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrContext : public ExprContext {
  public:
    OrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivContext : public ExprContext {
  public:
    MulDivContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *SLASH();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubContext : public ExprContext {
  public:
    AddSubContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InfixFuncCallContext : public ExprContext {
  public:
    InfixFuncCallContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *STR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdAccessContext : public ExprContext {
  public:
    IdAccessContext(ExprContext *ctx);

    IdentifierAccessContext *identifierAccess();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StrLiteralContext : public ExprContext {
  public:
    StrLiteralContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *STR_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InArrayContext : public ExprContext {
  public:
    InArrayContext(ExprContext *ctx);

    InArrayParserContext *inArrayParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallContext : public ExprContext {
  public:
    FuncCallContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *STR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberContext : public ExprContext {
  public:
    NumberContext(ExprContext *ctx);

    NumbContext *numb();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolContext : public ExprContext {
  public:
    BoolContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *BOOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public ExprContext {
  public:
    AndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ObjectAccessContext : public ExprContext {
  public:
    ObjectAccessContext(ExprContext *ctx);

    ObjectAccessParserContext *objectAccessParser();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExprContext : public ExprContext {
  public:
    NotExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *EXCL();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Test_exprContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    Test_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InArrayParserContext *inArrayParser();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *STR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *EXCL();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *INT();
    ObjectAccessParserContext *objectAccessParser();
    antlr4::tree::TerminalNode *STR_LITERAL();
    antlr4::tree::TerminalNode *NULL_T();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Test_exprContext* test_expr();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *STR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  IdentifierDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    IdentifierDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierDefinitionContext *> identifierDefinition();
    IdentifierDefinitionContext* identifierDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierDefinitionsContext* identifierDefinitions();

  class  IdentifierDefinitionContext : public antlr4::ParserRuleContext {
  public:
    IdentifierDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUCK();
    antlr4::tree::TerminalNode *STR();
    antlr4::tree::TerminalNode *EQUALS();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierDefinitionContext* identifierDefinition();

  class  IdentifierAccessContext : public antlr4::ParserRuleContext {
  public:
    IdentifierAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUCK();
    antlr4::tree::TerminalNode *STR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierAccessContext* identifierAccess();

  class  JsonPointerInnerContext : public antlr4::ParserRuleContext {
  public:
    JsonPointerInnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STR();
    antlr4::tree::TerminalNode* STR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SLASH();
    antlr4::tree::TerminalNode* SLASH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonPointerInnerContext* jsonPointerInner();

  class  JsonPointerContext : public antlr4::ParserRuleContext {
  public:
    JsonPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> S_Q();
    antlr4::tree::TerminalNode* S_Q(size_t i);
    JsonPointerInnerContext *jsonPointerInner();
    std::vector<antlr4::tree::TerminalNode *> D_Q();
    antlr4::tree::TerminalNode* D_Q(size_t i);
    antlr4::tree::TerminalNode *STR_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JsonPointerContext* jsonPointer();

  class  ObjectAccessParserContext : public antlr4::ParserRuleContext {
  public:
    ObjectAccessParserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQR_R();
    std::vector<antlr4::tree::TerminalNode *> SQR_L();
    antlr4::tree::TerminalNode* SQR_L(size_t i);
    std::vector<JsonPointerContext *> jsonPointer();
    JsonPointerContext* jsonPointer(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectAccessParserContext* objectAccessParser();

  class  StrOrNumContext : public antlr4::ParserRuleContext {
  public:
    StrOrNumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STR_LITERAL();
    NumbContext *numb();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrOrNumContext* strOrNum();

  class  NumbContext : public antlr4::ParserRuleContext {
  public:
    NumbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumbContext* numb();

  class  InArrayParserContext : public antlr4::ParserRuleContext {
  public:
    InArrayParserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectAccessParserContext *objectAccessParser();
    antlr4::tree::TerminalNode *SQR_L();
    std::vector<StrOrNumContext *> strOrNum();
    StrOrNumContext* strOrNum(size_t i);
    antlr4::tree::TerminalNode *SQR_R();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *EXCL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InArrayParserContext* inArrayParser();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

