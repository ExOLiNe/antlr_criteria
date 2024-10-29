
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MyCriteriaLexer : public antlr4::Lexer {
public:
  enum {
    IMPORT = 1, SLASH = 2, DOT = 3, COMMA = 4, SEMICOLON = 5, SQR_L = 6, 
    SQR_R = 7, PAR_L = 8, PAR_R = 9, GTE = 10, LTE = 11, GT = 12, LT = 13, 
    EQUALS = 14, NOT_EQUALS = 15, AND = 16, OR = 17, TRUE = 18, FALSE = 19, 
    EXCL = 20, NULL_T = 21, BUCK = 22, ASSIGN = 23, OBJECT = 24, MUL = 25, 
    ADD = 26, SUB = 27, INT = 28, IDENTIFIER = 29, STR_LITERAL = 30, WS = 31
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

