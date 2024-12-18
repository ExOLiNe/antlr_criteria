
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
      "IMPORT", "SLASH", "DOT", "COMMA", "SEMICOLON", "SQR_L", "SQR_R", 
      "PAR_L", "PAR_R", "GTE", "LTE", "GT", "LT", "EQUALS", "NOT_EQUALS", 
      "AND", "OR", "TRUE", "FALSE", "EXCL", "NULL_T", "BUCK", "ASSIGN", 
      "OBJECT", "MUL", "ADD", "SUB", "INT", "IDENTIFIER", "STR_LITERAL", 
      "S_Q", "D_Q", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,31,188,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,
  	1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,21,
  	1,21,1,22,1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,25,1,25,
  	1,26,1,26,1,27,4,27,151,8,27,11,27,12,27,152,1,28,4,28,156,8,28,11,28,
  	12,28,157,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,3,29,168,8,29,1,30,
  	1,30,1,31,1,31,1,32,1,32,1,32,5,32,177,8,32,10,32,12,32,180,9,32,1,33,
  	4,33,183,8,33,11,33,12,33,184,1,33,1,33,0,0,34,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,
  	30,61,0,63,0,65,0,67,31,1,0,4,1,0,48,57,4,0,48,57,65,90,95,95,97,122,
  	3,0,34,34,39,39,92,92,3,0,9,10,13,13,32,32,190,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,
  	0,0,0,59,1,0,0,0,0,67,1,0,0,0,1,69,1,0,0,0,3,76,1,0,0,0,5,78,1,0,0,0,
  	7,80,1,0,0,0,9,82,1,0,0,0,11,84,1,0,0,0,13,86,1,0,0,0,15,88,1,0,0,0,17,
  	90,1,0,0,0,19,92,1,0,0,0,21,95,1,0,0,0,23,98,1,0,0,0,25,100,1,0,0,0,27,
  	102,1,0,0,0,29,105,1,0,0,0,31,108,1,0,0,0,33,111,1,0,0,0,35,114,1,0,0,
  	0,37,119,1,0,0,0,39,125,1,0,0,0,41,127,1,0,0,0,43,132,1,0,0,0,45,134,
  	1,0,0,0,47,136,1,0,0,0,49,143,1,0,0,0,51,145,1,0,0,0,53,147,1,0,0,0,55,
  	150,1,0,0,0,57,155,1,0,0,0,59,167,1,0,0,0,61,169,1,0,0,0,63,171,1,0,0,
  	0,65,178,1,0,0,0,67,182,1,0,0,0,69,70,5,105,0,0,70,71,5,109,0,0,71,72,
  	5,112,0,0,72,73,5,111,0,0,73,74,5,114,0,0,74,75,5,116,0,0,75,2,1,0,0,
  	0,76,77,5,47,0,0,77,4,1,0,0,0,78,79,5,46,0,0,79,6,1,0,0,0,80,81,5,44,
  	0,0,81,8,1,0,0,0,82,83,5,59,0,0,83,10,1,0,0,0,84,85,5,91,0,0,85,12,1,
  	0,0,0,86,87,5,93,0,0,87,14,1,0,0,0,88,89,5,40,0,0,89,16,1,0,0,0,90,91,
  	5,41,0,0,91,18,1,0,0,0,92,93,5,62,0,0,93,94,5,61,0,0,94,20,1,0,0,0,95,
  	96,5,60,0,0,96,97,5,61,0,0,97,22,1,0,0,0,98,99,5,62,0,0,99,24,1,0,0,0,
  	100,101,5,60,0,0,101,26,1,0,0,0,102,103,5,61,0,0,103,104,5,61,0,0,104,
  	28,1,0,0,0,105,106,5,33,0,0,106,107,5,61,0,0,107,30,1,0,0,0,108,109,5,
  	38,0,0,109,110,5,38,0,0,110,32,1,0,0,0,111,112,5,124,0,0,112,113,5,124,
  	0,0,113,34,1,0,0,0,114,115,5,116,0,0,115,116,5,114,0,0,116,117,5,117,
  	0,0,117,118,5,101,0,0,118,36,1,0,0,0,119,120,5,102,0,0,120,121,5,97,0,
  	0,121,122,5,108,0,0,122,123,5,115,0,0,123,124,5,101,0,0,124,38,1,0,0,
  	0,125,126,5,33,0,0,126,40,1,0,0,0,127,128,5,110,0,0,128,129,5,117,0,0,
  	129,130,5,108,0,0,130,131,5,108,0,0,131,42,1,0,0,0,132,133,5,36,0,0,133,
  	44,1,0,0,0,134,135,5,61,0,0,135,46,1,0,0,0,136,137,5,111,0,0,137,138,
  	5,98,0,0,138,139,5,106,0,0,139,140,5,101,0,0,140,141,5,99,0,0,141,142,
  	5,116,0,0,142,48,1,0,0,0,143,144,5,42,0,0,144,50,1,0,0,0,145,146,5,43,
  	0,0,146,52,1,0,0,0,147,148,5,45,0,0,148,54,1,0,0,0,149,151,7,0,0,0,150,
  	149,1,0,0,0,151,152,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,56,1,
  	0,0,0,154,156,7,1,0,0,155,154,1,0,0,0,156,157,1,0,0,0,157,155,1,0,0,0,
  	157,158,1,0,0,0,158,58,1,0,0,0,159,160,3,61,30,0,160,161,3,65,32,0,161,
  	162,3,61,30,0,162,168,1,0,0,0,163,164,3,63,31,0,164,165,3,65,32,0,165,
  	166,3,63,31,0,166,168,1,0,0,0,167,159,1,0,0,0,167,163,1,0,0,0,168,60,
  	1,0,0,0,169,170,5,39,0,0,170,62,1,0,0,0,171,172,5,34,0,0,172,64,1,0,0,
  	0,173,174,5,92,0,0,174,177,9,0,0,0,175,177,8,2,0,0,176,173,1,0,0,0,176,
  	175,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,0,0,179,66,1,
  	0,0,0,180,178,1,0,0,0,181,183,7,3,0,0,182,181,1,0,0,0,183,184,1,0,0,0,
  	184,182,1,0,0,0,184,185,1,0,0,0,185,186,1,0,0,0,186,187,6,33,0,0,187,
  	68,1,0,0,0,7,0,152,157,167,176,178,184,1,6,0,0
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
