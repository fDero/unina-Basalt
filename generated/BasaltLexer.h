
// Generated from BasaltLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  BasaltLexer : public antlr4::Lexer {
public:
  enum {
    STRUCT = 1, UNION = 2, SWITCH = 3, DEFAULT = 4, FUNC = 5, RETURN = 6, 
    BREAK = 7, CONTINUE = 8, IF = 9, ELSE = 10, WHILE = 11, UNTIL = 12, 
    VAR = 13, CONST = 14, NULLK = 15, INT_LITERAL = 16, FLOAT_LITERAL = 17, 
    BOOL_LITERAL = 18, CHAR_LITERAL = 19, STRING_LITERAL = 20, BASETYPE = 21, 
    ID = 22, TYPENAME = 23, FUNCNAME = 24, WS = 25, LPAREN = 26, RPAREN = 27, 
    LBRACE = 28, RBRACE = 29, LBRACK = 30, RBRACK = 31, SEMICOLON = 32, 
    COMMA = 33, COLON = 34, DOT = 35, EQ = 36, GT = 37, LT = 38, NOT = 39, 
    TILDE = 40, QUESTION = 41, EQUAL = 42, LE = 43, GE = 44, NOTEQUAL = 45, 
    AND = 46, OR = 47, INC = 48, DEC = 49, PLUS = 50, MINUS = 51, MUL = 52, 
    DIV = 53, BITAND = 54, BITOR = 55, POW = 56, MOD = 57, ADDEQ = 58, SUBEQ = 59, 
    MULEQ = 60, DIVEQ = 61, ANDEQ = 62, OREQ = 63, POWEQ = 64, MODEQ = 65, 
    XOR = 66, ARROW = 67, COLONSQ = 68, HASHTAG = 69, DOLLAR = 70, AT = 71, 
    ELLIPSIS = 72
  };

  explicit BasaltLexer(antlr4::CharStream *input);
  ~BasaltLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

