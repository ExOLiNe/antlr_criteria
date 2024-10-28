
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
      "app", "statements", "statement", "expr", "objectAccessParser", "identifierAccess", 
      "importStatement", "identifierDefinitions", "identifierDefinition", 
      "strOrNum", "inArrayParser", "numb"
    },
    std::vector<std::string>{
      "", "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
      "'=='", "'!='", "'&&'", "'||'", "'import'", "'/'", "'.'", "','", "';'", 
      "'['", "']'", "'in'", "", "'!'", "'null'", "'$'", "'='", "'object'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IMPORT", 
      "SLASH", "DOT", "COMMA", "SEMICOLON", "SQR_L", "SQR_R", "IN", "BOOL", 
      "EXCL", "NULL_T", "BUCK", "EQUALS", "OBJECT", "INT", "IDENTIFIER", 
      "STR_LITERAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,162,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,5,0,26,8,0,10,0,12,0,29,
  	9,0,1,0,1,0,1,1,4,1,34,8,1,11,1,12,1,35,1,2,1,2,1,2,1,2,1,2,1,2,3,2,44,
  	8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,53,8,3,10,3,12,3,56,9,3,1,3,3,3,59,
  	8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,74,8,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,5,3,98,8,3,10,3,12,3,101,9,3,1,4,1,4,4,4,105,8,4,11,4,
  	12,4,106,1,4,4,4,110,8,4,11,4,12,4,111,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,
  	6,1,7,1,7,1,7,5,7,125,8,7,10,7,12,7,128,9,7,1,8,1,8,1,8,1,8,1,8,1,9,1,
  	9,3,9,137,8,9,1,10,1,10,1,10,1,10,3,10,143,8,10,1,10,1,10,1,10,1,10,5,
  	10,149,8,10,10,10,12,10,152,9,10,1,10,1,10,1,11,1,11,1,11,1,11,3,11,160,
  	8,11,1,11,0,1,6,12,0,2,4,6,8,10,12,14,16,18,20,22,0,3,2,0,1,1,15,15,1,
  	0,2,3,1,0,6,11,177,0,27,1,0,0,0,2,33,1,0,0,0,4,43,1,0,0,0,6,73,1,0,0,
  	0,8,102,1,0,0,0,10,115,1,0,0,0,12,118,1,0,0,0,14,126,1,0,0,0,16,129,1,
  	0,0,0,18,136,1,0,0,0,20,138,1,0,0,0,22,159,1,0,0,0,24,26,3,4,2,0,25,24,
  	1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,0,28,30,1,0,0,0,29,27,
  	1,0,0,0,30,31,3,6,3,0,31,1,1,0,0,0,32,34,3,4,2,0,33,32,1,0,0,0,34,35,
  	1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,36,3,1,0,0,0,37,38,3,12,6,0,38,39,
  	5,18,0,0,39,44,1,0,0,0,40,41,3,16,8,0,41,42,5,18,0,0,42,44,1,0,0,0,43,
  	37,1,0,0,0,43,40,1,0,0,0,44,5,1,0,0,0,45,46,6,3,-1,0,46,74,3,20,10,0,
  	47,48,5,29,0,0,48,54,5,4,0,0,49,50,3,6,3,0,50,51,5,17,0,0,51,53,1,0,0,
  	0,52,49,1,0,0,0,53,56,1,0,0,0,54,52,1,0,0,0,54,55,1,0,0,0,55,58,1,0,0,
  	0,56,54,1,0,0,0,57,59,3,6,3,0,58,57,1,0,0,0,58,59,1,0,0,0,59,60,1,0,0,
  	0,60,74,5,5,0,0,61,62,5,23,0,0,62,74,3,6,3,8,63,64,5,4,0,0,64,65,3,6,
  	3,0,65,66,5,5,0,0,66,74,1,0,0,0,67,74,5,22,0,0,68,74,3,22,11,0,69,74,
  	5,24,0,0,70,74,5,30,0,0,71,74,3,10,5,0,72,74,3,8,4,0,73,45,1,0,0,0,73,
  	47,1,0,0,0,73,61,1,0,0,0,73,63,1,0,0,0,73,67,1,0,0,0,73,68,1,0,0,0,73,
  	69,1,0,0,0,73,70,1,0,0,0,73,71,1,0,0,0,73,72,1,0,0,0,74,99,1,0,0,0,75,
  	76,10,16,0,0,76,77,7,0,0,0,77,98,3,6,3,17,78,79,10,15,0,0,79,80,7,1,0,
  	0,80,98,3,6,3,16,81,82,10,13,0,0,82,83,5,29,0,0,83,98,3,6,3,14,84,85,
  	10,12,0,0,85,86,5,23,0,0,86,87,5,29,0,0,87,98,3,6,3,13,88,89,10,11,0,
  	0,89,90,7,2,0,0,90,98,3,6,3,12,91,92,10,10,0,0,92,93,5,12,0,0,93,98,3,
  	6,3,11,94,95,10,9,0,0,95,96,5,13,0,0,96,98,3,6,3,10,97,75,1,0,0,0,97,
  	78,1,0,0,0,97,81,1,0,0,0,97,84,1,0,0,0,97,88,1,0,0,0,97,91,1,0,0,0,97,
  	94,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,7,1,0,0,0,
  	101,99,1,0,0,0,102,104,5,27,0,0,103,105,5,19,0,0,104,103,1,0,0,0,105,
  	106,1,0,0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,109,1,0,0,0,108,110,5,
  	30,0,0,109,108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,
  	0,112,113,1,0,0,0,113,114,5,20,0,0,114,9,1,0,0,0,115,116,5,25,0,0,116,
  	117,5,29,0,0,117,11,1,0,0,0,118,119,5,14,0,0,119,120,5,29,0,0,120,13,
  	1,0,0,0,121,122,3,16,8,0,122,123,5,18,0,0,123,125,1,0,0,0,124,121,1,0,
  	0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,15,1,0,0,0,128,
  	126,1,0,0,0,129,130,5,25,0,0,130,131,5,29,0,0,131,132,5,26,0,0,132,133,
  	3,6,3,0,133,17,1,0,0,0,134,137,5,30,0,0,135,137,3,22,11,0,136,134,1,0,
  	0,0,136,135,1,0,0,0,137,19,1,0,0,0,138,142,3,8,4,0,139,143,5,21,0,0,140,
  	141,5,23,0,0,141,143,5,21,0,0,142,139,1,0,0,0,142,140,1,0,0,0,143,144,
  	1,0,0,0,144,145,5,19,0,0,145,150,3,18,9,0,146,147,5,17,0,0,147,149,3,
  	18,9,0,148,146,1,0,0,0,149,152,1,0,0,0,150,148,1,0,0,0,150,151,1,0,0,
  	0,151,153,1,0,0,0,152,150,1,0,0,0,153,154,5,20,0,0,154,21,1,0,0,0,155,
  	160,5,28,0,0,156,157,5,28,0,0,157,158,5,16,0,0,158,160,5,28,0,0,159,155,
  	1,0,0,0,159,156,1,0,0,0,160,23,1,0,0,0,15,27,35,43,54,58,73,97,99,106,
  	111,126,136,142,150,159
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
    setState(27);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(24);
        statement(); 
      }
      setState(29);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(30);
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
    setState(33); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(32);
      statement();
      setState(35); 
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
    setState(43);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::IMPORT: {
        enterOuterAlt(_localctx, 1);
        setState(37);
        importStatement();
        setState(38);
        match(MyCriteriaParser::SEMICOLON);
        break;
      }

      case MyCriteriaParser::BUCK: {
        enterOuterAlt(_localctx, 2);
        setState(40);
        identifierDefinition();
        setState(41);
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

MyCriteriaParser::IdentifierAccessContext* MyCriteriaParser::IdAccessContext::identifierAccess() {
  return getRuleContext<MyCriteriaParser::IdentifierAccessContext>(0);
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
//----------------- InArrayContext ------------------------------------------------------------------

MyCriteriaParser::InArrayParserContext* MyCriteriaParser::InArrayContext::inArrayParser() {
  return getRuleContext<MyCriteriaParser::InArrayParserContext>(0);
}

MyCriteriaParser::InArrayContext::InArrayContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::InArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInArray(this);
}
void MyCriteriaParser::InArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInArray(this);
}

