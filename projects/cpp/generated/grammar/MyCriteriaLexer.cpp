
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2


#include "MyCriteriaLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MyCriteriaLexerStaticData final {
  MyCriteriaLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyCriteriaLexerStaticData(const MyCriteriaLexerStaticData&) = delete;
  MyCriteriaLexerStaticData(MyCriteriaLexerStaticData&&) = delete;
  MyCriteriaLexerStaticData& operator=(const MyCriteriaLexerStaticData&) = delete;
  MyCriteriaLexerStaticData& operator=(MyCriteriaLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mycriterialexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MyCriteriaLexerStaticData> mycriterialexerLexerStaticData = nullptr;

void mycriterialexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mycriterialexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mycriterialexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MyCriteriaLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "BOOL", "INT", "STR_LITERAL", "STR", "NULL_T", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'*'", "'/'", "'+'", "'-'", "'('", "','", "')'", "'>'", "'<'", 
      "'<='", "'>='", "'=='", "'!='", "'&&'", "'||'", "'!'", "'object'", 
      "'['", "']'", "", "", "", "", "'null'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "BOOL", "INT", "STR_LITERAL", "STR", "NULL_T", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,25,143,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,3,19,110,8,19,1,20,4,20,113,8,20,11,20,12,20,
  	114,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,125,8,21,1,22,4,22,128,
  	8,22,11,22,12,22,129,1,23,1,23,1,23,1,23,1,23,1,24,4,24,138,8,24,11,24,
  	12,24,139,1,24,1,24,0,0,25,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,1,0,3,1,0,48,57,2,0,65,90,97,122,3,0,9,10,13,
  	13,32,32,147,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,
  	1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,1,51,1,0,0,0,
  	3,53,1,0,0,0,5,55,1,0,0,0,7,57,1,0,0,0,9,59,1,0,0,0,11,61,1,0,0,0,13,
  	63,1,0,0,0,15,65,1,0,0,0,17,67,1,0,0,0,19,69,1,0,0,0,21,72,1,0,0,0,23,
  	75,1,0,0,0,25,78,1,0,0,0,27,81,1,0,0,0,29,84,1,0,0,0,31,87,1,0,0,0,33,
  	89,1,0,0,0,35,96,1,0,0,0,37,98,1,0,0,0,39,109,1,0,0,0,41,112,1,0,0,0,
  	43,124,1,0,0,0,45,127,1,0,0,0,47,131,1,0,0,0,49,137,1,0,0,0,51,52,5,42,
  	0,0,52,2,1,0,0,0,53,54,5,47,0,0,54,4,1,0,0,0,55,56,5,43,0,0,56,6,1,0,
  	0,0,57,58,5,45,0,0,58,8,1,0,0,0,59,60,5,40,0,0,60,10,1,0,0,0,61,62,5,
  	44,0,0,62,12,1,0,0,0,63,64,5,41,0,0,64,14,1,0,0,0,65,66,5,62,0,0,66,16,
  	1,0,0,0,67,68,5,60,0,0,68,18,1,0,0,0,69,70,5,60,0,0,70,71,5,61,0,0,71,
  	20,1,0,0,0,72,73,5,62,0,0,73,74,5,61,0,0,74,22,1,0,0,0,75,76,5,61,0,0,
  	76,77,5,61,0,0,77,24,1,0,0,0,78,79,5,33,0,0,79,80,5,61,0,0,80,26,1,0,
  	0,0,81,82,5,38,0,0,82,83,5,38,0,0,83,28,1,0,0,0,84,85,5,124,0,0,85,86,
  	5,124,0,0,86,30,1,0,0,0,87,88,5,33,0,0,88,32,1,0,0,0,89,90,5,111,0,0,
  	90,91,5,98,0,0,91,92,5,106,0,0,92,93,5,101,0,0,93,94,5,99,0,0,94,95,5,
  	116,0,0,95,34,1,0,0,0,96,97,5,91,0,0,97,36,1,0,0,0,98,99,5,93,0,0,99,
  	38,1,0,0,0,100,101,5,116,0,0,101,102,5,114,0,0,102,103,5,117,0,0,103,
  	110,5,101,0,0,104,105,5,102,0,0,105,106,5,97,0,0,106,107,5,108,0,0,107,
  	108,5,115,0,0,108,110,5,101,0,0,109,100,1,0,0,0,109,104,1,0,0,0,110,40,
  	1,0,0,0,111,113,7,0,0,0,112,111,1,0,0,0,113,114,1,0,0,0,114,112,1,0,0,
  	0,114,115,1,0,0,0,115,42,1,0,0,0,116,117,5,39,0,0,117,118,3,45,22,0,118,
  	119,5,39,0,0,119,125,1,0,0,0,120,121,5,34,0,0,121,122,3,45,22,0,122,123,
  	5,34,0,0,123,125,1,0,0,0,124,116,1,0,0,0,124,120,1,0,0,0,125,44,1,0,0,
  	0,126,128,7,1,0,0,127,126,1,0,0,0,128,129,1,0,0,0,129,127,1,0,0,0,129,
  	130,1,0,0,0,130,46,1,0,0,0,131,132,5,110,0,0,132,133,5,117,0,0,133,134,
  	5,108,0,0,134,135,5,108,0,0,135,48,1,0,0,0,136,138,7,2,0,0,137,136,1,
  	0,0,0,138,139,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,141,1,0,0,0,
  	141,142,6,24,0,0,142,50,1,0,0,0,6,0,109,114,124,129,139,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mycriterialexerLexerStaticData = std::move(staticData);
}

}

MyCriteriaLexer::MyCriteriaLexer(CharStream *input) : Lexer(input) {
  MyCriteriaLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mycriterialexerLexerStaticData->atn, mycriterialexerLexerStaticData->decisionToDFA, mycriterialexerLexerStaticData->sharedContextCache);
}

MyCriteriaLexer::~MyCriteriaLexer() {
  delete _interpreter;
}

std::string MyCriteriaLexer::getGrammarFileName() const {
  return "MyCriteria.g4";
}

const std::vector<std::string>& MyCriteriaLexer::getRuleNames() const {
  return mycriterialexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MyCriteriaLexer::getChannelNames() const {
  return mycriterialexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MyCriteriaLexer::getModeNames() const {
  return mycriterialexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MyCriteriaLexer::getVocabulary() const {
  return mycriterialexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MyCriteriaLexer::getSerializedATN() const {
  return mycriterialexerLexerStaticData->serializedATN;
}

const atn::ATN& MyCriteriaLexer::getATN() const {
  return *mycriterialexerLexerStaticData->atn;
}




void MyCriteriaLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mycriterialexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mycriterialexerLexerOnceFlag, mycriterialexerLexerInitialize);
#endif
}
