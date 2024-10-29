
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2


#include "MyCriteriaListener.h"
#include "MyCriteriaVisitor.h"

#include "MyCriteriaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MyCriteriaParserStaticData final {
  MyCriteriaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyCriteriaParserStaticData(const MyCriteriaParserStaticData&) = delete;
  MyCriteriaParserStaticData(MyCriteriaParserStaticData&&) = delete;
  MyCriteriaParserStaticData& operator=(const MyCriteriaParserStaticData&) = delete;
  MyCriteriaParserStaticData& operator=(MyCriteriaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mycriteriaParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MyCriteriaParserStaticData> mycriteriaParserStaticData = nullptr;

void mycriteriaParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mycriteriaParserStaticData != nullptr) {
    return;
  }
#else
  assert(mycriteriaParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MyCriteriaParserStaticData>(
    std::vector<std::string>{
      "app", "statements", "statement", "expr", "objectAccessParser", "importStatement", 
      "identifierDefinitions", "identifierDefinition", "strOrNum", "numb"
    },
    std::vector<std::string>{
      "", "'import'", "'/'", "'.'", "','", "';'", "'['", "']'", "'('", "')'", 
      "'>='", "'<='", "'>'", "'<'", "'=='", "'!='", "'&&'", "'||'", "'true'", 
      "'false'", "'!'", "'null'", "'$'", "'='", "'object'", "'*'", "'+'", 
      "'-'"
    },
    std::vector<std::string>{
      "", "IMPORT", "SLASH", "DOT", "COMMA", "SEMICOLON", "SQR_L", "SQR_R", 
      "PAR_L", "PAR_R", "GTE", "LTE", "GT", "LT", "EQUALS", "NOT_EQUALS", 
      "AND", "OR", "TRUE", "FALSE", "EXCL", "NULL_T", "BUCK", "ASSIGN", 
      "OBJECT", "MUL", "ADD", "SUB", "INT", "IDENTIFIER", "STR_LITERAL", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,149,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,5,0,22,8,0,10,0,12,0,25,9,0,1,0,1,0,1,1,4,1,
  	30,8,1,11,1,12,1,31,1,2,1,2,1,2,1,2,1,2,1,2,3,2,40,8,2,1,3,1,3,1,3,1,
  	3,1,3,5,3,47,8,3,10,3,12,3,50,9,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,59,
  	8,3,10,3,12,3,62,9,3,1,3,3,3,65,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,3,3,81,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,105,8,3,10,3,
  	12,3,108,9,3,1,4,1,4,4,4,112,8,4,11,4,12,4,113,1,4,4,4,117,8,4,11,4,12,
  	4,118,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,5,6,129,8,6,10,6,12,6,132,9,6,1,
  	7,1,7,1,7,1,7,1,7,1,8,1,8,3,8,141,8,8,1,9,1,9,1,9,1,9,3,9,147,8,9,1,9,
  	0,1,6,10,0,2,4,6,8,10,12,14,16,18,0,4,1,0,18,19,2,0,2,2,25,25,1,0,26,
  	27,1,0,10,15,165,0,23,1,0,0,0,2,29,1,0,0,0,4,39,1,0,0,0,6,80,1,0,0,0,
  	8,109,1,0,0,0,10,122,1,0,0,0,12,130,1,0,0,0,14,133,1,0,0,0,16,140,1,0,
  	0,0,18,146,1,0,0,0,20,22,3,4,2,0,21,20,1,0,0,0,22,25,1,0,0,0,23,21,1,
  	0,0,0,23,24,1,0,0,0,24,26,1,0,0,0,25,23,1,0,0,0,26,27,3,6,3,0,27,1,1,
  	0,0,0,28,30,3,4,2,0,29,28,1,0,0,0,30,31,1,0,0,0,31,29,1,0,0,0,31,32,1,
  	0,0,0,32,3,1,0,0,0,33,34,3,10,5,0,34,35,5,5,0,0,35,40,1,0,0,0,36,37,3,
  	14,7,0,37,38,5,5,0,0,38,40,1,0,0,0,39,33,1,0,0,0,39,36,1,0,0,0,40,5,1,
  	0,0,0,41,42,6,3,-1,0,42,43,5,6,0,0,43,48,3,6,3,0,44,45,5,4,0,0,45,47,
  	3,6,3,0,46,44,1,0,0,0,47,50,1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,51,
  	1,0,0,0,50,48,1,0,0,0,51,52,5,7,0,0,52,81,1,0,0,0,53,54,5,29,0,0,54,60,
  	5,8,0,0,55,56,3,6,3,0,56,57,5,4,0,0,57,59,1,0,0,0,58,55,1,0,0,0,59,62,
  	1,0,0,0,60,58,1,0,0,0,60,61,1,0,0,0,61,64,1,0,0,0,62,60,1,0,0,0,63,65,
  	3,6,3,0,64,63,1,0,0,0,64,65,1,0,0,0,65,66,1,0,0,0,66,81,5,9,0,0,67,68,
  	5,20,0,0,68,81,3,6,3,8,69,70,5,8,0,0,70,71,3,6,3,0,71,72,5,9,0,0,72,81,
  	1,0,0,0,73,81,7,0,0,0,74,81,3,18,9,0,75,81,5,21,0,0,76,81,5,30,0,0,77,
  	78,5,22,0,0,78,81,5,29,0,0,79,81,3,8,4,0,80,41,1,0,0,0,80,53,1,0,0,0,
  	80,67,1,0,0,0,80,69,1,0,0,0,80,73,1,0,0,0,80,74,1,0,0,0,80,75,1,0,0,0,
  	80,76,1,0,0,0,80,77,1,0,0,0,80,79,1,0,0,0,81,106,1,0,0,0,82,83,10,16,
  	0,0,83,84,7,1,0,0,84,105,3,6,3,17,85,86,10,15,0,0,86,87,7,2,0,0,87,105,
  	3,6,3,16,88,89,10,13,0,0,89,90,5,29,0,0,90,105,3,6,3,14,91,92,10,12,0,
  	0,92,93,5,20,0,0,93,94,5,29,0,0,94,105,3,6,3,13,95,96,10,11,0,0,96,97,
  	7,3,0,0,97,105,3,6,3,12,98,99,10,10,0,0,99,100,5,16,0,0,100,105,3,6,3,
  	11,101,102,10,9,0,0,102,103,5,17,0,0,103,105,3,6,3,10,104,82,1,0,0,0,
  	104,85,1,0,0,0,104,88,1,0,0,0,104,91,1,0,0,0,104,95,1,0,0,0,104,98,1,
  	0,0,0,104,101,1,0,0,0,105,108,1,0,0,0,106,104,1,0,0,0,106,107,1,0,0,0,
  	107,7,1,0,0,0,108,106,1,0,0,0,109,111,5,24,0,0,110,112,5,6,0,0,111,110,
  	1,0,0,0,112,113,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,116,1,0,0,
  	0,115,117,5,30,0,0,116,115,1,0,0,0,117,118,1,0,0,0,118,116,1,0,0,0,118,
  	119,1,0,0,0,119,120,1,0,0,0,120,121,5,7,0,0,121,9,1,0,0,0,122,123,5,1,
  	0,0,123,124,5,29,0,0,124,11,1,0,0,0,125,126,3,14,7,0,126,127,5,5,0,0,
  	127,129,1,0,0,0,128,125,1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,130,131,
  	1,0,0,0,131,13,1,0,0,0,132,130,1,0,0,0,133,134,5,22,0,0,134,135,5,29,
  	0,0,135,136,5,23,0,0,136,137,3,6,3,0,137,15,1,0,0,0,138,141,5,30,0,0,
  	139,141,3,18,9,0,140,138,1,0,0,0,140,139,1,0,0,0,141,17,1,0,0,0,142,147,
  	5,28,0,0,143,144,5,28,0,0,144,145,5,3,0,0,145,147,5,28,0,0,146,142,1,
  	0,0,0,146,143,1,0,0,0,147,19,1,0,0,0,14,23,31,39,48,60,64,80,104,106,
  	113,118,130,140,146
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mycriteriaParserStaticData = std::move(staticData);
}

}

MyCriteriaParser::MyCriteriaParser(TokenStream *input) : MyCriteriaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MyCriteriaParser::MyCriteriaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MyCriteriaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mycriteriaParserStaticData->atn, mycriteriaParserStaticData->decisionToDFA, mycriteriaParserStaticData->sharedContextCache, options);
}