std::any MyCriteriaParser::InArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitInArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::FuncCallContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
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

tree::TerminalNode* MyCriteriaParser::BoolContext::BOOL() {
  return getToken(MyCriteriaParser::BOOL, 0);
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

MyCriteriaParser::ExprContext* MyCriteriaParser::ParenExprContext::expr() {
  return getRuleContext<MyCriteriaParser::ExprContext>(0);
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
    setState(73);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InArrayContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(46);
      inArrayParser();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(47);
      match(MyCriteriaParser::IDENTIFIER);
      setState(48);
      match(MyCriteriaParser::T__3);
      setState(54);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(49);
          expr(0);
          setState(50);
          match(MyCriteriaParser::COMMA); 
        }
        setState(56);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      }
      setState(58);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2076180496) != 0)) {
        setState(57);
        expr(0);
      }
      setState(60);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(61);
      match(MyCriteriaParser::EXCL);
      setState(62);
      expr(8);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(63);
      match(MyCriteriaParser::T__3);
      setState(64);
      expr(0);
      setState(65);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<BoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(67);
      match(MyCriteriaParser::BOOL);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(68);
      numb();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NullContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(69);
      match(MyCriteriaParser::NULL_T);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StrLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(70);
      match(MyCriteriaParser::STR_LITERAL);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      identifierAccess();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ObjectAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(72);
      objectAccessParser();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(99);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(97);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(75);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(76);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MyCriteriaParser::T__0

          || _la == MyCriteriaParser::SLASH)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(77);
          expr(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(78);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(79);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == MyCriteriaParser::T__1

          || _la == MyCriteriaParser::T__2)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(80);
          expr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<InfixFuncCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(82);
          match(MyCriteriaParser::IDENTIFIER);
          setState(83);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<InfixFuncCallNotContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(84);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(85);
          match(MyCriteriaParser::EXCL);
          setState(86);
          match(MyCriteriaParser::IDENTIFIER);
          setState(87);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(89);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4032) != 0))) {
            antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(90);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(92);
          match(MyCriteriaParser::T__11);
          setState(93);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(94);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(95);
          match(MyCriteriaParser::T__12);
          setState(96);
          expr(10);
          break;
        }

        default:
          break;
        } 
      }
      setState(101);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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
    setState(102);
    match(MyCriteriaParser::OBJECT);
    setState(104); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(103);
      match(MyCriteriaParser::SQR_L);
      setState(106); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::SQR_L);
    setState(109); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(108);
      match(MyCriteriaParser::STR_LITERAL);
      setState(111); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::STR_LITERAL);
    setState(113);
    match(MyCriteriaParser::SQR_R);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierAccessContext ------------------------------------------------------------------

