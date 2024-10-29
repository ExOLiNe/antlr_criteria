
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
      "app", "statements", "statement", "expr", "lambdaParams", "funcPars", 
      "objectAccessParser", "importStatement", "identifierDefinitions", 
      "identifierDefinition", "strOrNum", "numb"
    },
    std::vector<std::string>{
      "", "'import'", "'/'", "'.'", "','", "';'", "'->'", "'['", "']'", 
      "'('", "')'", "'{'", "'}'", "'>='", "'<='", "'>'", "'<'", "'=='", 
      "'!='", "'&&'", "'||'", "'true'", "'false'", "'!'", "'null'", "'$'", 
      "'='", "'object'", "'*'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "IMPORT", "SLASH", "DOT", "COMMA", "SEMICOLON", "ARROW", "SQR_L", 
      "SQR_R", "PAR_L", "PAR_R", "CUR_L", "CUR_R", "GTE", "LTE", "GT", "LT", 
      "EQUALS", "NOT_EQUALS", "AND", "OR", "TRUE", "FALSE", "EXCL", "NULL_T", 
      "BUCK", "ASSIGN", "OBJECT", "MUL", "ADD", "SUB", "INT", "IDENTIFIER", 
      "STR_LITERAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,178,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,5,0,26,8,0,10,0,12,0,29,
  	9,0,1,0,1,0,1,1,4,1,34,8,1,11,1,12,1,35,1,2,1,2,1,2,1,2,1,2,1,2,3,2,44,
  	8,2,1,3,1,3,1,3,1,3,1,3,5,3,51,8,3,10,3,12,3,54,9,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	3,3,78,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,106,8,3,10,3,12,3,109,
  	9,3,1,4,1,4,1,4,5,4,114,8,4,10,4,12,4,117,9,4,1,4,3,4,120,8,4,1,4,1,4,
  	1,4,1,5,1,5,1,5,1,5,5,5,129,8,5,10,5,12,5,132,9,5,1,5,3,5,135,8,5,1,5,
  	1,5,1,6,1,6,4,6,141,8,6,11,6,12,6,142,1,6,4,6,146,8,6,11,6,12,6,147,1,
  	6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,5,8,158,8,8,10,8,12,8,161,9,8,1,9,1,9,1,
  	9,1,9,1,9,1,10,1,10,3,10,170,8,10,1,11,1,11,1,11,1,11,3,11,176,8,11,1,
  	11,0,1,6,12,0,2,4,6,8,10,12,14,16,18,20,22,0,4,1,0,21,22,2,0,2,2,28,28,
  	1,0,29,30,1,0,13,18,196,0,27,1,0,0,0,2,33,1,0,0,0,4,43,1,0,0,0,6,77,1,
  	0,0,0,8,110,1,0,0,0,10,124,1,0,0,0,12,138,1,0,0,0,14,151,1,0,0,0,16,159,
  	1,0,0,0,18,162,1,0,0,0,20,169,1,0,0,0,22,175,1,0,0,0,24,26,3,4,2,0,25,
  	24,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,0,28,30,1,0,0,0,29,
  	27,1,0,0,0,30,31,3,6,3,0,31,1,1,0,0,0,32,34,3,4,2,0,33,32,1,0,0,0,34,
  	35,1,0,0,0,35,33,1,0,0,0,35,36,1,0,0,0,36,3,1,0,0,0,37,38,3,14,7,0,38,
  	39,5,5,0,0,39,44,1,0,0,0,40,41,3,18,9,0,41,42,5,5,0,0,42,44,1,0,0,0,43,
  	37,1,0,0,0,43,40,1,0,0,0,44,5,1,0,0,0,45,46,6,3,-1,0,46,47,5,7,0,0,47,
  	52,3,6,3,0,48,49,5,4,0,0,49,51,3,6,3,0,50,48,1,0,0,0,51,54,1,0,0,0,52,
  	50,1,0,0,0,52,53,1,0,0,0,53,55,1,0,0,0,54,52,1,0,0,0,55,56,5,8,0,0,56,
  	78,1,0,0,0,57,58,5,11,0,0,58,59,3,8,4,0,59,60,3,6,3,0,60,61,5,12,0,0,
  	61,78,1,0,0,0,62,63,5,32,0,0,63,78,3,10,5,0,64,65,5,23,0,0,65,78,3,6,
  	3,8,66,67,5,9,0,0,67,68,3,6,3,0,68,69,5,10,0,0,69,78,1,0,0,0,70,78,7,
  	0,0,0,71,78,3,22,11,0,72,78,5,24,0,0,73,78,5,33,0,0,74,75,5,25,0,0,75,
  	78,5,32,0,0,76,78,3,12,6,0,77,45,1,0,0,0,77,57,1,0,0,0,77,62,1,0,0,0,
  	77,64,1,0,0,0,77,66,1,0,0,0,77,70,1,0,0,0,77,71,1,0,0,0,77,72,1,0,0,0,
  	77,73,1,0,0,0,77,74,1,0,0,0,77,76,1,0,0,0,78,107,1,0,0,0,79,80,10,18,
  	0,0,80,81,7,1,0,0,81,106,3,6,3,19,82,83,10,17,0,0,83,84,7,2,0,0,84,106,
  	3,6,3,18,85,86,10,13,0,0,86,87,5,32,0,0,87,106,3,6,3,14,88,89,10,12,0,
  	0,89,90,5,23,0,0,90,91,5,32,0,0,91,106,3,6,3,13,92,93,10,11,0,0,93,94,
  	7,3,0,0,94,106,3,6,3,12,95,96,10,10,0,0,96,97,5,19,0,0,97,106,3,6,3,11,
  	98,99,10,9,0,0,99,100,5,20,0,0,100,106,3,6,3,10,101,102,10,15,0,0,102,
  	103,5,3,0,0,103,104,5,32,0,0,104,106,3,10,5,0,105,79,1,0,0,0,105,82,1,
  	0,0,0,105,85,1,0,0,0,105,88,1,0,0,0,105,92,1,0,0,0,105,95,1,0,0,0,105,
  	98,1,0,0,0,105,101,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,
  	0,0,0,108,7,1,0,0,0,109,107,1,0,0,0,110,115,5,9,0,0,111,112,5,32,0,0,
  	112,114,5,4,0,0,113,111,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,115,116,
  	1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,118,120,5,32,0,0,119,118,1,0,
  	0,0,119,120,1,0,0,0,120,121,1,0,0,0,121,122,5,10,0,0,122,123,5,6,0,0,
  	123,9,1,0,0,0,124,130,5,9,0,0,125,126,3,6,3,0,126,127,5,4,0,0,127,129,
  	1,0,0,0,128,125,1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,130,131,1,0,0,
  	0,131,134,1,0,0,0,132,130,1,0,0,0,133,135,3,6,3,0,134,133,1,0,0,0,134,
  	135,1,0,0,0,135,136,1,0,0,0,136,137,5,10,0,0,137,11,1,0,0,0,138,140,5,
  	27,0,0,139,141,5,7,0,0,140,139,1,0,0,0,141,142,1,0,0,0,142,140,1,0,0,
  	0,142,143,1,0,0,0,143,145,1,0,0,0,144,146,5,33,0,0,145,144,1,0,0,0,146,
  	147,1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,149,1,0,0,0,149,150,5,
  	8,0,0,150,13,1,0,0,0,151,152,5,1,0,0,152,153,5,32,0,0,153,15,1,0,0,0,
  	154,155,3,18,9,0,155,156,5,5,0,0,156,158,1,0,0,0,157,154,1,0,0,0,158,
  	161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,17,1,0,0,0,161,159,1,
  	0,0,0,162,163,5,25,0,0,163,164,5,32,0,0,164,165,5,26,0,0,165,166,3,6,
  	3,0,166,19,1,0,0,0,167,170,5,33,0,0,168,170,3,22,11,0,169,167,1,0,0,0,
  	169,168,1,0,0,0,170,21,1,0,0,0,171,176,5,31,0,0,172,173,5,31,0,0,173,
  	174,5,3,0,0,174,176,5,31,0,0,175,171,1,0,0,0,175,172,1,0,0,0,176,23,1,
  	0,0,0,16,27,35,43,52,77,105,107,115,119,130,134,142,147,159,169,175
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
//----------------- MethodCallContext ------------------------------------------------------------------

MyCriteriaParser::ExprContext* MyCriteriaParser::MethodCallContext::expr() {
  return getRuleContext<MyCriteriaParser::ExprContext>(0);
}

tree::TerminalNode* MyCriteriaParser::MethodCallContext::DOT() {
  return getToken(MyCriteriaParser::DOT, 0);
}

tree::TerminalNode* MyCriteriaParser::MethodCallContext::IDENTIFIER() {
  return getToken(MyCriteriaParser::IDENTIFIER, 0);
}

MyCriteriaParser::FuncParsContext* MyCriteriaParser::MethodCallContext::funcPars() {
  return getRuleContext<MyCriteriaParser::FuncParsContext>(0);
}

MyCriteriaParser::MethodCallContext::MethodCallContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}
void MyCriteriaParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}