MyCriteriaParser::~MyCriteriaParser() {
  delete _interpreter;
}

const atn::ATN& MyCriteriaParser::getATN() const {
  return *mycriteriaParserStaticData->atn;
}

std::string MyCriteriaParser::getGrammarFileName() const {
  return "MyCriteria.g4";
}

const std::vector<std::string>& MyCriteriaParser::getRuleNames() const {
  return mycriteriaParserStaticData->ruleNames;
}

const dfa::Vocabulary& MyCriteriaParser::getVocabulary() const {
  return mycriteriaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MyCriteriaParser::getSerializedATN() const {
  return mycriteriaParserStaticData->serializedATN;
}


//----------------- AppContext ------------------------------------------------------------------

MyCriteriaParser::AppContext::AppContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyCriteriaParser::ExprContext* MyCriteriaParser::AppContext::expr() {
  return getRuleContext<MyCriteriaParser::ExprContext>(0);
}

std::vector<MyCriteriaParser::StatementContext *> MyCriteriaParser::AppContext::statement() {
  return getRuleContexts<MyCriteriaParser::StatementContext>();
}

MyCriteriaParser::StatementContext* MyCriteriaParser::AppContext::statement(size_t i) {
  return getRuleContext<MyCriteriaParser::StatementContext>(i);
}


size_t MyCriteriaParser::AppContext::getRuleIndex() const {
  return MyCriteriaParser::RuleApp;
}

void MyCriteriaParser::AppContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterApp(this);
}