MyCriteriaParser::IdentifierAccessContext::IdentifierAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::IdentifierAccessContext::BUCK() {
  return getToken(MyCriteriaParser::BUCK, 0);
}

tree::TerminalNode* MyCriteriaParser::IdentifierAccessContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}


size_t MyCriteriaParser::IdentifierAccessContext::getRuleIndex() const {
  return MyCriteriaParser::RuleIdentifierAccess;
}

void MyCriteriaParser::IdentifierAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierAccess(this);
}

void MyCriteriaParser::IdentifierAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierAccess(this);
}


std::any MyCriteriaParser::IdentifierAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitIdentifierAccess(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::IdentifierAccessContext* MyCriteriaParser::identifierAccess() {
  IdentifierAccessContext *_localctx = _tracker.createInstance<IdentifierAccessContext>(_ctx, getState());
  enterRule(_localctx, 10, MyCriteriaParser::RuleIdentifierAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(MyCriteriaParser::BUCK);
    setState(116);
    match(MyCriteriaParser::IDENTIFIER);
   
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
  enterRule(_localctx, 12, MyCriteriaParser::RuleImportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(MyCriteriaParser::IMPORT);
    setState(119);
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
  enterRule(_localctx, 14, MyCriteriaParser::RuleIdentifierDefinitions);
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
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyCriteriaParser::BUCK) {
      setState(121);
      identifierDefinition();
      setState(122);
      match(MyCriteriaParser::SEMICOLON);
      setState(128);
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

tree::TerminalNode* MyCriteriaParser::IdentifierDefinitionContext::EQUALS() {
  return getToken(MyCriteriaParser::EQUALS, 0);
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
  enterRule(_localctx, 16, MyCriteriaParser::RuleIdentifierDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(MyCriteriaParser::BUCK);
    setState(130);
    match(MyCriteriaParser::IDENTIFIER);
    setState(131);
    match(MyCriteriaParser::EQUALS);
    setState(132);
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
  enterRule(_localctx, 18, MyCriteriaParser::RuleStrOrNum);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(134);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(135);
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

//----------------- InArrayParserContext ------------------------------------------------------------------

MyCriteriaParser::InArrayParserContext::InArrayParserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyCriteriaParser::ObjectAccessParserContext* MyCriteriaParser::InArrayParserContext::objectAccessParser() {
  return getRuleContext<MyCriteriaParser::ObjectAccessParserContext>(0);
}

tree::TerminalNode* MyCriteriaParser::InArrayParserContext::SQR_L() {
  return getToken(MyCriteriaParser::SQR_L, 0);
}

std::vector<MyCriteriaParser::StrOrNumContext *> MyCriteriaParser::InArrayParserContext::strOrNum() {
  return getRuleContexts<MyCriteriaParser::StrOrNumContext>();
}

MyCriteriaParser::StrOrNumContext* MyCriteriaParser::InArrayParserContext::strOrNum(size_t i) {
  return getRuleContext<MyCriteriaParser::StrOrNumContext>(i);
}

tree::TerminalNode* MyCriteriaParser::InArrayParserContext::SQR_R() {
  return getToken(MyCriteriaParser::SQR_R, 0);
}

tree::TerminalNode* MyCriteriaParser::InArrayParserContext::IN() {
  return getToken(MyCriteriaParser::IN, 0);
}

tree::TerminalNode* MyCriteriaParser::InArrayParserContext::EXCL() {
  return getToken(MyCriteriaParser::EXCL, 0);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::InArrayParserContext::COMMA() {
  return getTokens(MyCriteriaParser::COMMA);
}

tree::TerminalNode* MyCriteriaParser::InArrayParserContext::COMMA(size_t i) {
  return getToken(MyCriteriaParser::COMMA, i);
}


size_t MyCriteriaParser::InArrayParserContext::getRuleIndex() const {
  return MyCriteriaParser::RuleInArrayParser;
}

void MyCriteriaParser::InArrayParserContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInArrayParser(this);
}

void MyCriteriaParser::InArrayParserContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInArrayParser(this);
}


std::any MyCriteriaParser::InArrayParserContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitInArrayParser(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::InArrayParserContext* MyCriteriaParser::inArrayParser() {
  InArrayParserContext *_localctx = _tracker.createInstance<InArrayParserContext>(_ctx, getState());
  enterRule(_localctx, 20, MyCriteriaParser::RuleInArrayParser);
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
    setState(138);
    objectAccessParser();
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::IN: {
        setState(139);
        match(MyCriteriaParser::IN);
        break;
      }

      case MyCriteriaParser::EXCL: {
        setState(140);
        match(MyCriteriaParser::EXCL);
        setState(141);
        match(MyCriteriaParser::IN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(144);
    match(MyCriteriaParser::SQR_L);
    setState(145);
    strOrNum();
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyCriteriaParser::COMMA) {
      setState(146);
      match(MyCriteriaParser::COMMA);
      setState(147);
      strOrNum();
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(153);
    match(MyCriteriaParser::SQR_R);
   
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
  enterRule(_localctx, 22, MyCriteriaParser::RuleNumb);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(155);
      match(MyCriteriaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(156);
      match(MyCriteriaParser::INT);
      setState(157);
      match(MyCriteriaParser::DOT);
      setState(158);
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
