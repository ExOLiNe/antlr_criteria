
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "SLASH", "DOT", "COMMA", 
      "SQR_L", "SQR_R", "IN", "BOOL", "EXCL", "INT", "STR_LITERAL", "STR", 
      "NULL_T", "S_Q", "D_Q", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,29,160,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,
  	12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,
  	17,1,17,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,3,20,121,8,20,1,21,1,21,1,22,4,22,126,8,22,11,22,12,22,127,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,138,8,23,1,24,4,24,141,8,24,
  	11,24,12,24,142,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,28,4,28,
  	155,8,28,11,28,12,28,156,1,28,1,28,0,0,29,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,1,0,3,
  	1,0,48,57,3,0,48,57,65,90,97,122,3,0,9,10,13,13,32,32,164,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,
  	0,57,1,0,0,0,1,59,1,0,0,0,3,61,1,0,0,0,5,63,1,0,0,0,7,65,1,0,0,0,9,67,
  	1,0,0,0,11,69,1,0,0,0,13,71,1,0,0,0,15,73,1,0,0,0,17,76,1,0,0,0,19,79,
  	1,0,0,0,21,82,1,0,0,0,23,85,1,0,0,0,25,88,1,0,0,0,27,91,1,0,0,0,29,98,
  	1,0,0,0,31,100,1,0,0,0,33,102,1,0,0,0,35,104,1,0,0,0,37,106,1,0,0,0,39,
  	108,1,0,0,0,41,120,1,0,0,0,43,122,1,0,0,0,45,125,1,0,0,0,47,137,1,0,0,
  	0,49,140,1,0,0,0,51,144,1,0,0,0,53,149,1,0,0,0,55,151,1,0,0,0,57,154,
  	1,0,0,0,59,60,5,42,0,0,60,2,1,0,0,0,61,62,5,43,0,0,62,4,1,0,0,0,63,64,
  	5,45,0,0,64,6,1,0,0,0,65,66,5,40,0,0,66,8,1,0,0,0,67,68,5,41,0,0,68,10,
  	1,0,0,0,69,70,5,62,0,0,70,12,1,0,0,0,71,72,5,60,0,0,72,14,1,0,0,0,73,
  	74,5,60,0,0,74,75,5,61,0,0,75,16,1,0,0,0,76,77,5,62,0,0,77,78,5,61,0,
  	0,78,18,1,0,0,0,79,80,5,61,0,0,80,81,5,61,0,0,81,20,1,0,0,0,82,83,5,33,
  	0,0,83,84,5,61,0,0,84,22,1,0,0,0,85,86,5,38,0,0,86,87,5,38,0,0,87,24,
  	1,0,0,0,88,89,5,124,0,0,89,90,5,124,0,0,90,26,1,0,0,0,91,92,5,111,0,0,
  	92,93,5,98,0,0,93,94,5,106,0,0,94,95,5,101,0,0,95,96,5,99,0,0,96,97,5,
  	116,0,0,97,28,1,0,0,0,98,99,5,47,0,0,99,30,1,0,0,0,100,101,5,46,0,0,101,
  	32,1,0,0,0,102,103,5,44,0,0,103,34,1,0,0,0,104,105,5,91,0,0,105,36,1,
  	0,0,0,106,107,5,93,0,0,107,38,1,0,0,0,108,109,5,105,0,0,109,110,5,110,
  	0,0,110,40,1,0,0,0,111,112,5,116,0,0,112,113,5,114,0,0,113,114,5,117,
  	0,0,114,121,5,101,0,0,115,116,5,102,0,0,116,117,5,97,0,0,117,118,5,108,
  	0,0,118,119,5,115,0,0,119,121,5,101,0,0,120,111,1,0,0,0,120,115,1,0,0,
  	0,121,42,1,0,0,0,122,123,5,33,0,0,123,44,1,0,0,0,124,126,7,0,0,0,125,
  	124,1,0,0,0,126,127,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,46,1,
  	0,0,0,129,130,3,53,26,0,130,131,3,49,24,0,131,132,3,53,26,0,132,138,1,
  	0,0,0,133,134,3,55,27,0,134,135,3,49,24,0,135,136,3,55,27,0,136,138,1,
  	0,0,0,137,129,1,0,0,0,137,133,1,0,0,0,138,48,1,0,0,0,139,141,7,1,0,0,
  	140,139,1,0,0,0,141,142,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,143,50,
  	1,0,0,0,144,145,5,110,0,0,145,146,5,117,0,0,146,147,5,108,0,0,147,148,
  	5,108,0,0,148,52,1,0,0,0,149,150,5,39,0,0,150,54,1,0,0,0,151,152,5,34,
  	0,0,152,56,1,0,0,0,153,155,7,2,0,0,154,153,1,0,0,0,155,156,1,0,0,0,156,
  	154,1,0,0,0,156,157,1,0,0,0,157,158,1,0,0,0,158,159,6,28,0,0,159,58,1,
  	0,0,0,6,0,120,127,137,142,156,1,6,0,0
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