void MyCriteriaParser::AppContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitApp(this);
}


std::any MyCriteriaParser::AppContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitApp(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::AppContext* MyCriteriaParser::app() {
  AppContext *_localctx = _tracker.createInstance<AppContext>(_ctx, getState());
  enterRule(_localctx, 0, MyCriteriaParser::RuleApp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(23);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(20);
        statement(); 
      }
      setState(25);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(26);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

MyCriteriaParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyCriteriaParser::StatementContext *> MyCriteriaParser::StatementsContext::statement() {
  return getRuleContexts<MyCriteriaParser::StatementContext>();
}

MyCriteriaParser::StatementContext* MyCriteriaParser::StatementsContext::statement(size_t i) {
  return getRuleContext<MyCriteriaParser::StatementContext>(i);
}


size_t MyCriteriaParser::StatementsContext::getRuleIndex() const {
  return MyCriteriaParser::RuleStatements;
}

void MyCriteriaParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void MyCriteriaParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


std::any MyCriteriaParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::StatementsContext* MyCriteriaParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, MyCriteriaParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(28);
      statement();
      setState(31); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::IMPORT

    || _la == MyCriteriaParser::BUCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MyCriteriaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyCriteriaParser::ImportStatementContext* MyCriteriaParser::StatementContext::importStatement() {
  return getRuleContext<MyCriteriaParser::ImportStatementContext>(0);
}

tree::TerminalNode* MyCriteriaParser::StatementContext::SEMICOLON() {
  return getToken(MyCriteriaParser::SEMICOLON, 0);
}

MyCriteriaParser::IdentifierDefinitionContext* MyCriteriaParser::StatementContext::identifierDefinition() {
  return getRuleContext<MyCriteriaParser::IdentifierDefinitionContext>(0);
}


size_t MyCriteriaParser::StatementContext::getRuleIndex() const {
  return MyCriteriaParser::RuleStatement;
}

void MyCriteriaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void MyCriteriaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any MyCriteriaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::StatementContext* MyCriteriaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, MyCriteriaParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::IMPORT: {
        enterOuterAlt(_localctx, 1);
        setState(33);
        importStatement();
        setState(34);
        match(MyCriteriaParser::SEMICOLON);
        break;
      }

      case MyCriteriaParser::BUCK: {
        enterOuterAlt(_localctx, 2);
        setState(36);
        identifierDefinition();
        setState(37);
        match(MyCriteriaParser::SEMICOLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MyCriteriaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyCriteriaParser::ExprContext::getRuleIndex() const {
  return MyCriteriaParser::RuleExpr;
}

void MyCriteriaParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NullContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::NullContext::NULL_T() {
  return getToken(MyCriteriaParser::NULL_T, 0);
}

MyCriteriaParser::NullContext::NullContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::NullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNull(this);
}
void MyCriteriaParser::NullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNull(this);
}

std::any MyCriteriaParser::NullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitNull(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfixFuncCallNotContext ------------------------------------------------------------------

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::InfixFuncCallNotContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::InfixFuncCallNotContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::InfixFuncCallNotContext::EXCL() {
  return getToken(MyCriteriaParser::EXCL, 0);
}

tree::TerminalNode* MyCriteriaParser::InfixFuncCallNotContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}

MyCriteriaParser::InfixFuncCallNotContext::InfixFuncCallNotContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::InfixFuncCallNotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixFuncCallNot(this);
}
void MyCriteriaParser::InfixFuncCallNotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixFuncCallNot(this);
}