std::any MyCriteriaParser::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
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

MyCriteriaParser::FuncParsContext* MyCriteriaParser::FuncCallContext::funcPars() {
  return getRuleContext<MyCriteriaParser::FuncParsContext>(0);
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
//----------------- LambdaContext ------------------------------------------------------------------

tree::TerminalNode* MyCriteriaParser::LambdaContext::CUR_L() {
  return getToken(MyCriteriaParser::CUR_L, 0);
}

MyCriteriaParser::LambdaParamsContext* MyCriteriaParser::LambdaContext::lambdaParams() {
  return getRuleContext<MyCriteriaParser::LambdaParamsContext>(0);
}

MyCriteriaParser::ExprContext* MyCriteriaParser::LambdaContext::expr() {
  return getRuleContext<MyCriteriaParser::ExprContext>(0);
}

tree::TerminalNode* MyCriteriaParser::LambdaContext::CUR_R() {
  return getToken(MyCriteriaParser::CUR_R, 0);
}

MyCriteriaParser::LambdaContext::LambdaContext(ExprContext *ctx) { copyFrom(ctx); }

void MyCriteriaParser::LambdaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambda(this);
}
void MyCriteriaParser::LambdaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambda(this);
}

std::any MyCriteriaParser::LambdaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitLambda(this);
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
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::SQR_L: {
        _localctx = _tracker.createInstance<ArrayContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(46);
        match(MyCriteriaParser::SQR_L);
        setState(47);
        expr(0);
        setState(52);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == MyCriteriaParser::COMMA) {
          setState(48);
          match(MyCriteriaParser::COMMA);
          setState(49);
          expr(0);
          setState(54);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(55);
        match(MyCriteriaParser::SQR_R);
        break;
      }

      case MyCriteriaParser::CUR_L: {
        _localctx = _tracker.createInstance<LambdaContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(57);
        match(MyCriteriaParser::CUR_L);
        setState(58);
        lambdaParams();
        setState(59);
        expr(0);
        setState(60);
        match(MyCriteriaParser::CUR_R);
        break;
      }

      case MyCriteriaParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(62);
        match(MyCriteriaParser::IDENTIFIER);
        setState(63);
        funcPars();
        break;
      }

      case MyCriteriaParser::EXCL: {
        _localctx = _tracker.createInstance<NotExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(64);
        match(MyCriteriaParser::EXCL);
        setState(65);
        expr(8);
        break;
      }

      case MyCriteriaParser::PAR_L: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(66);
        match(MyCriteriaParser::PAR_L);
        setState(67);
        expr(0);
        setState(68);
        match(MyCriteriaParser::PAR_R);
        break;
      }

      case MyCriteriaParser::TRUE:
      case MyCriteriaParser::FALSE: {
        _localctx = _tracker.createInstance<BoolContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(70);
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
        setState(71);
        numb();
        break;
      }

      case MyCriteriaParser::NULL_T: {
        _localctx = _tracker.createInstance<NullContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(72);
        match(MyCriteriaParser::NULL_T);
        break;
      }

      case MyCriteriaParser::STR_LITERAL: {
        _localctx = _tracker.createInstance<StrLiteralContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(73);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::BUCK: {
        _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(74);
        match(MyCriteriaParser::BUCK);
        setState(75);
        match(MyCriteriaParser::IDENTIFIER);
        break;
      }

      case MyCriteriaParser::OBJECT: {
        _localctx = _tracker.createInstance<ObjectAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(76);
        objectAccessParser();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(107);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(105);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(79);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(80);
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
          setState(81);
          expr(19);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(82);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(83);
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
          setState(84);
          expr(18);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<InfixFuncCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(85);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(86);
          match(MyCriteriaParser::IDENTIFIER);
          setState(87);
          expr(14);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<InfixFuncCallNotContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(89);
          match(MyCriteriaParser::EXCL);
          setState(90);
          match(MyCriteriaParser::IDENTIFIER);
          setState(91);
          expr(13);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(92);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(93);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 516096) != 0))) {
            antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(94);
          expr(12);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(95);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(96);
          match(MyCriteriaParser::AND);
          setState(97);
          expr(11);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(98);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(99);
          match(MyCriteriaParser::OR);
          setState(100);
          expr(10);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<MethodCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(101);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(102);
          match(MyCriteriaParser::DOT);
          setState(103);
          match(MyCriteriaParser::IDENTIFIER);
          setState(104);
          funcPars();
          break;
        }

        default:
          break;
        } 
      }
      setState(109);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaParamsContext ------------------------------------------------------------------

