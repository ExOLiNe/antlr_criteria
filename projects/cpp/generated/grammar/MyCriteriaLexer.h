
// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  MyCriteriaLexer : public antlr4::Lexer {
public:
  enum {
    IMPORT = 1, SLASH = 2, DOT = 3, COMMA = 4, SEMICOLON = 5, ARROW = 6, 
    SQR_L = 7, SQR_R = 8, PAR_L = 9, PAR_R = 10, CUR_L = 11, CUR_R = 12, 
    GTE = 13, LTE = 14, GT = 15, LT = 16, EQUALS = 17, NOT_EQUALS = 18, 
    AND = 19, OR = 20, TRUE = 21, FALSE = 22, EXCL = 23, NULL_T = 24, BUCK = 25, 
    ASSIGN = 26, OBJECT = 27, MUL = 28, ADD = 29, SUB = 30, INT = 31, IDENTIFIER = 32, 
    STR_LITERAL = 33, WS = 34
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