std::any MyCriteriaParser::InfixFuncCallNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitInfixFuncCallNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonContext ------------------------------------------------------------------

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::ComparisonContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::ComparisonContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::ComparisonContext::GT() {
  return getToken(MyCriteriaParser::GT, 0);
}

tree::TerminalNode* MyCriteriaParser::ComparisonContext::GTE() {
  return getToken(MyCriteriaParser::GTE, 0);
}

tree::TerminalNode* MyCriteriaParser::ComparisonContext::LT() {
  return getToken(MyCriteriaParser::LT, 0);
}

tree::TerminalNode* MyCriteriaParser::ComparisonContext::LTE() {
  return getToken(MyCriteriaParser::LTE, 0);
}

tree::TerminalNode* MyCriteriaParser::ComparisonContext::EQUALS() {
  return getToken(MyCriteriaParser::EQUALS, 0);
}

tree::TerminalNode* MyCriteriaParser::ComparisonContext::NOT_EQUALS() {
  return getToken(MyCriteriaParser::NOT_EQUALS, 0);
}

MyCriteriaParser::ComparisonContext::ComparisonContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}
void MyCriteriaParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

std::any MyCriteriaParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::OrContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::OrContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::OrContext::OR() {
  return getToken(MyCriteriaParser::OR, 0);
}

MyCriteriaParser::OrContext::OrContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void MyCriteriaParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}

std::any MyCriteriaParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::MulDivContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::MulDivContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::MulDivContext::MUL() {
  return getToken(MyCriteriaParser::MUL, 0);
}

tree::TerminalNode* MyCriteriaParser::MulDivContext::SLASH() {
  return getToken(MyCriteriaParser::SLASH, 0);
}

MyCriteriaParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::MulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDiv(this);
}
void MyCriteriaParser::MulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDiv(this);
}

std::any MyCriteriaParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::AddSubContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::AddSubContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::AddSubContext::ADD() {
  return getToken(MyCriteriaParser::ADD, 0);
}

tree::TerminalNode* MyCriteriaParser::AddSubContext::SUB() {
  return getToken(MyCriteriaParser::SUB, 0);
}

MyCriteriaParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void MyCriteriaParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}

std::any MyCriteriaParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfixFuncCallContext ------------------------------------------------------------------

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::InfixFuncCallContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::InfixFuncCallContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::InfixFuncCallContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}

MyCriteriaParser::InfixFuncCallContext::InfixFuncCallContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::InfixFuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixFuncCall(this);
}
void MyCriteriaParser::InfixFuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixFuncCall(this);
}

std::any MyCriteriaParser::InfixFuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitInfixFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrLiteralContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::StrLiteralContext::STR_LITERAL() {
  return getToken(MyCriteriaParser::STR_LITERAL, 0);
}

MyCriteriaParser::StrLiteralContext::StrLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::StrLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStrLiteral(this);
}
void MyCriteriaParser::StrLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStrLiteral(this);
}

