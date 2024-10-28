
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
      "T__9", "T__10", "T__11", "T__12", "IMPORT", "SLASH", "DOT", "COMMA", 
      "SEMICOLON", "SQR_L", "SQR_R", "IN", "BOOL", "EXCL", "NULL_T", "BUCK", 
      "EQUALS", "OBJECT", "INT", "IDENTIFIER", "STR_LITERAL", "S_Q", "D_Q", 
      "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,31,191,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,
  	1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,
  	19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,
  	21,133,8,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,27,4,27,154,8,27,11,27,12,27,155,1,
  	28,4,28,159,8,28,11,28,12,28,160,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,
  	29,3,29,171,8,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,5,32,180,8,32,10,
  	32,12,32,183,9,32,1,33,4,33,186,8,33,11,33,12,33,187,1,33,1,33,0,0,34,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,
  	26,53,27,55,28,57,29,59,30,61,0,63,0,65,0,67,31,1,0,4,1,0,48,57,4,0,48,
  	57,65,90,95,95,97,122,3,0,34,34,39,39,92,92,3,0,9,10,13,13,32,32,194,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,67,1,0,0,0,1,69,1,0,0,0,3,71,
  	1,0,0,0,5,73,1,0,0,0,7,75,1,0,0,0,9,77,1,0,0,0,11,79,1,0,0,0,13,81,1,
  	0,0,0,15,83,1,0,0,0,17,86,1,0,0,0,19,89,1,0,0,0,21,92,1,0,0,0,23,95,1,
  	0,0,0,25,98,1,0,0,0,27,101,1,0,0,0,29,108,1,0,0,0,31,110,1,0,0,0,33,112,
  	1,0,0,0,35,114,1,0,0,0,37,116,1,0,0,0,39,118,1,0,0,0,41,120,1,0,0,0,43,
  	132,1,0,0,0,45,134,1,0,0,0,47,136,1,0,0,0,49,141,1,0,0,0,51,143,1,0,0,
  	0,53,145,1,0,0,0,55,153,1,0,0,0,57,158,1,0,0,0,59,170,1,0,0,0,61,172,
  	1,0,0,0,63,174,1,0,0,0,65,181,1,0,0,0,67,185,1,0,0,0,69,70,5,42,0,0,70,
  	2,1,0,0,0,71,72,5,43,0,0,72,4,1,0,0,0,73,74,5,45,0,0,74,6,1,0,0,0,75,
  	76,5,40,0,0,76,8,1,0,0,0,77,78,5,41,0,0,78,10,1,0,0,0,79,80,5,62,0,0,
  	80,12,1,0,0,0,81,82,5,60,0,0,82,14,1,0,0,0,83,84,5,60,0,0,84,85,5,61,
  	0,0,85,16,1,0,0,0,86,87,5,62,0,0,87,88,5,61,0,0,88,18,1,0,0,0,89,90,5,
  	61,0,0,90,91,5,61,0,0,91,20,1,0,0,0,92,93,5,33,0,0,93,94,5,61,0,0,94,
  	22,1,0,0,0,95,96,5,38,0,0,96,97,5,38,0,0,97,24,1,0,0,0,98,99,5,124,0,
  	0,99,100,5,124,0,0,100,26,1,0,0,0,101,102,5,105,0,0,102,103,5,109,0,0,
  	103,104,5,112,0,0,104,105,5,111,0,0,105,106,5,114,0,0,106,107,5,116,0,
  	0,107,28,1,0,0,0,108,109,5,47,0,0,109,30,1,0,0,0,110,111,5,46,0,0,111,
  	32,1,0,0,0,112,113,5,44,0,0,113,34,1,0,0,0,114,115,5,59,0,0,115,36,1,
  	0,0,0,116,117,5,91,0,0,117,38,1,0,0,0,118,119,5,93,0,0,119,40,1,0,0,0,
  	120,121,5,105,0,0,121,122,5,110,0,0,122,42,1,0,0,0,123,124,5,116,0,0,
  	124,125,5,114,0,0,125,126,5,117,0,0,126,133,5,101,0,0,127,128,5,102,0,
  	0,128,129,5,97,0,0,129,130,5,108,0,0,130,131,5,115,0,0,131,133,5,101,
  	0,0,132,123,1,0,0,0,132,127,1,0,0,0,133,44,1,0,0,0,134,135,5,33,0,0,135,
  	46,1,0,0,0,136,137,5,110,0,0,137,138,5,117,0,0,138,139,5,108,0,0,139,
  	140,5,108,0,0,140,48,1,0,0,0,141,142,5,36,0,0,142,50,1,0,0,0,143,144,
  	5,61,0,0,144,52,1,0,0,0,145,146,5,111,0,0,146,147,5,98,0,0,147,148,5,
  	106,0,0,148,149,5,101,0,0,149,150,5,99,0,0,150,151,5,116,0,0,151,54,1,
  	0,0,0,152,154,7,0,0,0,153,152,1,0,0,0,154,155,1,0,0,0,155,153,1,0,0,0,
  	155,156,1,0,0,0,156,56,1,0,0,0,157,159,7,1,0,0,158,157,1,0,0,0,159,160,
  	1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,58,1,0,0,0,162,163,3,61,30,
  	0,163,164,3,65,32,0,164,165,3,61,30,0,165,171,1,0,0,0,166,167,3,63,31,
  	0,167,168,3,65,32,0,168,169,3,63,31,0,169,171,1,0,0,0,170,162,1,0,0,0,
  	170,166,1,0,0,0,171,60,1,0,0,0,172,173,5,39,0,0,173,62,1,0,0,0,174,175,
  	5,34,0,0,175,64,1,0,0,0,176,177,5,92,0,0,177,180,9,0,0,0,178,180,8,2,
  	0,0,179,176,1,0,0,0,179,178,1,0,0,0,180,183,1,0,0,0,181,179,1,0,0,0,181,
  	182,1,0,0,0,182,66,1,0,0,0,183,181,1,0,0,0,184,186,7,3,0,0,185,184,1,
  	0,0,0,186,187,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,189,1,0,0,0,
  	189,190,6,33,0,0,190,68,1,0,0,0,8,0,132,155,160,170,179,181,187,1,6,0,
  	0
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