MyCriteriaParser::LambdaParamsContext::LambdaParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::LambdaParamsContext::PAR_L() {
  return getToken(MyCriteriaParser::PAR_L, 0);
}

tree::TerminalNode* MyCriteriaParser::LambdaParamsContext::PAR_R() {
  return getToken(MyCriteriaParser::PAR_R, 0);
}

tree::TerminalNode* MyCriteriaParser::LambdaParamsContext::ARROW() {
  return getToken(MyCriteriaParser::ARROW, 0);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::LambdaParamsContext::IDENTIFIER() {
  return getTokens(MyCriteriaParser::IDENTIFIER);
}

tree::TerminalNode* MyCriteriaParser::LambdaParamsContext::IDENTIFIER(size_t i) {
  return getToken(MyCriteriaParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::LambdaParamsContext::COMMA() {
  return getTokens(MyCriteriaParser::COMMA);
}

tree::TerminalNode* MyCriteriaParser::LambdaParamsContext::COMMA(size_t i) {
  return getToken(MyCriteriaParser::COMMA, i);
}


size_t MyCriteriaParser::LambdaParamsContext::getRuleIndex() const {
  return MyCriteriaParser::RuleLambdaParams;
}

void MyCriteriaParser::LambdaParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaParams(this);
}

void MyCriteriaParser::LambdaParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaParams(this);
}


std::any MyCriteriaParser::LambdaParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitLambdaParams(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::LambdaParamsContext* MyCriteriaParser::lambdaParams() {
  LambdaParamsContext *_localctx = _tracker.createInstance<LambdaParamsContext>(_ctx, getState());
  enterRule(_localctx, 8, MyCriteriaParser::RuleLambdaParams);
  size_t _la = 0;

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
    setState(110);
    match(MyCriteriaParser::PAR_L);
    setState(115);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(111);
        match(MyCriteriaParser::IDENTIFIER);
        setState(112);
        match(MyCriteriaParser::COMMA); 
      }
      setState(117);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyCriteriaParser::IDENTIFIER) {
      setState(118);
      match(MyCriteriaParser::IDENTIFIER);
    }
    setState(121);
    match(MyCriteriaParser::PAR_R);
    setState(122);
    match(MyCriteriaParser::ARROW);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncParsContext ------------------------------------------------------------------

MyCriteriaParser::FuncParsContext::FuncParsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::FuncParsContext::PAR_L() {
  return getToken(MyCriteriaParser::PAR_L, 0);
}

tree::TerminalNode* MyCriteriaParser::FuncParsContext::PAR_R() {
  return getToken(MyCriteriaParser::PAR_R, 0);
}

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::FuncParsContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::FuncParsContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::FuncParsContext::COMMA() {
  return getTokens(MyCriteriaParser::COMMA);
}

tree::TerminalNode* MyCriteriaParser::FuncParsContext::COMMA(size_t i) {
  return getToken(MyCriteriaParser::COMMA, i);
}


size_t MyCriteriaParser::FuncParsContext::getRuleIndex() const {
  return MyCriteriaParser::RuleFuncPars;
}

void MyCriteriaParser::FuncParsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncPars(this);
}