std::any MyCriteriaParser::StrLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitStrLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdAccessContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::IdAccessContext::BUCK() {
  return getToken(MyCriteriaParser::BUCK, 0);
}

tree::TerminalNode* MyCriteriaParser::IdAccessContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}

MyCriteriaParser::IdAccessContext::IdAccessContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::IdAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdAccess(this);
}
void MyCriteriaParser::IdAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdAccess(this);
}

std::any MyCriteriaParser::IdAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitIdAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::ArrayContext::SQR_L() {
  return getToken(MyCriteriaParser::SQR_L, 0);
}

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::ArrayContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::ArrayContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::ArrayContext::SQR_R() {
  return getToken(MyCriteriaParser::SQR_R, 0);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::ArrayContext::COMMA() {
  return getTokens(MyCriteriaParser::COMMA);
}

tree::TerminalNode* MyCriteriaParser::ArrayContext::COMMA(size_t i) {
  return getToken(MyCriteriaParser::COMMA, i);
}

MyCriteriaParser::ArrayContext::ArrayContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}
void MyCriteriaParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}

std::any MyCriteriaParser::ArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::FuncCallContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}

tree::TerminalNode* MyCriteriaParser::FuncCallContext::PAR_L() {
  return getToken(MyCriteriaParser::PAR_L, 0);
}

tree::TerminalNode* MyCriteriaParser::FuncCallContext::PAR_R() {
  return getToken(MyCriteriaParser::PAR_R, 0);
}

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::FuncCallContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::FuncCallContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::FuncCallContext::COMMA() {
  return getTokens(MyCriteriaParser::COMMA);
}

tree::TerminalNode* MyCriteriaParser::FuncCallContext::COMMA(size_t i) {
  return getToken(MyCriteriaParser::COMMA, i);
}

MyCriteriaParser::FuncCallContext::FuncCallContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}
void MyCriteriaParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}

std::any MyCriteriaParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

MyCriteriaParser::NumbContext* MyCriteriaParser::NumberContext::numb() {
  return getRuleContext<MyCriteriaParser::NumbContext>(0);
}

MyCriteriaParser::NumberContext::NumberContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}
void MyCriteriaParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

std::any MyCriteriaParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::BoolContext::TRUE() {
  return getToken(MyCriteriaParser::TRUE, 0);
}

tree::TerminalNode* MyCriteriaParser::BoolContext::FALSE() {
  return getToken(MyCriteriaParser::FALSE, 0);
}

MyCriteriaParser::BoolContext::BoolContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::BoolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool(this);
}
void MyCriteriaParser::BoolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool(this);
}

std::any MyCriteriaParser::BoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitBool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::AndContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::AndContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::AndContext::AND() {
  return getToken(MyCriteriaParser::AND, 0);
}

MyCriteriaParser::AndContext::AndContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void MyCriteriaParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

std::any MyCriteriaParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ObjectAccessContext ------------------------------------------------------------------

MyCriteriaParser::ObjectAccessParserContext* MyCriteriaParser::ObjectAccessContext::objectAccessParser() {
  return getRuleContext<MyCriteriaParser::ObjectAccessParserContext>(0);
}

MyCriteriaParser::ObjectAccessContext::ObjectAccessContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::ObjectAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectAccess(this);
}
void MyCriteriaParser::ObjectAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectAccess(this);
}

std::any MyCriteriaParser::ObjectAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitObjectAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::NotExprContext::EXCL() {
  return getToken(MyCriteriaParser::EXCL, 0);
}

MyCriteriaParser::ExprContext* MyCriteriaParser::NotExprContext::expr() {
  return getRuleContext<MyCriteriaParser::ExprContext>(0);
}

MyCriteriaParser::NotExprContext::NotExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::NotExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpr(this);
}
void MyCriteriaParser::NotExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpr(this);
}

std::any MyCriteriaParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::ParenExprContext::PAR_L() {
  return getToken(MyCriteriaParser::PAR_L, 0);
}

MyCriteriaParser::ExprContext* MyCriteriaParser::ParenExprContext::expr() {
  return getRuleContext<MyCriteriaParser::ExprContext>(0);
}

