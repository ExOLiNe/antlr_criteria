
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "IMPORT", "SLASH", "DOT", 
      "COMMA", "SEMICOLON", "SQR_L", "SQR_R", "IN", "BOOL", "EXCL", "NULL_T", 
      "S_Q", "D_Q", "BUCK", "EQUALS", "STR_LITERAL", "INT", "STR", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,33,181,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,
  	10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,
  	17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,22,3,22,138,8,22,1,23,1,23,1,24,1,24,1,24,1,24,1,
  	24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,
  	29,1,29,1,29,3,29,163,8,29,1,30,4,30,166,8,30,11,30,12,30,167,1,31,4,
  	31,171,8,31,11,31,12,31,172,1,32,4,32,176,8,32,11,32,12,32,177,1,32,1,
  	32,0,0,33,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,
  	49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,1,0,3,1,0,48,57,
  	3,0,48,57,65,90,97,122,3,0,9,10,13,13,32,32,185,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,
  	0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,1,67,1,0,0,0,
  	3,69,1,0,0,0,5,71,1,0,0,0,7,73,1,0,0,0,9,75,1,0,0,0,11,77,1,0,0,0,13,
  	79,1,0,0,0,15,81,1,0,0,0,17,84,1,0,0,0,19,87,1,0,0,0,21,90,1,0,0,0,23,
  	93,1,0,0,0,25,96,1,0,0,0,27,99,1,0,0,0,29,106,1,0,0,0,31,113,1,0,0,0,
  	33,115,1,0,0,0,35,117,1,0,0,0,37,119,1,0,0,0,39,121,1,0,0,0,41,123,1,
  	0,0,0,43,125,1,0,0,0,45,137,1,0,0,0,47,139,1,0,0,0,49,141,1,0,0,0,51,
  	146,1,0,0,0,53,148,1,0,0,0,55,150,1,0,0,0,57,152,1,0,0,0,59,162,1,0,0,
  	0,61,165,1,0,0,0,63,170,1,0,0,0,65,175,1,0,0,0,67,68,5,42,0,0,68,2,1,
  	0,0,0,69,70,5,43,0,0,70,4,1,0,0,0,71,72,5,45,0,0,72,6,1,0,0,0,73,74,5,
  	40,0,0,74,8,1,0,0,0,75,76,5,41,0,0,76,10,1,0,0,0,77,78,5,62,0,0,78,12,
  	1,0,0,0,79,80,5,60,0,0,80,14,1,0,0,0,81,82,5,60,0,0,82,83,5,61,0,0,83,
  	16,1,0,0,0,84,85,5,62,0,0,85,86,5,61,0,0,86,18,1,0,0,0,87,88,5,61,0,0,
  	88,89,5,61,0,0,89,20,1,0,0,0,90,91,5,33,0,0,91,92,5,61,0,0,92,22,1,0,
  	0,0,93,94,5,38,0,0,94,95,5,38,0,0,95,24,1,0,0,0,96,97,5,124,0,0,97,98,
  	5,124,0,0,98,26,1,0,0,0,99,100,5,111,0,0,100,101,5,98,0,0,101,102,5,106,
  	0,0,102,103,5,101,0,0,103,104,5,99,0,0,104,105,5,116,0,0,105,28,1,0,0,
  	0,106,107,5,105,0,0,107,108,5,109,0,0,108,109,5,112,0,0,109,110,5,111,
  	0,0,110,111,5,114,0,0,111,112,5,116,0,0,112,30,1,0,0,0,113,114,5,47,0,
  	0,114,32,1,0,0,0,115,116,5,46,0,0,116,34,1,0,0,0,117,118,5,44,0,0,118,
  	36,1,0,0,0,119,120,5,59,0,0,120,38,1,0,0,0,121,122,5,91,0,0,122,40,1,
  	0,0,0,123,124,5,93,0,0,124,42,1,0,0,0,125,126,5,105,0,0,126,127,5,110,
  	0,0,127,44,1,0,0,0,128,129,5,116,0,0,129,130,5,114,0,0,130,131,5,117,
  	0,0,131,138,5,101,0,0,132,133,5,102,0,0,133,134,5,97,0,0,134,135,5,108,
  	0,0,135,136,5,115,0,0,136,138,5,101,0,0,137,128,1,0,0,0,137,132,1,0,0,
  	0,138,46,1,0,0,0,139,140,5,33,0,0,140,48,1,0,0,0,141,142,5,110,0,0,142,
  	143,5,117,0,0,143,144,5,108,0,0,144,145,5,108,0,0,145,50,1,0,0,0,146,
  	147,5,39,0,0,147,52,1,0,0,0,148,149,5,34,0,0,149,54,1,0,0,0,150,151,5,
  	36,0,0,151,56,1,0,0,0,152,153,5,61,0,0,153,58,1,0,0,0,154,155,3,51,25,
  	0,155,156,3,63,31,0,156,157,3,51,25,0,157,163,1,0,0,0,158,159,3,53,26,
  	0,159,160,3,63,31,0,160,161,3,53,26,0,161,163,1,0,0,0,162,154,1,0,0,0,
  	162,158,1,0,0,0,163,60,1,0,0,0,164,166,7,0,0,0,165,164,1,0,0,0,166,167,
  	1,0,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,62,1,0,0,0,169,171,7,1,0,
  	0,170,169,1,0,0,0,171,172,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,
  	64,1,0,0,0,174,176,7,2,0,0,175,174,1,0,0,0,176,177,1,0,0,0,177,175,1,
  	0,0,0,177,178,1,0,0,0,178,179,1,0,0,0,179,180,6,32,0,0,180,66,1,0,0,0,
  	6,0,137,162,167,172,177,1,6,0,0
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
