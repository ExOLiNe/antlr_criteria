
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
      "app", "statement", "expr", "test_expr", "identifierDefinition", "identifierAccess", 
      "jsonPointerInner", "jsonPointer", "objectAccessParser", "strOrNum", 
      "numb", "inArrayParser"
    },
    std::vector<std::string>{
      "", "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
      "'=='", "'!='", "'&&'", "'||'", "'object'", "'/'", "'.'", "','", "';'", 
      "'['", "']'", "'in'", "", "'!'", "", "", "", "'null'", "'''", "'\"'", 
      "'$'", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "SLASH", 
      "DOT", "COMMA", "SEMICOLON", "SQR_L", "SQR_R", "IN", "BOOL", "EXCL", 
      "INT", "STR_LITERAL", "STR", "NULL_T", "S_Q", "D_Q", "BUCK", "EQUALS", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,214,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,5,0,26,8,0,10,0,12,0,29,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,44,8,2,10,
  	2,12,2,47,9,2,1,2,3,2,50,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,3,2,64,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,5,2,84,8,2,10,2,12,2,87,9,2,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,103,8,3,10,3,12,3,106,9,3,1,3,
  	3,3,109,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,139,8,3,1,4,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,3,6,150,8,6,1,6,1,6,1,6,5,6,155,8,6,10,
  	6,12,6,158,9,6,1,6,3,6,161,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,
  	7,172,8,7,1,8,1,8,4,8,176,8,8,11,8,12,8,177,1,8,4,8,181,8,8,11,8,12,8,
  	182,1,8,1,8,1,9,1,9,3,9,189,8,9,1,10,1,10,1,10,1,10,3,10,195,8,10,1,11,
  	1,11,1,11,1,11,3,11,201,8,11,1,11,1,11,1,11,1,11,5,11,207,8,11,10,11,
  	12,11,210,9,11,1,11,1,11,1,11,0,1,4,12,0,2,4,6,8,10,12,14,16,18,20,22,
  	0,3,2,0,1,1,15,15,1,0,2,3,1,0,6,11,246,0,27,1,0,0,0,2,32,1,0,0,0,4,63,
  	1,0,0,0,6,138,1,0,0,0,8,140,1,0,0,0,10,145,1,0,0,0,12,149,1,0,0,0,14,
  	171,1,0,0,0,16,173,1,0,0,0,18,188,1,0,0,0,20,194,1,0,0,0,22,196,1,0,0,
  	0,24,26,3,2,1,0,25,24,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,
  	0,28,30,1,0,0,0,29,27,1,0,0,0,30,31,3,4,2,0,31,1,1,0,0,0,32,33,3,8,4,
  	0,33,34,5,18,0,0,34,3,1,0,0,0,35,36,6,2,-1,0,36,64,3,10,5,0,37,64,3,22,
  	11,0,38,39,5,26,0,0,39,45,5,4,0,0,40,41,3,4,2,0,41,42,5,17,0,0,42,44,
  	1,0,0,0,43,40,1,0,0,0,44,47,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,49,
  	1,0,0,0,47,45,1,0,0,0,48,50,3,4,2,0,49,48,1,0,0,0,49,50,1,0,0,0,50,51,
  	1,0,0,0,51,64,5,5,0,0,52,53,5,23,0,0,53,64,3,4,2,7,54,55,5,4,0,0,55,56,
  	3,4,2,0,56,57,5,5,0,0,57,64,1,0,0,0,58,64,5,22,0,0,59,64,3,20,10,0,60,
  	64,3,16,8,0,61,64,5,25,0,0,62,64,5,27,0,0,63,35,1,0,0,0,63,37,1,0,0,0,
  	63,38,1,0,0,0,63,52,1,0,0,0,63,54,1,0,0,0,63,58,1,0,0,0,63,59,1,0,0,0,
  	63,60,1,0,0,0,63,61,1,0,0,0,63,62,1,0,0,0,64,85,1,0,0,0,65,66,10,14,0,
  	0,66,67,7,0,0,0,67,84,3,4,2,15,68,69,10,13,0,0,69,70,7,1,0,0,70,84,3,
  	4,2,14,71,72,10,11,0,0,72,73,5,26,0,0,73,84,3,4,2,12,74,75,10,10,0,0,
  	75,76,7,2,0,0,76,84,3,4,2,11,77,78,10,9,0,0,78,79,5,12,0,0,79,84,3,4,
  	2,10,80,81,10,8,0,0,81,82,5,13,0,0,82,84,3,4,2,9,83,65,1,0,0,0,83,68,
  	1,0,0,0,83,71,1,0,0,0,83,74,1,0,0,0,83,77,1,0,0,0,83,80,1,0,0,0,84,87,
  	1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,5,1,0,0,0,87,85,1,0,0,0,88,139,
  	3,22,11,0,89,90,3,4,2,0,90,91,7,0,0,0,91,92,3,4,2,0,92,139,1,0,0,0,93,
  	94,3,4,2,0,94,95,7,1,0,0,95,96,3,4,2,0,96,139,1,0,0,0,97,98,5,26,0,0,
  	98,104,5,4,0,0,99,100,3,4,2,0,100,101,5,17,0,0,101,103,1,0,0,0,102,99,
  	1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,108,1,0,0,
  	0,106,104,1,0,0,0,107,109,3,4,2,0,108,107,1,0,0,0,108,109,1,0,0,0,109,
  	110,1,0,0,0,110,139,5,5,0,0,111,112,3,4,2,0,112,113,5,26,0,0,113,114,
  	3,4,2,0,114,139,1,0,0,0,115,116,3,4,2,0,116,117,7,2,0,0,117,118,3,4,2,
  	0,118,139,1,0,0,0,119,120,3,4,2,0,120,121,5,12,0,0,121,122,3,4,2,0,122,
  	139,1,0,0,0,123,124,3,4,2,0,124,125,5,13,0,0,125,126,3,4,2,0,126,139,
  	1,0,0,0,127,128,5,23,0,0,128,139,3,4,2,0,129,130,5,4,0,0,130,131,3,4,
  	2,0,131,132,5,5,0,0,132,139,1,0,0,0,133,139,5,22,0,0,134,139,5,24,0,0,
  	135,139,3,16,8,0,136,139,5,25,0,0,137,139,5,27,0,0,138,88,1,0,0,0,138,
  	89,1,0,0,0,138,93,1,0,0,0,138,97,1,0,0,0,138,111,1,0,0,0,138,115,1,0,
  	0,0,138,119,1,0,0,0,138,123,1,0,0,0,138,127,1,0,0,0,138,129,1,0,0,0,138,
  	133,1,0,0,0,138,134,1,0,0,0,138,135,1,0,0,0,138,136,1,0,0,0,138,137,1,
  	0,0,0,139,7,1,0,0,0,140,141,5,30,0,0,141,142,5,26,0,0,142,143,5,31,0,
  	0,143,144,3,4,2,0,144,9,1,0,0,0,145,146,5,30,0,0,146,147,5,26,0,0,147,
  	11,1,0,0,0,148,150,5,15,0,0,149,148,1,0,0,0,149,150,1,0,0,0,150,151,1,
  	0,0,0,151,156,5,26,0,0,152,153,5,15,0,0,153,155,5,26,0,0,154,152,1,0,
  	0,0,155,158,1,0,0,0,156,154,1,0,0,0,156,157,1,0,0,0,157,160,1,0,0,0,158,
  	156,1,0,0,0,159,161,5,15,0,0,160,159,1,0,0,0,160,161,1,0,0,0,161,13,1,
  	0,0,0,162,163,5,28,0,0,163,164,3,12,6,0,164,165,5,28,0,0,165,172,1,0,
  	0,0,166,167,5,29,0,0,167,168,3,12,6,0,168,169,5,29,0,0,169,172,1,0,0,
  	0,170,172,5,25,0,0,171,162,1,0,0,0,171,166,1,0,0,0,171,170,1,0,0,0,172,
  	15,1,0,0,0,173,175,5,14,0,0,174,176,5,19,0,0,175,174,1,0,0,0,176,177,
  	1,0,0,0,177,175,1,0,0,0,177,178,1,0,0,0,178,180,1,0,0,0,179,181,3,14,
  	7,0,180,179,1,0,0,0,181,182,1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,
  	184,1,0,0,0,184,185,5,20,0,0,185,17,1,0,0,0,186,189,5,25,0,0,187,189,
  	3,20,10,0,188,186,1,0,0,0,188,187,1,0,0,0,189,19,1,0,0,0,190,195,5,24,
  	0,0,191,192,5,24,0,0,192,193,5,16,0,0,193,195,5,24,0,0,194,190,1,0,0,
  	0,194,191,1,0,0,0,195,21,1,0,0,0,196,200,3,16,8,0,197,201,5,21,0,0,198,
  	199,5,23,0,0,199,201,5,21,0,0,200,197,1,0,0,0,200,198,1,0,0,0,201,202,
  	1,0,0,0,202,203,5,19,0,0,203,208,3,18,9,0,204,205,5,17,0,0,205,207,3,
  	18,9,0,206,204,1,0,0,0,207,210,1,0,0,0,208,206,1,0,0,0,208,209,1,0,0,
  	0,209,211,1,0,0,0,210,208,1,0,0,0,211,212,5,20,0,0,212,23,1,0,0,0,19,
  	27,45,49,63,83,85,104,108,138,149,156,160,171,177,182,188,194,200,208
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

//----------------- StatementContext ------------------------------------------------------------------

MyCriteriaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyCriteriaParser::IdentifierDefinitionContext* MyCriteriaParser::StatementContext::identifierDefinition() {
  return getRuleContext<MyCriteriaParser::IdentifierDefinitionContext>(0);
}

tree::TerminalNode* MyCriteriaParser::StatementContext::SEMICOLON() {
  return getToken(MyCriteriaParser::SEMICOLON, 0);
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
  enterRule(_localctx, 2, MyCriteriaParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    identifierDefinition();
    setState(33);
    match(MyCriteriaParser::SEMICOLON);
   
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

tree::TerminalNode* MyCriteriaParser::InfixFuncCallContext::STR() {
  return getToken(MyCriteriaParser::STR, 0);
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

tree::TerminalNode* MyCriteriaParser::FuncCallContext::STR() {
  return getToken(MyCriteriaParser::STR, 0);
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
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, MyCriteriaParser::RuleExpr, precedence);

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
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(36);
      identifierAccess();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<InArrayContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(37);
      inArrayParser();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(38);
      match(MyCriteriaParser::STR);
      setState(39);
      match(MyCriteriaParser::T__3);
      setState(45);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(40);
          expr(0);
          setState(41);
          match(MyCriteriaParser::COMMA); 
        }
        setState(47);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      }
      setState(49);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1337999376) != 0)) {
        setState(48);
        expr(0);
      }
      setState(51);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(52);
      match(MyCriteriaParser::EXCL);
      setState(53);
      expr(7);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(54);
      match(MyCriteriaParser::T__3);
      setState(55);
      expr(0);
      setState(56);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<BoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      match(MyCriteriaParser::BOOL);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(59);
      numb();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ObjectAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(60);
      objectAccessParser();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StrLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(61);
      match(MyCriteriaParser::STR_LITERAL);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<NullContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(62);
      match(MyCriteriaParser::NULL_T);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(85);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(83);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(65);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(66);
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
          setState(67);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(68);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(69);
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
          setState(70);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<InfixFuncCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(71);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(72);
          match(MyCriteriaParser::STR);
          setState(73);
          expr(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(74);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(75);
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
          setState(76);
          expr(11);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(77);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(78);
          match(MyCriteriaParser::T__11);
          setState(79);
          expr(10);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(80);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(81);
          match(MyCriteriaParser::T__12);
          setState(82);
          expr(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(87);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Test_exprContext ------------------------------------------------------------------

MyCriteriaParser::Test_exprContext::Test_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyCriteriaParser::InArrayParserContext* MyCriteriaParser::Test_exprContext::inArrayParser() {
  return getRuleContext<MyCriteriaParser::InArrayParserContext>(0);
}

std::vector<MyCriteriaParser::ExprContext *> MyCriteriaParser::Test_exprContext::expr() {
  return getRuleContexts<MyCriteriaParser::ExprContext>();
}

MyCriteriaParser::ExprContext* MyCriteriaParser::Test_exprContext::expr(size_t i) {
  return getRuleContext<MyCriteriaParser::ExprContext>(i);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::SLASH() {
  return getToken(MyCriteriaParser::SLASH, 0);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::STR() {
  return getToken(MyCriteriaParser::STR, 0);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::Test_exprContext::COMMA() {
  return getTokens(MyCriteriaParser::COMMA);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::COMMA(size_t i) {
  return getToken(MyCriteriaParser::COMMA, i);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::EXCL() {
  return getToken(MyCriteriaParser::EXCL, 0);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::BOOL() {
  return getToken(MyCriteriaParser::BOOL, 0);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::INT() {
  return getToken(MyCriteriaParser::INT, 0);
}

MyCriteriaParser::ObjectAccessParserContext* MyCriteriaParser::Test_exprContext::objectAccessParser() {
  return getRuleContext<MyCriteriaParser::ObjectAccessParserContext>(0);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::STR_LITERAL() {
  return getToken(MyCriteriaParser::STR_LITERAL, 0);
}

tree::TerminalNode* MyCriteriaParser::Test_exprContext::NULL_T() {
  return getToken(MyCriteriaParser::NULL_T, 0);
}


size_t MyCriteriaParser::Test_exprContext::getRuleIndex() const {
  return MyCriteriaParser::RuleTest_expr;
}

void MyCriteriaParser::Test_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest_expr(this);
}

void MyCriteriaParser::Test_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest_expr(this);
}


std::any MyCriteriaParser::Test_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitTest_expr(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::Test_exprContext* MyCriteriaParser::test_expr() {
  Test_exprContext *_localctx = _tracker.createInstance<Test_exprContext>(_ctx, getState());
  enterRule(_localctx, 6, MyCriteriaParser::RuleTest_expr);
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
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      inArrayParser();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      expr(0);
      setState(90);
      antlrcpp::downCast<Test_exprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MyCriteriaParser::T__0

      || _la == MyCriteriaParser::SLASH)) {
        antlrcpp::downCast<Test_exprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(91);
      expr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(93);
      expr(0);
      setState(94);
      antlrcpp::downCast<Test_exprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == MyCriteriaParser::T__1

      || _la == MyCriteriaParser::T__2)) {
        antlrcpp::downCast<Test_exprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(95);
      expr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(97);
      match(MyCriteriaParser::STR);
      setState(98);
      match(MyCriteriaParser::T__3);
      setState(104);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(99);
          expr(0);
          setState(100);
          match(MyCriteriaParser::COMMA); 
        }
        setState(106);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      }
      setState(108);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1337999376) != 0)) {
        setState(107);
        expr(0);
      }
      setState(110);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(111);
      expr(0);
      setState(112);
      match(MyCriteriaParser::STR);
      setState(113);
      expr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(115);
      expr(0);
      setState(116);
      antlrcpp::downCast<Test_exprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4032) != 0))) {
        antlrcpp::downCast<Test_exprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(117);
      expr(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(119);
      expr(0);
      setState(120);
      match(MyCriteriaParser::T__11);
      setState(121);
      expr(0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(123);
      expr(0);
      setState(124);
      match(MyCriteriaParser::T__12);
      setState(125);
      expr(0);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(127);
      match(MyCriteriaParser::EXCL);
      setState(128);
      expr(0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(129);
      match(MyCriteriaParser::T__3);
      setState(130);
      expr(0);
      setState(131);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(133);
      match(MyCriteriaParser::BOOL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(134);
      match(MyCriteriaParser::INT);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(135);
      objectAccessParser();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(136);
      match(MyCriteriaParser::STR_LITERAL);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(137);
      match(MyCriteriaParser::NULL_T);
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

//----------------- IdentifierDefinitionContext ------------------------------------------------------------------

MyCriteriaParser::IdentifierDefinitionContext::IdentifierDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::IdentifierDefinitionContext::BUCK() {
  return getToken(MyCriteriaParser::BUCK, 0);
}

tree::TerminalNode* MyCriteriaParser::IdentifierDefinitionContext::STR() {
  return getToken(MyCriteriaParser::STR, 0);
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
  enterRule(_localctx, 8, MyCriteriaParser::RuleIdentifierDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(MyCriteriaParser::BUCK);
    setState(141);
    match(MyCriteriaParser::STR);
    setState(142);
    match(MyCriteriaParser::EQUALS);
    setState(143);
    expr(0);
   
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

tree::TerminalNode* MyCriteriaParser::IdentifierAccessContext::STR() {
  return getToken(MyCriteriaParser::STR, 0);
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
    setState(145);
    match(MyCriteriaParser::BUCK);
    setState(146);
    match(MyCriteriaParser::STR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JsonPointerInnerContext ------------------------------------------------------------------

MyCriteriaParser::JsonPointerInnerContext::JsonPointerInnerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MyCriteriaParser::JsonPointerInnerContext::STR() {
  return getTokens(MyCriteriaParser::STR);
}

tree::TerminalNode* MyCriteriaParser::JsonPointerInnerContext::STR(size_t i) {
  return getToken(MyCriteriaParser::STR, i);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::JsonPointerInnerContext::SLASH() {
  return getTokens(MyCriteriaParser::SLASH);
}

tree::TerminalNode* MyCriteriaParser::JsonPointerInnerContext::SLASH(size_t i) {
  return getToken(MyCriteriaParser::SLASH, i);
}


size_t MyCriteriaParser::JsonPointerInnerContext::getRuleIndex() const {
  return MyCriteriaParser::RuleJsonPointerInner;
}

void MyCriteriaParser::JsonPointerInnerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJsonPointerInner(this);
}

void MyCriteriaParser::JsonPointerInnerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJsonPointerInner(this);
}


std::any MyCriteriaParser::JsonPointerInnerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitJsonPointerInner(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::JsonPointerInnerContext* MyCriteriaParser::jsonPointerInner() {
  JsonPointerInnerContext *_localctx = _tracker.createInstance<JsonPointerInnerContext>(_ctx, getState());
  enterRule(_localctx, 12, MyCriteriaParser::RuleJsonPointerInner);
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
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyCriteriaParser::SLASH) {
      setState(148);
      match(MyCriteriaParser::SLASH);
    }
    setState(151);
    match(MyCriteriaParser::STR);
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(152);
        match(MyCriteriaParser::SLASH);
        setState(153);
        match(MyCriteriaParser::STR); 
      }
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyCriteriaParser::SLASH) {
      setState(159);
      match(MyCriteriaParser::SLASH);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JsonPointerContext ------------------------------------------------------------------

MyCriteriaParser::JsonPointerContext::JsonPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MyCriteriaParser::JsonPointerContext::S_Q() {
  return getTokens(MyCriteriaParser::S_Q);
}

tree::TerminalNode* MyCriteriaParser::JsonPointerContext::S_Q(size_t i) {
  return getToken(MyCriteriaParser::S_Q, i);
}

MyCriteriaParser::JsonPointerInnerContext* MyCriteriaParser::JsonPointerContext::jsonPointerInner() {
  return getRuleContext<MyCriteriaParser::JsonPointerInnerContext>(0);
}

std::vector<tree::TerminalNode *> MyCriteriaParser::JsonPointerContext::D_Q() {
  return getTokens(MyCriteriaParser::D_Q);
}

tree::TerminalNode* MyCriteriaParser::JsonPointerContext::D_Q(size_t i) {
  return getToken(MyCriteriaParser::D_Q, i);
}

tree::TerminalNode* MyCriteriaParser::JsonPointerContext::STR_LITERAL() {
  return getToken(MyCriteriaParser::STR_LITERAL, 0);
}


size_t MyCriteriaParser::JsonPointerContext::getRuleIndex() const {
  return MyCriteriaParser::RuleJsonPointer;
}

void MyCriteriaParser::JsonPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJsonPointer(this);
}

void MyCriteriaParser::JsonPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyCriteriaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJsonPointer(this);
}


std::any MyCriteriaParser::JsonPointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MyCriteriaVisitor*>(visitor))
    return parserVisitor->visitJsonPointer(this);
  else
    return visitor->visitChildren(this);
}

MyCriteriaParser::JsonPointerContext* MyCriteriaParser::jsonPointer() {
  JsonPointerContext *_localctx = _tracker.createInstance<JsonPointerContext>(_ctx, getState());
  enterRule(_localctx, 14, MyCriteriaParser::RuleJsonPointer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::S_Q: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        match(MyCriteriaParser::S_Q);
        setState(163);
        jsonPointerInner();
        setState(164);
        match(MyCriteriaParser::S_Q);
        break;
      }

      case MyCriteriaParser::D_Q: {
        enterOuterAlt(_localctx, 2);
        setState(166);
        match(MyCriteriaParser::D_Q);
        setState(167);
        jsonPointerInner();
        setState(168);
        match(MyCriteriaParser::D_Q);
        break;
      }

      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(170);
        match(MyCriteriaParser::STR_LITERAL);
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

//----------------- ObjectAccessParserContext ------------------------------------------------------------------

MyCriteriaParser::ObjectAccessParserContext::ObjectAccessParserContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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

std::vector<MyCriteriaParser::JsonPointerContext *> MyCriteriaParser::ObjectAccessParserContext::jsonPointer() {
  return getRuleContexts<MyCriteriaParser::JsonPointerContext>();
}

MyCriteriaParser::JsonPointerContext* MyCriteriaParser::ObjectAccessParserContext::jsonPointer(size_t i) {
  return getRuleContext<MyCriteriaParser::JsonPointerContext>(i);
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
  enterRule(_localctx, 16, MyCriteriaParser::RuleObjectAccessParser);
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
    setState(173);
    match(MyCriteriaParser::T__13);
    setState(175); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(174);
      match(MyCriteriaParser::SQR_L);
      setState(177); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::SQR_L);
    setState(180); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(179);
      jsonPointer();
      setState(182); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 838860800) != 0));
    setState(184);
    match(MyCriteriaParser::SQR_R);
   
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
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(186);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(187);
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
  enterRule(_localctx, 20, MyCriteriaParser::RuleNumb);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(190);
      match(MyCriteriaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
      match(MyCriteriaParser::INT);
      setState(192);
      match(MyCriteriaParser::DOT);
      setState(193);
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
  enterRule(_localctx, 22, MyCriteriaParser::RuleInArrayParser);
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
    setState(196);
    objectAccessParser();
    setState(200);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::IN: {
        setState(197);
        match(MyCriteriaParser::IN);
        break;
      }

      case MyCriteriaParser::EXCL: {
        setState(198);
        match(MyCriteriaParser::EXCL);
        setState(199);
        match(MyCriteriaParser::IN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(202);
    match(MyCriteriaParser::SQR_L);
    setState(203);
    strOrNum();
    setState(208);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyCriteriaParser::COMMA) {
      setState(204);
      match(MyCriteriaParser::COMMA);
      setState(205);
      strOrNum();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(211);
    match(MyCriteriaParser::SQR_R);
   
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
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MyCriteriaParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 9);
    case 5: return precpred(_ctx, 8);

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