tree::TerminalNode* MyCriteriaParser::ParenExprContext::PAR_R() {
  return getToken(MyCriteriaParser::PAR_R, 0);
}

MyCriteriaParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void MyCriteriaParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any MyCriteriaParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::ExprContext* MyCriteriaParser::expr() {
   return expr(0);
}

MyCriteriaParser::ExprContext* MyCriteriaParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MyCriteriaParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MyCriteriaParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, MyCriteriaParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::SQR_L: {
        _localctx = _tracker.createInstance<ArrayContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(42);
        match(MyCriteriaParser::SQR_L);
        setState(43);
        expr(0);
        setState(48);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MyCriteriaParser::COMMA) {
          setState(44);
          match(MyCriteriaParser::COMMA);
          setState(45);
          expr(0);
          setState(50);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(51);
        match(MyCriteriaParser::SQR_R);
        break;
      }

      case MyCriteriaParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(53);
        match(MyCriteriaParser::IDENTIFIER);
        setState(54);
        match(MyCriteriaParser::PAR_L);
        setState(60);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(55);
            expr(0);
            setState(56);
            match(MyCriteriaParser::COMMA); 
          }
          setState(62);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
        }
        setState(64);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1903952192) != 0)) {
          setState(63);
          expr(0);
        }
        setState(66);
        match(MyCriteriaParser::PAR_R);
        break;
      }

      case MyCriteriaParser::EXCL: {
        _localctx = _tracker.createInstance<NotExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(67);
        match(MyCriteriaParser::EXCL);
        setState(68);
        expr(8);
        break;
      }

      case MyCriteriaParser::PAR_L: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(69);
        match(MyCriteriaParser::PAR_L);
        setState(70);
        expr(0);
        setState(71);
        match(MyCriteriaParser::PAR_R);
        break;
      }

      case MyCriteriaParser::TRUE:
      case MyCriteriaParser::FALSE: {
        _localctx = _tracker.createInstance<BoolContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(73);
        _la = _input->LA(1);
        if (!(_la == MyCriteriaParser::TRUE

        || _la == MyCriteriaParser::FALSE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case MyCriteriaParser::INT: {
        _localctx = _tracker.createInstance<NumberContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(74);
        numb();
        break;
      }

      case MyCriteriaParser::NULL_T: {
        _localctx = _tracker.createInstance<NullContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(75);
        match(MyCriteriaParser::NULL_T);
        break;
      }

      case MyCriteriaParser::STR_LITERAL: {
        _localctx = _tracker.createInstance<StrLiteralContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(76);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::BUCK: {
        _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(77);
        match(MyCriteriaParser::BUCK);
        setState(78);
        match(MyCriteriaParser::IDENTIFIER);
        break;
      }

      case MyCriteriaParser::OBJECT: {
        _localctx = _tracker.createInstance<ObjectAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(79);
        objectAccessParser();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(106);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(104);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(82);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(83);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MyCriteriaParser::SLASH

          || _la == MyCriteriaParser::MUL)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(84);
          expr(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(85);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(86);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MyCriteriaParser::ADD

          || _la == MyCriteriaParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(87);
          expr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<InfixFuncCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(89);
          match(MyCriteriaParser::IDENTIFIER);
          setState(90);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<InfixFuncCallNotContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(92);
          match(MyCriteriaParser::EXCL);
          setState(93);
          match(MyCriteriaParser::IDENTIFIER);
          setState(94);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(95);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(96);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 64512) != 0))) {
            antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(97);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(98);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(99);
          match(MyCriteriaParser::AND);
          setState(100);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(101);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(102);
          match(MyCriteriaParser::OR);
          setState(103);
          expr(10);
          break;
        }

        default:
          break;
        } 
      }
      setState(108);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ObjectAccessParserContext ------------------------------------------------------------------

MyCriteriaParser::ObjectAccessParserContext::ObjectAccessParserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::ObjectAccessParserContext::OBJECT() {
  return getToken(MyCriteriaParser::OBJECT, 0);
}

