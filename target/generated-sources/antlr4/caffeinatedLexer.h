
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from caffeinated.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  caffeinatedLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, PROGRAM = 7, 
    FUNCTION = 8, VAR = 9, ORDER = 10, PICKUP = 11, IF = 12, WHILE = 13, 
    START = 14, COMPLETE = 15, Type_ID = 16, INTEGER_TYPE = 17, BOOLEAN_TYPE = 18, 
    ID = 19, INTEGER = 20, BOOLEAN = 21, CHARACTER = 22, Add = 23, Sub = 24, 
    Mult = 25, Div = 26, Less_than = 27, Greater_than = 28, Equals = 29, 
    Gt_EQ = 30, Lt_EQ = 31, Not_EQ = 32, NEWLINE = 33, WS = 34, BlockComment = 35, 
    LineComment = 36
  };

  caffeinatedLexer(antlr4::CharStream *input);
  ~caffeinatedLexer();

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

