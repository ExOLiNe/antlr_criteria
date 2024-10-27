
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MyCriteriaLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    IMPORT = 15, SLASH = 16, DOT = 17, COMMA = 18, SEMICOLON = 19, SQR_L = 20, 
    SQR_R = 21, IN = 22, BOOL = 23, EXCL = 24, NULL_T = 25, S_Q = 26, D_Q = 27, 
    BUCK = 28, EQUALS = 29, STR_LITERAL = 30, INT = 31, STR = 32, WS = 33
  };

  explicit MyCriteriaLexer(antlr4::CharStream *input);

  ~MyCriteriaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