tree::TerminalNode* MyCriteriaParser::ObjectAccessParserContext::SQR_R() {
  return getToken(MyCriteriaParser::SQR_R, 0);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::ObjectAccessParserContext::SQR_L() {
  return getTokens(MyCriteriaParser::SQR_L);
}

tree::TerminalNode* MyCriteriaParser::ObjectAccessParserContext::SQR_L(size_t i) {
  return getToken(MyCriteriaParser::SQR_L, i);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::ObjectAccessParserContext::STR_LITERAL() {
  return getTokens(MyCriteriaParser::STR_LITERAL);
}

tree::TerminalNode* MyCriteriaParser::ObjectAccessParserContext::STR_LITERAL(size_t i) {
  return getToken(MyCriteriaParser::STR_LITERAL, i);
}


size_t MyCriteriaParser::ObjectAccessParserContext::getRuleIndex() const {
  return MyCriteriaParser::RuleObjectAccessParser;
}

void MyCriteriaParser::ObjectAccessParserContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectAccessParser(this);
}

void MyCriteriaParser::ObjectAccessParserContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectAccessParser(this);
}


std::any MyCriteriaParser::ObjectAccessParserContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitObjectAccessParser(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::ObjectAccessParserContext* MyCriteriaParser::objectAccessParser() {
  ObjectAccessParserContext *_localctx = _tracker.createInstance<ObjectAccessParserContext>(_ctx, getState());
  enterRule(_localctx, 8, MyCriteriaParser::RuleObjectAccessParser);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(MyCriteriaParser::OBJECT);
    setState(111); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      match(MyCriteriaParser::SQR_L);
      setState(113); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::SQR_L);
    setState(116); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(115);
      match(MyCriteriaParser::STR_LITERAL);
      setState(118); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::STR_LITERAL);
    setState(120);
    match(MyCriteriaParser::SQR_R);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

MyCriteriaParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::ImportStatementContext::IMPORT() {
  return getToken(MyCriteriaParser::IMPORT, 0);
}

tree::TerminalNode* MyCriteriaParser::ImportStatementContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}


size_t MyCriteriaParser::ImportStatementContext::getRuleIndex() const {
  return MyCriteriaParser::RuleImportStatement;
}

void MyCriteriaParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void MyCriteriaParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}


std::any MyCriteriaParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::ImportStatementContext* MyCriteriaParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, MyCriteriaParser::RuleImportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(MyCriteriaParser::IMPORT);
    setState(123);
    match(MyCriteriaParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierDefinitionsContext ------------------------------------------------------------------

MyCriteriaParser::IdentifierDefinitionsContext::IdentifierDefinitionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyCriteriaParser::IdentifierDefinitionContext *> MyCriteriaParser::IdentifierDefinitionsContext::identifierDefinition() {
  return getRuleContexts<MyCriteriaParser::IdentifierDefinitionContext>();
}

MyCriteriaParser::IdentifierDefinitionContext* MyCriteriaParser::IdentifierDefinitionsContext::identifierDefinition(size_t i) {
  return getRuleContext<MyCriteriaParser::IdentifierDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::IdentifierDefinitionsContext::SEMICOLON() {
  return getTokens(MyCriteriaParser::SEMICOLON);
}

tree::TerminalNode* MyCriteriaParser::IdentifierDefinitionsContext::SEMICOLON(size_t i) {
  return getToken(MyCriteriaParser::SEMICOLON, i);
}


size_t MyCriteriaParser::IdentifierDefinitionsContext::getRuleIndex() const {
  return MyCriteriaParser::RuleIdentifierDefinitions;
}

void MyCriteriaParser::IdentifierDefinitionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierDefinitions(this);
}

void MyCriteriaParser::IdentifierDefinitionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierDefinitions(this);
}


