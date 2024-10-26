
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
      "app", "expr", "test_expr", "jsonPointerInner", "jsonPointer", "objectAccessParser", 
      "strOrNum", "numb", "inArrayParser"
    },
    std::vector<std::string>{
      "", "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
      "'=='", "'!='", "'&&'", "'||'", "'object'", "'/'", "'.'", "','", "'['", 
      "']'", "'in'", "", "'!'", "", "", "", "'null'", "'''", "'\"'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "SLASH", 
      "DOT", "COMMA", "SQR_L", "SQR_R", "IN", "BOOL", "EXCL", "INT", "STR_LITERAL", 
      "STR", "NULL_T", "S_Q", "D_Q", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,190,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,28,8,1,10,1,12,
  	1,31,9,1,1,1,3,1,34,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,3,1,48,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,5,1,68,8,1,10,1,12,1,71,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,87,8,2,10,2,12,2,90,9,2,1,2,3,2,93,
  	8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,123,8,2,1,3,3,3,126,
  	8,3,1,3,1,3,1,3,5,3,131,8,3,10,3,12,3,134,9,3,1,3,3,3,137,8,3,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,148,8,4,1,5,1,5,4,5,152,8,5,11,5,12,5,
  	153,1,5,4,5,157,8,5,11,5,12,5,158,1,5,1,5,1,6,1,6,3,6,165,8,6,1,7,1,7,
  	1,7,1,7,3,7,171,8,7,1,8,1,8,1,8,1,8,3,8,177,8,8,1,8,1,8,1,8,1,8,5,8,183,
  	8,8,10,8,12,8,186,9,8,1,8,1,8,1,8,0,1,2,9,0,2,4,6,8,10,12,14,16,0,3,2,
  	0,1,1,15,15,1,0,2,3,1,0,6,11,223,0,18,1,0,0,0,2,47,1,0,0,0,4,122,1,0,
  	0,0,6,125,1,0,0,0,8,147,1,0,0,0,10,149,1,0,0,0,12,164,1,0,0,0,14,170,
  	1,0,0,0,16,172,1,0,0,0,18,19,3,2,1,0,19,1,1,0,0,0,20,21,6,1,-1,0,21,48,
  	3,16,8,0,22,23,5,25,0,0,23,29,5,4,0,0,24,25,3,2,1,0,25,26,5,17,0,0,26,
  	28,1,0,0,0,27,24,1,0,0,0,28,31,1,0,0,0,29,27,1,0,0,0,29,30,1,0,0,0,30,
  	33,1,0,0,0,31,29,1,0,0,0,32,34,3,2,1,0,33,32,1,0,0,0,33,34,1,0,0,0,34,
  	35,1,0,0,0,35,48,5,5,0,0,36,37,5,22,0,0,37,48,3,2,1,7,38,39,5,4,0,0,39,
  	40,3,2,1,0,40,41,5,5,0,0,41,48,1,0,0,0,42,48,5,21,0,0,43,48,3,14,7,0,
  	44,48,3,10,5,0,45,48,5,24,0,0,46,48,5,26,0,0,47,20,1,0,0,0,47,22,1,0,
  	0,0,47,36,1,0,0,0,47,38,1,0,0,0,47,42,1,0,0,0,47,43,1,0,0,0,47,44,1,0,
  	0,0,47,45,1,0,0,0,47,46,1,0,0,0,48,69,1,0,0,0,49,50,10,14,0,0,50,51,7,
  	0,0,0,51,68,3,2,1,15,52,53,10,13,0,0,53,54,7,1,0,0,54,68,3,2,1,14,55,
  	56,10,11,0,0,56,57,5,25,0,0,57,68,3,2,1,12,58,59,10,10,0,0,59,60,7,2,
  	0,0,60,68,3,2,1,11,61,62,10,9,0,0,62,63,5,12,0,0,63,68,3,2,1,10,64,65,
  	10,8,0,0,65,66,5,13,0,0,66,68,3,2,1,9,67,49,1,0,0,0,67,52,1,0,0,0,67,
  	55,1,0,0,0,67,58,1,0,0,0,67,61,1,0,0,0,67,64,1,0,0,0,68,71,1,0,0,0,69,
  	67,1,0,0,0,69,70,1,0,0,0,70,3,1,0,0,0,71,69,1,0,0,0,72,123,3,16,8,0,73,
  	74,3,2,1,0,74,75,7,0,0,0,75,76,3,2,1,0,76,123,1,0,0,0,77,78,3,2,1,0,78,
  	79,7,1,0,0,79,80,3,2,1,0,80,123,1,0,0,0,81,82,5,25,0,0,82,88,5,4,0,0,
  	83,84,3,2,1,0,84,85,5,17,0,0,85,87,1,0,0,0,86,83,1,0,0,0,87,90,1,0,0,
  	0,88,86,1,0,0,0,88,89,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,91,93,3,2,1,
  	0,92,91,1,0,0,0,92,93,1,0,0,0,93,94,1,0,0,0,94,123,5,5,0,0,95,96,3,2,
  	1,0,96,97,5,25,0,0,97,98,3,2,1,0,98,123,1,0,0,0,99,100,3,2,1,0,100,101,
  	7,2,0,0,101,102,3,2,1,0,102,123,1,0,0,0,103,104,3,2,1,0,104,105,5,12,
  	0,0,105,106,3,2,1,0,106,123,1,0,0,0,107,108,3,2,1,0,108,109,5,13,0,0,
  	109,110,3,2,1,0,110,123,1,0,0,0,111,112,5,22,0,0,112,123,3,2,1,0,113,
  	114,5,4,0,0,114,115,3,2,1,0,115,116,5,5,0,0,116,123,1,0,0,0,117,123,5,
  	21,0,0,118,123,5,23,0,0,119,123,3,10,5,0,120,123,5,24,0,0,121,123,5,26,
  	0,0,122,72,1,0,0,0,122,73,1,0,0,0,122,77,1,0,0,0,122,81,1,0,0,0,122,95,
  	1,0,0,0,122,99,1,0,0,0,122,103,1,0,0,0,122,107,1,0,0,0,122,111,1,0,0,
  	0,122,113,1,0,0,0,122,117,1,0,0,0,122,118,1,0,0,0,122,119,1,0,0,0,122,
  	120,1,0,0,0,122,121,1,0,0,0,123,5,1,0,0,0,124,126,5,15,0,0,125,124,1,
  	0,0,0,125,126,1,0,0,0,126,127,1,0,0,0,127,132,5,25,0,0,128,129,5,15,0,
  	0,129,131,5,25,0,0,130,128,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,
  	133,1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,0,135,137,5,15,0,0,136,135,
  	1,0,0,0,136,137,1,0,0,0,137,7,1,0,0,0,138,139,5,27,0,0,139,140,3,6,3,
  	0,140,141,5,27,0,0,141,148,1,0,0,0,142,143,5,28,0,0,143,144,3,6,3,0,144,
  	145,5,28,0,0,145,148,1,0,0,0,146,148,5,24,0,0,147,138,1,0,0,0,147,142,
  	1,0,0,0,147,146,1,0,0,0,148,9,1,0,0,0,149,151,5,14,0,0,150,152,5,18,0,
  	0,151,150,1,0,0,0,152,153,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,
  	156,1,0,0,0,155,157,3,8,4,0,156,155,1,0,0,0,157,158,1,0,0,0,158,156,1,
  	0,0,0,158,159,1,0,0,0,159,160,1,0,0,0,160,161,5,19,0,0,161,11,1,0,0,0,
  	162,165,5,24,0,0,163,165,3,14,7,0,164,162,1,0,0,0,164,163,1,0,0,0,165,
  	13,1,0,0,0,166,171,5,23,0,0,167,168,5,23,0,0,168,169,5,16,0,0,169,171,
  	5,23,0,0,170,166,1,0,0,0,170,167,1,0,0,0,171,15,1,0,0,0,172,176,3,10,
  	5,0,173,177,5,20,0,0,174,175,5,22,0,0,175,177,5,20,0,0,176,173,1,0,0,
  	0,176,174,1,0,0,0,177,178,1,0,0,0,178,179,5,18,0,0,179,184,3,12,6,0,180,
  	181,5,17,0,0,181,183,3,12,6,0,182,180,1,0,0,0,183,186,1,0,0,0,184,182,
  	1,0,0,0,184,185,1,0,0,0,185,187,1,0,0,0,186,184,1,0,0,0,187,188,5,19,
  	0,0,188,17,1,0,0,0,18,29,33,47,67,69,88,92,122,125,132,136,147,153,158,
  	164,170,176,184
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
    enterOuterAlt(_localctx, 1);
    setState(18);
    expr(0);
   
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
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, MyCriteriaParser::RuleExpr, precedence);

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
    setState(47);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InArrayContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(21);
      inArrayParser();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(22);
      match(MyCriteriaParser::STR);
      setState(23);
      match(MyCriteriaParser::T__3);
      setState(29);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(24);
          expr(0);
          setState(25);
          match(MyCriteriaParser::COMMA); 
        }
        setState(31);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      }
      setState(33);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 132136976) != 0)) {
        setState(32);
        expr(0);
      }
      setState(35);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(36);
      match(MyCriteriaParser::EXCL);
      setState(37);
      expr(7);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(38);
      match(MyCriteriaParser::T__3);
      setState(39);
      expr(0);
      setState(40);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<BoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(42);
      match(MyCriteriaParser::BOOL);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      numb();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ObjectAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(44);
      objectAccessParser();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StrLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(45);
      match(MyCriteriaParser::STR_LITERAL);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<NullContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(46);
      match(MyCriteriaParser::NULL_T);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(69);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(67);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(49);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(50);
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
          setState(51);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(52);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(53);
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
          setState(54);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<InfixFuncCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(55);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(56);
          match(MyCriteriaParser::STR);
          setState(57);
          expr(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(58);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(59);
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
          setState(60);
          expr(11);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(61);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(62);
          match(MyCriteriaParser::T__11);
          setState(63);
          expr(10);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(64);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(65);
          match(MyCriteriaParser::T__12);
          setState(66);
          expr(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(71);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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
  enterRule(_localctx, 4, MyCriteriaParser::RuleTest_expr);
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
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(72);
      inArrayParser();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(73);
      expr(0);
      setState(74);
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
      setState(75);
      expr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(77);
      expr(0);
      setState(78);
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
      setState(79);
      expr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(81);
      match(MyCriteriaParser::STR);
      setState(82);
      match(MyCriteriaParser::T__3);
      setState(88);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(83);
          expr(0);
          setState(84);
          match(MyCriteriaParser::COMMA); 
        }
        setState(90);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      }
      setState(92);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 132136976) != 0)) {
        setState(91);
        expr(0);
      }
      setState(94);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(95);
      expr(0);
      setState(96);
      match(MyCriteriaParser::STR);
      setState(97);
      expr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(99);
      expr(0);
      setState(100);
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
      setState(101);
      expr(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(103);
      expr(0);
      setState(104);
      match(MyCriteriaParser::T__11);
      setState(105);
      expr(0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(107);
      expr(0);
      setState(108);
      match(MyCriteriaParser::T__12);
      setState(109);
      expr(0);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(111);
      match(MyCriteriaParser::EXCL);
      setState(112);
      expr(0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(113);
      match(MyCriteriaParser::T__3);
      setState(114);
      expr(0);
      setState(115);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(117);
      match(MyCriteriaParser::BOOL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(118);
      match(MyCriteriaParser::INT);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(119);
      objectAccessParser();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(120);
      match(MyCriteriaParser::STR_LITERAL);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(121);
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
  enterRule(_localctx, 6, MyCriteriaParser::RuleJsonPointerInner);
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
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyCriteriaParser::SLASH) {
      setState(124);
      match(MyCriteriaParser::SLASH);
    }
    setState(127);
    match(MyCriteriaParser::STR);
    setState(132);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(128);
        match(MyCriteriaParser::SLASH);
        setState(129);
        match(MyCriteriaParser::STR); 
      }
      setState(134);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyCriteriaParser::SLASH) {
      setState(135);
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
  enterRule(_localctx, 8, MyCriteriaParser::RuleJsonPointer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::S_Q: {
        enterOuterAlt(_localctx, 1);
        setState(138);
        match(MyCriteriaParser::S_Q);
        setState(139);
        jsonPointerInner();
        setState(140);
        match(MyCriteriaParser::S_Q);
        break;
      }

      case MyCriteriaParser::D_Q: {
        enterOuterAlt(_localctx, 2);
        setState(142);
        match(MyCriteriaParser::D_Q);
        setState(143);
        jsonPointerInner();
        setState(144);
        match(MyCriteriaParser::D_Q);
        break;
      }

      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(146);
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
  enterRule(_localctx, 10, MyCriteriaParser::RuleObjectAccessParser);
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
    setState(149);
    match(MyCriteriaParser::T__13);
    setState(151); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(150);
      match(MyCriteriaParser::SQR_L);
      setState(153); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::SQR_L);
    setState(156); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(155);
      jsonPointer();
      setState(158); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 419430400) != 0));
    setState(160);
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
  enterRule(_localctx, 12, MyCriteriaParser::RuleStrOrNum);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(163);
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
  enterRule(_localctx, 14, MyCriteriaParser::RuleNumb);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(166);
      match(MyCriteriaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(167);
      match(MyCriteriaParser::INT);
      setState(168);
      match(MyCriteriaParser::DOT);
      setState(169);
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
  enterRule(_localctx, 16, MyCriteriaParser::RuleInArrayParser);
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
    setState(172);
    objectAccessParser();
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::IN: {
        setState(173);
        match(MyCriteriaParser::IN);
        break;
      }

      case MyCriteriaParser::EXCL: {
        setState(174);
        match(MyCriteriaParser::EXCL);
        setState(175);
        match(MyCriteriaParser::IN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(178);
    match(MyCriteriaParser::SQR_L);
    setState(179);
    strOrNum();
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyCriteriaParser::COMMA) {
      setState(180);
      match(MyCriteriaParser::COMMA);
      setState(181);
      strOrNum();
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(187);
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
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