void MyCriteriaParser::FuncParsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncPars(this);
}


std::any MyCriteriaParser::FuncParsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitFuncPars(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::FuncParsContext* MyCriteriaParser::funcPars() {
  FuncParsContext *_localctx = _tracker.createInstance<FuncParsContext>(_ctx, getState());
  enterRule(_localctx, 10, MyCriteriaParser::RuleFuncPars);
  size_t _la = 0;

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
    setState(124);
    match(MyCriteriaParser::PAR_L);
    setState(130);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(125);
        expr(0);
        setState(126);
        match(MyCriteriaParser::COMMA); 
      }
      setState(132);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15231617664) != 0)) {
      setState(133);
      expr(0);
    }
    setState(136);
    match(MyCriteriaParser::PAR_R);
   
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
  enterRule(_localctx, 12, MyCriteriaParser::RuleObjectAccessParser);
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
    match(MyCriteriaParser::OBJECT);
    setState(140); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(139);
      match(MyCriteriaParser::SQR_L);
      setState(142); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::SQR_L);
    setState(145); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(144);
      match(MyCriteriaParser::STR_LITERAL);
      setState(147); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::STR_LITERAL);
    setState(149);
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
  enterRule(_localctx, 14, MyCriteriaParser::RuleImportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(MyCriteriaParser::IMPORT);
    setState(152);
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
  enterRule(_localctx, 16, MyCriteriaParser::RuleIdentifierDefinitions);
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
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyCriteriaParser::BUCK) {
      setState(154);
      identifierDefinition();
      setState(155);
      match(MyCriteriaParser::SEMICOLON);
      setState(161);
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
  enterRule(_localctx, 18, MyCriteriaParser::RuleIdentifierDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(MyCriteriaParser::BUCK);
    setState(163);
    match(MyCriteriaParser::IDENTIFIER);
    setState(164);
    match(MyCriteriaParser::ASSIGN);
    setState(165);
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
  enterRule(_localctx, 20, MyCriteriaParser::RuleStrOrNum);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(167);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(168);
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
  enterRule(_localctx, 22, MyCriteriaParser::RuleNumb);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(171);
      match(MyCriteriaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(172);
      match(MyCriteriaParser::INT);
      setState(173);
      match(MyCriteriaParser::DOT);
      setState(174);
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
    case 0: return precpred(_ctx, 18);
    case 1: return precpred(_ctx, 17);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 15);

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