std::any MyCriteriaParser::IdentifierDefinitionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitIdentifierDefinitions(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::IdentifierDefinitionsContext* MyCriteriaParser::identifierDefinitions() {
  IdentifierDefinitionsContext *_localctx = _tracker.createInstance<IdentifierDefinitionsContext>(_ctx, getState());
  enterRule(_localctx, 12, MyCriteriaParser::RuleIdentifierDefinitions);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyCriteriaParser::BUCK) {
      setState(125);
      identifierDefinition();
      setState(126);
      match(MyCriteriaParser::SEMICOLON);
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierDefinitionContext ------------------------------------------------------------------

MyCriteriaParser::IdentifierDefinitionContext::IdentifierDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::IdentifierDefinitionContext::BUCK() {
  return getToken(MyCriteriaParser::BUCK, 0);
}

tree::TerminalNode* MyCriteriaParser::IdentifierDefinitionContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}

tree::TerminalNode* MyCriteriaParser::IdentifierDefinitionContext::ASSIGN() {
  return getToken(MyCriteriaParser::ASSIGN, 0);
}

MyCriteriaParser::ExprContext* MyCriteriaParser::IdentifierDefinitionContext::expr() {
  return getRuleContext<MyCriteriaParser::ExprContext>(0);
}


size_t MyCriteriaParser::IdentifierDefinitionContext::getRuleIndex() const {
  return MyCriteriaParser::RuleIdentifierDefinition;
}

void MyCriteriaParser::IdentifierDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierDefinition(this);
}

void MyCriteriaParser::IdentifierDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierDefinition(this);
}


std::any MyCriteriaParser::IdentifierDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitIdentifierDefinition(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::IdentifierDefinitionContext* MyCriteriaParser::identifierDefinition() {
  IdentifierDefinitionContext *_localctx = _tracker.createInstance<IdentifierDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 14, MyCriteriaParser::RuleIdentifierDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(MyCriteriaParser::BUCK);
    setState(134);
    match(MyCriteriaParser::IDENTIFIER);
    setState(135);
    match(MyCriteriaParser::ASSIGN);
    setState(136);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrOrNumContext ------------------------------------------------------------------

MyCriteriaParser::StrOrNumContext::StrOrNumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::StrOrNumContext::STR_LITERAL() {
  return getToken(MyCriteriaParser::STR_LITERAL, 0);
}

MyCriteriaParser::NumbContext* MyCriteriaParser::StrOrNumContext::numb() {
  return getRuleContext<MyCriteriaParser::NumbContext>(0);
}


size_t MyCriteriaParser::StrOrNumContext::getRuleIndex() const {
  return MyCriteriaParser::RuleStrOrNum;
}

void MyCriteriaParser::StrOrNumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStrOrNum(this);
}

void MyCriteriaParser::StrOrNumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStrOrNum(this);
}


std::any MyCriteriaParser::StrOrNumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitStrOrNum(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::StrOrNumContext* MyCriteriaParser::strOrNum() {
  StrOrNumContext *_localctx = _tracker.createInstance<StrOrNumContext>(_ctx, getState());
  enterRule(_localctx, 16, MyCriteriaParser::RuleStrOrNum);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(138);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(139);
        numb();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumbContext ------------------------------------------------------------------

MyCriteriaParser::NumbContext::NumbContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MyCriteriaParser::NumbContext::INT() {
  return getTokens(MyCriteriaParser::INT);
}

tree::TerminalNode* MyCriteriaParser::NumbContext::INT(size_t i) {
  return getToken(MyCriteriaParser::INT, i);
}

tree::TerminalNode* MyCriteriaParser::NumbContext::DOT() {
  return getToken(MyCriteriaParser::DOT, 0);
}


size_t MyCriteriaParser::NumbContext::getRuleIndex() const {
  return MyCriteriaParser::RuleNumb;
}

void MyCriteriaParser::NumbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumb(this);
}

void MyCriteriaParser::NumbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumb(this);
}


std::any MyCriteriaParser::NumbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitNumb(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::NumbContext* MyCriteriaParser::numb() {
  NumbContext *_localctx = _tracker.createInstance<NumbContext>(_ctx, getState());
  enterRule(_localctx, 18, MyCriteriaParser::RuleNumb);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      match(MyCriteriaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      match(MyCriteriaParser::INT);
      setState(144);
      match(MyCriteriaParser::DOT);
      setState(145);
      match(MyCriteriaParser::INT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MyCriteriaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MyCriteriaParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

void MyCriteriaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mycriteriaParserInitialize();
#else
  ::antlr4::internal::call_once(mycriteriaParserOnceFlag, mycriteriaParserInitialize);
#endif
}
