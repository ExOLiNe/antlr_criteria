
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
      "app", "statements", "statement", "expr", "test_expr", "importStatement", 
      "identifierDefinitions", "identifierDefinition", "identifierAccess", 
      "jsonPointerInner", "jsonPointer", "objectAccessParser", "strOrNum", 
      "numb", "inArrayParser"
    },
    std::vector<std::string>{
      "", "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
      "'=='", "'!='", "'&&'", "'||'", "'object'", "'import'", "'/'", "'.'", 
      "','", "';'", "'['", "']'", "'in'", "", "'!'", "'null'", "'''", "'\"'", 
      "'$'", "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IMPORT", 
      "SLASH", "DOT", "COMMA", "SEMICOLON", "SQR_L", "SQR_R", "IN", "BOOL", 
      "EXCL", "NULL_T", "S_Q", "D_Q", "BUCK", "EQUALS", "STR_LITERAL", "INT", 
      "STR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,33,240,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,5,0,32,8,0,10,0,12,0,35,9,0,1,0,1,0,1,1,4,1,40,8,1,11,1,12,1,41,
  	1,2,1,2,1,2,1,2,1,2,1,2,3,2,50,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,
  	3,60,8,3,10,3,12,3,63,9,3,1,3,3,3,66,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,3,3,80,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,100,8,3,10,3,12,3,103,9,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,119,8,4,10,4,12,
  	4,122,9,4,1,4,3,4,125,8,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,
  	4,155,8,4,1,5,1,5,1,5,1,6,1,6,1,6,4,6,163,8,6,11,6,12,6,164,1,7,1,7,1,
  	7,1,7,1,7,1,8,1,8,1,8,1,9,3,9,176,8,9,1,9,1,9,1,9,5,9,181,8,9,10,9,12,
  	9,184,9,9,1,9,3,9,187,8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	3,10,198,8,10,1,11,1,11,4,11,202,8,11,11,11,12,11,203,1,11,4,11,207,8,
  	11,11,11,12,11,208,1,11,1,11,1,12,1,12,3,12,215,8,12,1,13,1,13,1,13,1,
  	13,3,13,221,8,13,1,14,1,14,1,14,1,14,3,14,227,8,14,1,14,1,14,1,14,1,14,
  	5,14,233,8,14,10,14,12,14,236,9,14,1,14,1,14,1,14,0,1,6,15,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,0,3,2,0,1,1,16,16,1,0,2,3,1,0,6,11,272,
  	0,33,1,0,0,0,2,39,1,0,0,0,4,49,1,0,0,0,6,79,1,0,0,0,8,154,1,0,0,0,10,
  	156,1,0,0,0,12,162,1,0,0,0,14,166,1,0,0,0,16,171,1,0,0,0,18,175,1,0,0,
  	0,20,197,1,0,0,0,22,199,1,0,0,0,24,214,1,0,0,0,26,220,1,0,0,0,28,222,
  	1,0,0,0,30,32,3,4,2,0,31,30,1,0,0,0,32,35,1,0,0,0,33,31,1,0,0,0,33,34,
  	1,0,0,0,34,36,1,0,0,0,35,33,1,0,0,0,36,37,3,6,3,0,37,1,1,0,0,0,38,40,
  	3,4,2,0,39,38,1,0,0,0,40,41,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,3,
  	1,0,0,0,43,44,3,10,5,0,44,45,5,19,0,0,45,50,1,0,0,0,46,47,3,14,7,0,47,
  	48,5,19,0,0,48,50,1,0,0,0,49,43,1,0,0,0,49,46,1,0,0,0,50,5,1,0,0,0,51,
  	52,6,3,-1,0,52,80,3,16,8,0,53,80,3,28,14,0,54,55,5,32,0,0,55,61,5,4,0,
  	0,56,57,3,6,3,0,57,58,5,18,0,0,58,60,1,0,0,0,59,56,1,0,0,0,60,63,1,0,
  	0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,65,1,0,0,0,63,61,1,0,0,0,64,66,3,6,
  	3,0,65,64,1,0,0,0,65,66,1,0,0,0,66,67,1,0,0,0,67,80,5,5,0,0,68,69,5,24,
  	0,0,69,80,3,6,3,7,70,71,5,4,0,0,71,72,3,6,3,0,72,73,5,5,0,0,73,80,1,0,
  	0,0,74,80,5,23,0,0,75,80,3,26,13,0,76,80,3,22,11,0,77,80,5,30,0,0,78,
  	80,5,25,0,0,79,51,1,0,0,0,79,53,1,0,0,0,79,54,1,0,0,0,79,68,1,0,0,0,79,
  	70,1,0,0,0,79,74,1,0,0,0,79,75,1,0,0,0,79,76,1,0,0,0,79,77,1,0,0,0,79,
  	78,1,0,0,0,80,101,1,0,0,0,81,82,10,14,0,0,82,83,7,0,0,0,83,100,3,6,3,
  	15,84,85,10,13,0,0,85,86,7,1,0,0,86,100,3,6,3,14,87,88,10,11,0,0,88,89,
  	5,32,0,0,89,100,3,6,3,12,90,91,10,10,0,0,91,92,7,2,0,0,92,100,3,6,3,11,
  	93,94,10,9,0,0,94,95,5,12,0,0,95,100,3,6,3,10,96,97,10,8,0,0,97,98,5,
  	13,0,0,98,100,3,6,3,9,99,81,1,0,0,0,99,84,1,0,0,0,99,87,1,0,0,0,99,90,
  	1,0,0,0,99,93,1,0,0,0,99,96,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,
  	102,1,0,0,0,102,7,1,0,0,0,103,101,1,0,0,0,104,155,3,28,14,0,105,106,3,
  	6,3,0,106,107,7,0,0,0,107,108,3,6,3,0,108,155,1,0,0,0,109,110,3,6,3,0,
  	110,111,7,1,0,0,111,112,3,6,3,0,112,155,1,0,0,0,113,114,5,32,0,0,114,
  	120,5,4,0,0,115,116,3,6,3,0,116,117,5,18,0,0,117,119,1,0,0,0,118,115,
  	1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,124,1,0,0,
  	0,122,120,1,0,0,0,123,125,3,6,3,0,124,123,1,0,0,0,124,125,1,0,0,0,125,
  	126,1,0,0,0,126,155,5,5,0,0,127,128,3,6,3,0,128,129,5,32,0,0,129,130,
  	3,6,3,0,130,155,1,0,0,0,131,132,3,6,3,0,132,133,7,2,0,0,133,134,3,6,3,
  	0,134,155,1,0,0,0,135,136,3,6,3,0,136,137,5,12,0,0,137,138,3,6,3,0,138,
  	155,1,0,0,0,139,140,3,6,3,0,140,141,5,13,0,0,141,142,3,6,3,0,142,155,
  	1,0,0,0,143,144,5,24,0,0,144,155,3,6,3,0,145,146,5,4,0,0,146,147,3,6,
  	3,0,147,148,5,5,0,0,148,155,1,0,0,0,149,155,5,23,0,0,150,155,5,31,0,0,
  	151,155,3,22,11,0,152,155,5,30,0,0,153,155,5,25,0,0,154,104,1,0,0,0,154,
  	105,1,0,0,0,154,109,1,0,0,0,154,113,1,0,0,0,154,127,1,0,0,0,154,131,1,
  	0,0,0,154,135,1,0,0,0,154,139,1,0,0,0,154,143,1,0,0,0,154,145,1,0,0,0,
  	154,149,1,0,0,0,154,150,1,0,0,0,154,151,1,0,0,0,154,152,1,0,0,0,154,153,
  	1,0,0,0,155,9,1,0,0,0,156,157,5,15,0,0,157,158,5,32,0,0,158,11,1,0,0,
  	0,159,160,3,14,7,0,160,161,5,19,0,0,161,163,1,0,0,0,162,159,1,0,0,0,163,
  	164,1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,13,1,0,0,0,166,167,5,
  	28,0,0,167,168,5,32,0,0,168,169,5,29,0,0,169,170,3,6,3,0,170,15,1,0,0,
  	0,171,172,5,28,0,0,172,173,5,32,0,0,173,17,1,0,0,0,174,176,5,16,0,0,175,
  	174,1,0,0,0,175,176,1,0,0,0,176,177,1,0,0,0,177,182,5,32,0,0,178,179,
  	5,16,0,0,179,181,5,32,0,0,180,178,1,0,0,0,181,184,1,0,0,0,182,180,1,0,
  	0,0,182,183,1,0,0,0,183,186,1,0,0,0,184,182,1,0,0,0,185,187,5,16,0,0,
  	186,185,1,0,0,0,186,187,1,0,0,0,187,19,1,0,0,0,188,189,5,26,0,0,189,190,
  	3,18,9,0,190,191,5,26,0,0,191,198,1,0,0,0,192,193,5,27,0,0,193,194,3,
  	18,9,0,194,195,5,27,0,0,195,198,1,0,0,0,196,198,5,30,0,0,197,188,1,0,
  	0,0,197,192,1,0,0,0,197,196,1,0,0,0,198,21,1,0,0,0,199,201,5,14,0,0,200,
  	202,5,20,0,0,201,200,1,0,0,0,202,203,1,0,0,0,203,201,1,0,0,0,203,204,
  	1,0,0,0,204,206,1,0,0,0,205,207,3,20,10,0,206,205,1,0,0,0,207,208,1,0,
  	0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,210,1,0,0,0,210,211,5,21,0,0,
  	211,23,1,0,0,0,212,215,5,30,0,0,213,215,3,26,13,0,214,212,1,0,0,0,214,
  	213,1,0,0,0,215,25,1,0,0,0,216,221,5,31,0,0,217,218,5,31,0,0,218,219,
  	5,17,0,0,219,221,5,31,0,0,220,216,1,0,0,0,220,217,1,0,0,0,221,27,1,0,
  	0,0,222,226,3,22,11,0,223,227,5,22,0,0,224,225,5,24,0,0,225,227,5,22,
  	0,0,226,223,1,0,0,0,226,224,1,0,0,0,227,228,1,0,0,0,228,229,5,20,0,0,
  	229,234,3,24,12,0,230,231,5,18,0,0,231,233,3,24,12,0,232,230,1,0,0,0,
  	233,236,1,0,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,237,1,0,0,0,236,234,
  	1,0,0,0,237,238,5,21,0,0,238,29,1,0,0,0,22,33,41,49,61,65,79,99,101,120,
  	124,154,164,175,182,186,197,203,208,214,220,226,234
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
    setState(33);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(30);
        statement(); 
      }
      setState(35);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(36);
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
    setState(39); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(38);
      statement();
      setState(41); 
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
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::IMPORT: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        importStatement();
        setState(44);
        match(MyCriteriaParser::SEMICOLON);
        break;
      }

      case MyCriteriaParser::BUCK: {
        enterOuterAlt(_localctx, 2);
        setState(46);
        identifierDefinition();
        setState(47);
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
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(52);
      identifierAccess();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<InArrayContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(53);
      inArrayParser();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(54);
      match(MyCriteriaParser::STR);
      setState(55);
      match(MyCriteriaParser::T__3);
      setState(61);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(56);
          expr(0);
          setState(57);
          match(MyCriteriaParser::COMMA); 
        }
        setState(63);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      }
      setState(65);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 7843364880) != 0)) {
        setState(64);
        expr(0);
      }
      setState(67);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(68);
      match(MyCriteriaParser::EXCL);
      setState(69);
      expr(7);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(70);
      match(MyCriteriaParser::T__3);
      setState(71);
      expr(0);
      setState(72);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<BoolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(74);
      match(MyCriteriaParser::BOOL);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(75);
      numb();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ObjectAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(76);
      objectAccessParser();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StrLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(77);
      match(MyCriteriaParser::STR_LITERAL);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<NullContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(78);
      match(MyCriteriaParser::NULL_T);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(99);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(82);
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
          setState(83);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(84);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(85);
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
          setState(86);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<InfixFuncCallContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(87);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(88);
          match(MyCriteriaParser::STR);
          setState(89);
          expr(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(90);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(91);
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
          setState(92);
          expr(11);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(93);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(94);
          match(MyCriteriaParser::T__11);
          setState(95);
          expr(10);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(96);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(97);
          match(MyCriteriaParser::T__12);
          setState(98);
          expr(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(103);
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
  enterRule(_localctx, 8, MyCriteriaParser::RuleTest_expr);
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
    setState(154);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      inArrayParser();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      expr(0);
      setState(106);
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
      setState(107);
      expr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(109);
      expr(0);
      setState(110);
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
      setState(111);
      expr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(113);
      match(MyCriteriaParser::STR);
      setState(114);
      match(MyCriteriaParser::T__3);
      setState(120);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(115);
          expr(0);
          setState(116);
          match(MyCriteriaParser::COMMA); 
        }
        setState(122);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      }
      setState(124);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 7843364880) != 0)) {
        setState(123);
        expr(0);
      }
      setState(126);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(127);
      expr(0);
      setState(128);
      match(MyCriteriaParser::STR);
      setState(129);
      expr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(131);
      expr(0);
      setState(132);
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
      setState(133);
      expr(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(135);
      expr(0);
      setState(136);
      match(MyCriteriaParser::T__11);
      setState(137);
      expr(0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(139);
      expr(0);
      setState(140);
      match(MyCriteriaParser::T__12);
      setState(141);
      expr(0);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(143);
      match(MyCriteriaParser::EXCL);
      setState(144);
      expr(0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(145);
      match(MyCriteriaParser::T__3);
      setState(146);
      expr(0);
      setState(147);
      match(MyCriteriaParser::T__4);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(149);
      match(MyCriteriaParser::BOOL);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(150);
      match(MyCriteriaParser::INT);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(151);
      objectAccessParser();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(152);
      match(MyCriteriaParser::STR_LITERAL);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(153);
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

//----------------- ImportStatementContext ------------------------------------------------------------------

MyCriteriaParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyCriteriaParser::ImportStatementContext::IMPORT() {
  return getToken(MyCriteriaParser::IMPORT, 0);
}

tree::TerminalNode* MyCriteriaParser::ImportStatementContext::STR() {
  return getToken(MyCriteriaParser::STR, 0);
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
    setState(156);
    match(MyCriteriaParser::IMPORT);
    setState(157);
    match(MyCriteriaParser::STR);
   
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
    setState(162); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(159);
      identifierDefinition();
      setState(160);
      match(MyCriteriaParser::SEMICOLON);
      setState(164); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::BUCK);
   
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
    setState(166);
    match(MyCriteriaParser::BUCK);
    setState(167);
    match(MyCriteriaParser::STR);
    setState(168);
    match(MyCriteriaParser::EQUALS);
    setState(169);
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
  enterRule(_localctx, 16, MyCriteriaParser::RuleIdentifierAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(MyCriteriaParser::BUCK);
    setState(172);
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
  enterRule(_localctx, 18, MyCriteriaParser::RuleJsonPointerInner);
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
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyCriteriaParser::SLASH) {
      setState(174);
      match(MyCriteriaParser::SLASH);
    }
    setState(177);
    match(MyCriteriaParser::STR);
    setState(182);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(178);
        match(MyCriteriaParser::SLASH);
        setState(179);
        match(MyCriteriaParser::STR); 
      }
      setState(184);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MyCriteriaParser::SLASH) {
      setState(185);
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
  enterRule(_localctx, 20, MyCriteriaParser::RuleJsonPointer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(197);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::S_Q: {
        enterOuterAlt(_localctx, 1);
        setState(188);
        match(MyCriteriaParser::S_Q);
        setState(189);
        jsonPointerInner();
        setState(190);
        match(MyCriteriaParser::S_Q);
        break;
      }

      case MyCriteriaParser::D_Q: {
        enterOuterAlt(_localctx, 2);
        setState(192);
        match(MyCriteriaParser::D_Q);
        setState(193);
        jsonPointerInner();
        setState(194);
        match(MyCriteriaParser::D_Q);
        break;
      }

      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(196);
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
  enterRule(_localctx, 22, MyCriteriaParser::RuleObjectAccessParser);
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
    setState(199);
    match(MyCriteriaParser::T__13);
    setState(201); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(200);
      match(MyCriteriaParser::SQR_L);
      setState(203); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MyCriteriaParser::SQR_L);
    setState(206); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(205);
      jsonPointer();
      setState(208); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1275068416) != 0));
    setState(210);
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
  enterRule(_localctx, 24, MyCriteriaParser::RuleStrOrNum);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::STR_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(212);
        match(MyCriteriaParser::STR_LITERAL);
        break;
      }

      case MyCriteriaParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(213);
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
  enterRule(_localctx, 26, MyCriteriaParser::RuleNumb);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(216);
      match(MyCriteriaParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(217);
      match(MyCriteriaParser::INT);
      setState(218);
      match(MyCriteriaParser::DOT);
      setState(219);
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
  enterRule(_localctx, 28, MyCriteriaParser::RuleInArrayParser);
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
    setState(222);
    objectAccessParser();
    setState(226);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyCriteriaParser::IN: {
        setState(223);
        match(MyCriteriaParser::IN);
        break;
      }

      case MyCriteriaParser::EXCL: {
        setState(224);
        match(MyCriteriaParser::EXCL);
        setState(225);
        match(MyCriteriaParser::IN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(228);
    match(MyCriteriaParser::SQR_L);
    setState(229);
    strOrNum();
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyCriteriaParser::COMMA) {
      setState(230);
      match(MyCriteriaParser::COMMA);
      setState(231);
      strOrNum();
      setState(236);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(237);
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
    case 3: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
