
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from caffeinated.g4 by ANTLR 4.7.2


#include "caffeinatedListener.h"
#include "caffeinatedVisitor.h"

#include "caffeinatedParser.h"


using namespace antlrcpp;
using namespace antlr4;

caffeinatedParser::caffeinatedParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

caffeinatedParser::~caffeinatedParser() {
  delete _interpreter;
}

std::string caffeinatedParser::getGrammarFileName() const {
  return "caffeinated.g4";
}

const std::vector<std::string>& caffeinatedParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& caffeinatedParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

caffeinatedParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::HeaderContext* caffeinatedParser::ProgramContext::header() {
  return getRuleContext<caffeinatedParser::HeaderContext>(0);
}

caffeinatedParser::MainBlockContext* caffeinatedParser::ProgramContext::mainBlock() {
  return getRuleContext<caffeinatedParser::MainBlockContext>(0);
}


size_t caffeinatedParser::ProgramContext::getRuleIndex() const {
  return caffeinatedParser::RuleProgram;
}

void caffeinatedParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void caffeinatedParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any caffeinatedParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::ProgramContext* caffeinatedParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, caffeinatedParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    header();
    setState(45);
    mainBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

caffeinatedParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::HeaderContext::PROGRAM() {
  return getToken(caffeinatedParser::PROGRAM, 0);
}

tree::TerminalNode* caffeinatedParser::HeaderContext::ID() {
  return getToken(caffeinatedParser::ID, 0);
}


size_t caffeinatedParser::HeaderContext::getRuleIndex() const {
  return caffeinatedParser::RuleHeader;
}

void caffeinatedParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void caffeinatedParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}


antlrcpp::Any caffeinatedParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::HeaderContext* caffeinatedParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, caffeinatedParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(caffeinatedParser::PROGRAM);
    setState(48);
    match(caffeinatedParser::ID);
    setState(49);
    match(caffeinatedParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

caffeinatedParser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::DeclarationsContext* caffeinatedParser::MainBlockContext::declarations() {
  return getRuleContext<caffeinatedParser::DeclarationsContext>(0);
}

caffeinatedParser::CompoundStmtContext* caffeinatedParser::MainBlockContext::compoundStmt() {
  return getRuleContext<caffeinatedParser::CompoundStmtContext>(0);
}


size_t caffeinatedParser::MainBlockContext::getRuleIndex() const {
  return caffeinatedParser::RuleMainBlock;
}

void caffeinatedParser::MainBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMainBlock(this);
}

void caffeinatedParser::MainBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMainBlock(this);
}


antlrcpp::Any caffeinatedParser::MainBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitMainBlock(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::MainBlockContext* caffeinatedParser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, caffeinatedParser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    declarations();
    setState(52);
    compoundStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

caffeinatedParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::DeclarationsContext::VAR() {
  return getToken(caffeinatedParser::VAR, 0);
}

caffeinatedParser::DeclListContext* caffeinatedParser::DeclarationsContext::declList() {
  return getRuleContext<caffeinatedParser::DeclListContext>(0);
}


size_t caffeinatedParser::DeclarationsContext::getRuleIndex() const {
  return caffeinatedParser::RuleDeclarations;
}

void caffeinatedParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void caffeinatedParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}


antlrcpp::Any caffeinatedParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::DeclarationsContext* caffeinatedParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 6, caffeinatedParser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(caffeinatedParser::VAR);
    setState(55);
    match(caffeinatedParser::T__1);
    setState(56);
    declList();
    setState(57);
    match(caffeinatedParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

caffeinatedParser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<caffeinatedParser::DeclContext *> caffeinatedParser::DeclListContext::decl() {
  return getRuleContexts<caffeinatedParser::DeclContext>();
}

caffeinatedParser::DeclContext* caffeinatedParser::DeclListContext::decl(size_t i) {
  return getRuleContext<caffeinatedParser::DeclContext>(i);
}


size_t caffeinatedParser::DeclListContext::getRuleIndex() const {
  return caffeinatedParser::RuleDeclList;
}

void caffeinatedParser::DeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclList(this);
}

void caffeinatedParser::DeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclList(this);
}


antlrcpp::Any caffeinatedParser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::DeclListContext* caffeinatedParser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 8, caffeinatedParser::RuleDeclList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(59);
    decl();
    setState(64);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(60);
        match(caffeinatedParser::T__0);
        setState(61);
        decl(); 
      }
      setState(66);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

caffeinatedParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::VarListContext* caffeinatedParser::DeclContext::varList() {
  return getRuleContext<caffeinatedParser::VarListContext>(0);
}

caffeinatedParser::TypeIdContext* caffeinatedParser::DeclContext::typeId() {
  return getRuleContext<caffeinatedParser::TypeIdContext>(0);
}


size_t caffeinatedParser::DeclContext::getRuleIndex() const {
  return caffeinatedParser::RuleDecl;
}

void caffeinatedParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void caffeinatedParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


antlrcpp::Any caffeinatedParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::DeclContext* caffeinatedParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 10, caffeinatedParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    varList();
    setState(68);
    match(caffeinatedParser::T__1);
    setState(69);
    typeId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarListContext ------------------------------------------------------------------

caffeinatedParser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<caffeinatedParser::VarIdContext *> caffeinatedParser::VarListContext::varId() {
  return getRuleContexts<caffeinatedParser::VarIdContext>();
}

caffeinatedParser::VarIdContext* caffeinatedParser::VarListContext::varId(size_t i) {
  return getRuleContext<caffeinatedParser::VarIdContext>(i);
}


size_t caffeinatedParser::VarListContext::getRuleIndex() const {
  return caffeinatedParser::RuleVarList;
}

void caffeinatedParser::VarListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarList(this);
}

void caffeinatedParser::VarListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarList(this);
}


antlrcpp::Any caffeinatedParser::VarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitVarList(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::VarListContext* caffeinatedParser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 12, caffeinatedParser::RuleVarList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    varId();
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == caffeinatedParser::T__2) {
      setState(72);
      match(caffeinatedParser::T__2);
      setState(73);
      varId();
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarIdContext ------------------------------------------------------------------

caffeinatedParser::VarIdContext::VarIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::VarIdContext::ID() {
  return getToken(caffeinatedParser::ID, 0);
}


size_t caffeinatedParser::VarIdContext::getRuleIndex() const {
  return caffeinatedParser::RuleVarId;
}

void caffeinatedParser::VarIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarId(this);
}

void caffeinatedParser::VarIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarId(this);
}


antlrcpp::Any caffeinatedParser::VarIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitVarId(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::VarIdContext* caffeinatedParser::varId() {
  VarIdContext *_localctx = _tracker.createInstance<VarIdContext>(_ctx, getState());
  enterRule(_localctx, 14, caffeinatedParser::RuleVarId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(caffeinatedParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdContext ------------------------------------------------------------------

caffeinatedParser::TypeIdContext::TypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::TypeIdContext::Type_ID() {
  return getToken(caffeinatedParser::Type_ID, 0);
}


size_t caffeinatedParser::TypeIdContext::getRuleIndex() const {
  return caffeinatedParser::RuleTypeId;
}

void caffeinatedParser::TypeIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeId(this);
}

void caffeinatedParser::TypeIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeId(this);
}


antlrcpp::Any caffeinatedParser::TypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitTypeId(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::TypeIdContext* caffeinatedParser::typeId() {
  TypeIdContext *_localctx = _tracker.createInstance<TypeIdContext>(_ctx, getState());
  enterRule(_localctx, 16, caffeinatedParser::RuleTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(caffeinatedParser::Type_ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

caffeinatedParser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::CompoundStmtContext::ORDER() {
  return getToken(caffeinatedParser::ORDER, 0);
}

caffeinatedParser::StmtListContext* caffeinatedParser::CompoundStmtContext::stmtList() {
  return getRuleContext<caffeinatedParser::StmtListContext>(0);
}

tree::TerminalNode* caffeinatedParser::CompoundStmtContext::PICKUP() {
  return getToken(caffeinatedParser::PICKUP, 0);
}


size_t caffeinatedParser::CompoundStmtContext::getRuleIndex() const {
  return caffeinatedParser::RuleCompoundStmt;
}

void caffeinatedParser::CompoundStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStmt(this);
}

void caffeinatedParser::CompoundStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStmt(this);
}


antlrcpp::Any caffeinatedParser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::CompoundStmtContext* caffeinatedParser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, caffeinatedParser::RuleCompoundStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(caffeinatedParser::ORDER);
    setState(84);
    stmtList();
    setState(85);
    match(caffeinatedParser::PICKUP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

caffeinatedParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::CompoundStmtContext* caffeinatedParser::StmtContext::compoundStmt() {
  return getRuleContext<caffeinatedParser::CompoundStmtContext>(0);
}

caffeinatedParser::AssignmentStmtContext* caffeinatedParser::StmtContext::assignmentStmt() {
  return getRuleContext<caffeinatedParser::AssignmentStmtContext>(0);
}

caffeinatedParser::If_statementContext* caffeinatedParser::StmtContext::if_statement() {
  return getRuleContext<caffeinatedParser::If_statementContext>(0);
}

caffeinatedParser::While_loopContext* caffeinatedParser::StmtContext::while_loop() {
  return getRuleContext<caffeinatedParser::While_loopContext>(0);
}


size_t caffeinatedParser::StmtContext::getRuleIndex() const {
  return caffeinatedParser::RuleStmt;
}

void caffeinatedParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void caffeinatedParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any caffeinatedParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::StmtContext* caffeinatedParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 20, caffeinatedParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case caffeinatedParser::ORDER: {
        enterOuterAlt(_localctx, 1);
        setState(87);
        compoundStmt();
        break;
      }

      case caffeinatedParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(88);
        assignmentStmt();
        break;
      }

      case caffeinatedParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(89);
        if_statement();
        break;
      }

      case caffeinatedParser::WHILE: {
        enterOuterAlt(_localctx, 4);
        setState(90);
        while_loop();
        break;
      }

      case caffeinatedParser::T__0:
      case caffeinatedParser::PICKUP:
      case caffeinatedParser::COMPLETE: {
        enterOuterAlt(_localctx, 5);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtListContext ------------------------------------------------------------------

caffeinatedParser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<caffeinatedParser::StmtContext *> caffeinatedParser::StmtListContext::stmt() {
  return getRuleContexts<caffeinatedParser::StmtContext>();
}

caffeinatedParser::StmtContext* caffeinatedParser::StmtListContext::stmt(size_t i) {
  return getRuleContext<caffeinatedParser::StmtContext>(i);
}


size_t caffeinatedParser::StmtListContext::getRuleIndex() const {
  return caffeinatedParser::RuleStmtList;
}

void caffeinatedParser::StmtListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmtList(this);
}

void caffeinatedParser::StmtListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmtList(this);
}


antlrcpp::Any caffeinatedParser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::StmtListContext* caffeinatedParser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 22, caffeinatedParser::RuleStmtList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    stmt();
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == caffeinatedParser::T__0) {
      setState(95);
      match(caffeinatedParser::T__0);
      setState(96);
      stmt();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStmtContext ------------------------------------------------------------------

caffeinatedParser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::VariableContext* caffeinatedParser::AssignmentStmtContext::variable() {
  return getRuleContext<caffeinatedParser::VariableContext>(0);
}

caffeinatedParser::ExprContext* caffeinatedParser::AssignmentStmtContext::expr() {
  return getRuleContext<caffeinatedParser::ExprContext>(0);
}


size_t caffeinatedParser::AssignmentStmtContext::getRuleIndex() const {
  return caffeinatedParser::RuleAssignmentStmt;
}

void caffeinatedParser::AssignmentStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStmt(this);
}

void caffeinatedParser::AssignmentStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStmt(this);
}


antlrcpp::Any caffeinatedParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::AssignmentStmtContext* caffeinatedParser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, caffeinatedParser::RuleAssignmentStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    variable();
    setState(103);
    match(caffeinatedParser::T__3);
    setState(104);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

caffeinatedParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::VariableContext::ID() {
  return getToken(caffeinatedParser::ID, 0);
}


size_t caffeinatedParser::VariableContext::getRuleIndex() const {
  return caffeinatedParser::RuleVariable;
}

void caffeinatedParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void caffeinatedParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any caffeinatedParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::VariableContext* caffeinatedParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 26, caffeinatedParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(caffeinatedParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

caffeinatedParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t caffeinatedParser::ExprContext::getRuleIndex() const {
  return caffeinatedParser::RuleExpr;
}

void caffeinatedParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

caffeinatedParser::VariableContext* caffeinatedParser::VariableExprContext::variable() {
  return getRuleContext<caffeinatedParser::VariableContext>(0);
}

caffeinatedParser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::VariableExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableExpr(this);
}
void caffeinatedParser::VariableExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableExpr(this);
}

antlrcpp::Any caffeinatedParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<caffeinatedParser::ExprContext *> caffeinatedParser::AddSubExprContext::expr() {
  return getRuleContexts<caffeinatedParser::ExprContext>();
}

caffeinatedParser::ExprContext* caffeinatedParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<caffeinatedParser::ExprContext>(i);
}

caffeinatedParser::AddSubOpContext* caffeinatedParser::AddSubExprContext::addSubOp() {
  return getRuleContext<caffeinatedParser::AddSubOpContext>(0);
}

caffeinatedParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void caffeinatedParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}

antlrcpp::Any caffeinatedParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelOpExprContext ------------------------------------------------------------------

std::vector<caffeinatedParser::ExprContext *> caffeinatedParser::RelOpExprContext::expr() {
  return getRuleContexts<caffeinatedParser::ExprContext>();
}

caffeinatedParser::ExprContext* caffeinatedParser::RelOpExprContext::expr(size_t i) {
  return getRuleContext<caffeinatedParser::ExprContext>(i);
}

caffeinatedParser::Rel_opContext* caffeinatedParser::RelOpExprContext::rel_op() {
  return getRuleContext<caffeinatedParser::Rel_opContext>(0);
}

caffeinatedParser::RelOpExprContext::RelOpExprContext(ExprContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::RelOpExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelOpExpr(this);
}
void caffeinatedParser::RelOpExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelOpExpr(this);
}

antlrcpp::Any caffeinatedParser::RelOpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitRelOpExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExprContext ------------------------------------------------------------------

caffeinatedParser::NumberContext* caffeinatedParser::NumberExprContext::number() {
  return getRuleContext<caffeinatedParser::NumberContext>(0);
}

caffeinatedParser::NumberExprContext::NumberExprContext(ExprContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::NumberExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberExpr(this);
}
void caffeinatedParser::NumberExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberExpr(this);
}

antlrcpp::Any caffeinatedParser::NumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolExprContext ------------------------------------------------------------------

caffeinatedParser::True_falseContext* caffeinatedParser::BoolExprContext::true_false() {
  return getRuleContext<caffeinatedParser::True_falseContext>(0);
}

caffeinatedParser::BoolExprContext::BoolExprContext(ExprContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::BoolExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpr(this);
}
void caffeinatedParser::BoolExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpr(this);
}

antlrcpp::Any caffeinatedParser::BoolExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitBoolExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<caffeinatedParser::ExprContext *> caffeinatedParser::MulDivExprContext::expr() {
  return getRuleContexts<caffeinatedParser::ExprContext>();
}

caffeinatedParser::ExprContext* caffeinatedParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<caffeinatedParser::ExprContext>(i);
}

caffeinatedParser::MulDivOpContext* caffeinatedParser::MulDivExprContext::mulDivOp() {
  return getRuleContext<caffeinatedParser::MulDivOpContext>(0);
}

caffeinatedParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void caffeinatedParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

antlrcpp::Any caffeinatedParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::ExprContext* caffeinatedParser::expr() {
   return expr(0);
}

caffeinatedParser::ExprContext* caffeinatedParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  caffeinatedParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  caffeinatedParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, caffeinatedParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case caffeinatedParser::INTEGER: {
        _localctx = _tracker.createInstance<NumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(109);
        number();
        break;
      }

      case caffeinatedParser::BOOLEAN: {
        _localctx = _tracker.createInstance<BoolExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(110);
        true_false();
        break;
      }

      case caffeinatedParser::ID: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(111);
        variable();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(128);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(126);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(114);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(115);
          mulDivOp();
          setState(116);
          expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(118);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(119);
          addSubOp();
          setState(120);
          expr(3);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(122);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(123);
          rel_op();
          setState(124);
          expr(2);
          break;
        }

        } 
      }
      setState(130);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

caffeinatedParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t caffeinatedParser::NumberContext::getRuleIndex() const {
  return caffeinatedParser::RuleNumber;
}

void caffeinatedParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- IntegerConstContext ------------------------------------------------------------------

tree::TerminalNode* caffeinatedParser::IntegerConstContext::INTEGER() {
  return getToken(caffeinatedParser::INTEGER, 0);
}

caffeinatedParser::IntegerConstContext::IntegerConstContext(NumberContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::IntegerConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerConst(this);
}
void caffeinatedParser::IntegerConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerConst(this);
}

antlrcpp::Any caffeinatedParser::IntegerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitIntegerConst(this);
  else
    return visitor->visitChildren(this);
}
caffeinatedParser::NumberContext* caffeinatedParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 30, caffeinatedParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<caffeinatedParser::IntegerConstContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(caffeinatedParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- True_falseContext ------------------------------------------------------------------

caffeinatedParser::True_falseContext::True_falseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t caffeinatedParser::True_falseContext::getRuleIndex() const {
  return caffeinatedParser::RuleTrue_false;
}

void caffeinatedParser::True_falseContext::copyFrom(True_falseContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- BoolConstContext ------------------------------------------------------------------

tree::TerminalNode* caffeinatedParser::BoolConstContext::BOOLEAN() {
  return getToken(caffeinatedParser::BOOLEAN, 0);
}

caffeinatedParser::BoolConstContext::BoolConstContext(True_falseContext *ctx) { copyFrom(ctx); }

void caffeinatedParser::BoolConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolConst(this);
}
void caffeinatedParser::BoolConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolConst(this);
}

antlrcpp::Any caffeinatedParser::BoolConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitBoolConst(this);
  else
    return visitor->visitChildren(this);
}
caffeinatedParser::True_falseContext* caffeinatedParser::true_false() {
  True_falseContext *_localctx = _tracker.createInstance<True_falseContext>(_ctx, getState());
  enterRule(_localctx, 32, caffeinatedParser::RuleTrue_false);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<True_falseContext *>(_tracker.createInstance<caffeinatedParser::BoolConstContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(caffeinatedParser::BOOLEAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulDivOpContext ------------------------------------------------------------------

caffeinatedParser::MulDivOpContext::MulDivOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::MulDivOpContext::Mult() {
  return getToken(caffeinatedParser::Mult, 0);
}

tree::TerminalNode* caffeinatedParser::MulDivOpContext::Div() {
  return getToken(caffeinatedParser::Div, 0);
}


size_t caffeinatedParser::MulDivOpContext::getRuleIndex() const {
  return caffeinatedParser::RuleMulDivOp;
}

void caffeinatedParser::MulDivOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivOp(this);
}

void caffeinatedParser::MulDivOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivOp(this);
}


antlrcpp::Any caffeinatedParser::MulDivOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitMulDivOp(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::MulDivOpContext* caffeinatedParser::mulDivOp() {
  MulDivOpContext *_localctx = _tracker.createInstance<MulDivOpContext>(_ctx, getState());
  enterRule(_localctx, 34, caffeinatedParser::RuleMulDivOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    _la = _input->LA(1);
    if (!(_la == caffeinatedParser::Mult

    || _la == caffeinatedParser::Div)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddSubOpContext ------------------------------------------------------------------

caffeinatedParser::AddSubOpContext::AddSubOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::AddSubOpContext::Add() {
  return getToken(caffeinatedParser::Add, 0);
}

tree::TerminalNode* caffeinatedParser::AddSubOpContext::Sub() {
  return getToken(caffeinatedParser::Sub, 0);
}


size_t caffeinatedParser::AddSubOpContext::getRuleIndex() const {
  return caffeinatedParser::RuleAddSubOp;
}

void caffeinatedParser::AddSubOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubOp(this);
}

void caffeinatedParser::AddSubOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubOp(this);
}


antlrcpp::Any caffeinatedParser::AddSubOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitAddSubOp(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::AddSubOpContext* caffeinatedParser::addSubOp() {
  AddSubOpContext *_localctx = _tracker.createInstance<AddSubOpContext>(_ctx, getState());
  enterRule(_localctx, 36, caffeinatedParser::RuleAddSubOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    _la = _input->LA(1);
    if (!(_la == caffeinatedParser::Add

    || _la == caffeinatedParser::Sub)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

caffeinatedParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Less_than() {
  return getToken(caffeinatedParser::Less_than, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Greater_than() {
  return getToken(caffeinatedParser::Greater_than, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Equals() {
  return getToken(caffeinatedParser::Equals, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Gt_EQ() {
  return getToken(caffeinatedParser::Gt_EQ, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Lt_EQ() {
  return getToken(caffeinatedParser::Lt_EQ, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Not_EQ() {
  return getToken(caffeinatedParser::Not_EQ, 0);
}


size_t caffeinatedParser::Rel_opContext::getRuleIndex() const {
  return caffeinatedParser::RuleRel_op;
}

void caffeinatedParser::Rel_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_op(this);
}

void caffeinatedParser::Rel_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_op(this);
}


antlrcpp::Any caffeinatedParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::Rel_opContext* caffeinatedParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 38, caffeinatedParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << caffeinatedParser::Less_than)
      | (1ULL << caffeinatedParser::Greater_than)
      | (1ULL << caffeinatedParser::Equals)
      | (1ULL << caffeinatedParser::Gt_EQ)
      | (1ULL << caffeinatedParser::Lt_EQ)
      | (1ULL << caffeinatedParser::Not_EQ))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

caffeinatedParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::If_statementContext::IF() {
  return getToken(caffeinatedParser::IF, 0);
}

caffeinatedParser::ExprContext* caffeinatedParser::If_statementContext::expr() {
  return getRuleContext<caffeinatedParser::ExprContext>(0);
}

tree::TerminalNode* caffeinatedParser::If_statementContext::START() {
  return getToken(caffeinatedParser::START, 0);
}

caffeinatedParser::StmtListContext* caffeinatedParser::If_statementContext::stmtList() {
  return getRuleContext<caffeinatedParser::StmtListContext>(0);
}

tree::TerminalNode* caffeinatedParser::If_statementContext::COMPLETE() {
  return getToken(caffeinatedParser::COMPLETE, 0);
}


size_t caffeinatedParser::If_statementContext::getRuleIndex() const {
  return caffeinatedParser::RuleIf_statement;
}

void caffeinatedParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void caffeinatedParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


antlrcpp::Any caffeinatedParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::If_statementContext* caffeinatedParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 40, caffeinatedParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(caffeinatedParser::IF);
    setState(142);
    match(caffeinatedParser::T__4);
    setState(143);
    expr(0);
    setState(144);
    match(caffeinatedParser::T__5);
    setState(145);
    match(caffeinatedParser::START);
    setState(146);
    stmtList();
    setState(147);
    match(caffeinatedParser::COMPLETE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loopContext ------------------------------------------------------------------

caffeinatedParser::While_loopContext::While_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::While_loopContext::WHILE() {
  return getToken(caffeinatedParser::WHILE, 0);
}

caffeinatedParser::ExprContext* caffeinatedParser::While_loopContext::expr() {
  return getRuleContext<caffeinatedParser::ExprContext>(0);
}

tree::TerminalNode* caffeinatedParser::While_loopContext::START() {
  return getToken(caffeinatedParser::START, 0);
}

caffeinatedParser::StmtListContext* caffeinatedParser::While_loopContext::stmtList() {
  return getRuleContext<caffeinatedParser::StmtListContext>(0);
}

tree::TerminalNode* caffeinatedParser::While_loopContext::COMPLETE() {
  return getToken(caffeinatedParser::COMPLETE, 0);
}


size_t caffeinatedParser::While_loopContext::getRuleIndex() const {
  return caffeinatedParser::RuleWhile_loop;
}

void caffeinatedParser::While_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_loop(this);
}

void caffeinatedParser::While_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_loop(this);
}


antlrcpp::Any caffeinatedParser::While_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<caffeinatedVisitor*>(visitor))
    return parserVisitor->visitWhile_loop(this);
  else
    return visitor->visitChildren(this);
}

caffeinatedParser::While_loopContext* caffeinatedParser::while_loop() {
  While_loopContext *_localctx = _tracker.createInstance<While_loopContext>(_ctx, getState());
  enterRule(_localctx, 42, caffeinatedParser::RuleWhile_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(caffeinatedParser::WHILE);
    setState(150);
    match(caffeinatedParser::T__4);
    setState(151);
    expr(0);
    setState(152);
    match(caffeinatedParser::T__5);
    setState(153);
    match(caffeinatedParser::START);
    setState(154);
    stmtList();
    setState(155);
    match(caffeinatedParser::COMPLETE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool caffeinatedParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool caffeinatedParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> caffeinatedParser::_decisionToDFA;
atn::PredictionContextCache caffeinatedParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN caffeinatedParser::_atn;
std::vector<uint16_t> caffeinatedParser::_serializedATN;

std::vector<std::string> caffeinatedParser::_ruleNames = {
  "program", "header", "mainBlock", "declarations", "declList", "decl", 
  "varList", "varId", "typeId", "compoundStmt", "stmt", "stmtList", "assignmentStmt", 
  "variable", "expr", "number", "true_false", "mulDivOp", "addSubOp", "rel_op", 
  "if_statement", "while_loop"
};

std::vector<std::string> caffeinatedParser::_literalNames = {
  "", "';'", "':'", "','", "'='", "'('", "')'", "'customer'", "'MENU'", 
  "'toppings'", "'ORDER'", "'PICKUP'", "'milk'", "'brew'", "'START'", "'COMPLETE'", 
  "", "'boba'", "'ice'", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'<'", 
  "'>'", "'=='", "'>='", "'<='", "'!='"
};

std::vector<std::string> caffeinatedParser::_symbolicNames = {
  "", "", "", "", "", "", "", "PROGRAM", "FUNCTION", "VAR", "ORDER", "PICKUP", 
  "IF", "WHILE", "START", "COMPLETE", "Type_ID", "INTEGER_TYPE", "BOOLEAN_TYPE", 
  "ID", "INTEGER", "BOOLEAN", "CHARACTER", "Add", "Sub", "Mult", "Div", 
  "Less_than", "Greater_than", "Equals", "Gt_EQ", "Lt_EQ", "Not_EQ", "NEWLINE", 
  "WS", "BlockComment", "LineComment"
};

dfa::Vocabulary caffeinatedParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> caffeinatedParser::_tokenNames;

caffeinatedParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x26, 0xa0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x41, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x44, 
    0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x4d, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x50, 0xb, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x5f, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x64, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x67, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x73, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0x81, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x84, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x2, 0x3, 0x1e, 0x18, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2, 0x5, 0x3, 0x2, 0x1b, 0x1c, 0x3, 0x2, 
    0x19, 0x1a, 0x3, 0x2, 0x1d, 0x22, 0x2, 0x95, 0x2, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x31, 0x3, 0x2, 0x2, 0x2, 0x6, 0x35, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x49, 0x3, 0x2, 0x2, 0x2, 0x10, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x53, 0x3, 0x2, 0x2, 0x2, 0x14, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x18, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x72, 0x3, 0x2, 0x2, 0x2, 0x20, 0x85, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x24, 0x89, 0x3, 0x2, 0x2, 0x2, 0x26, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0x4, 
    0x3, 0x2, 0x2f, 0x30, 0x5, 0x6, 0x4, 0x2, 0x30, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x31, 0x32, 0x7, 0x9, 0x2, 0x2, 0x32, 0x33, 0x7, 0x15, 0x2, 0x2, 
    0x33, 0x34, 0x7, 0x3, 0x2, 0x2, 0x34, 0x5, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x36, 0x5, 0x8, 0x5, 0x2, 0x36, 0x37, 0x5, 0x14, 0xb, 0x2, 0x37, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0xb, 0x2, 0x2, 0x39, 0x3a, 0x7, 
    0x4, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0xa, 0x6, 0x2, 0x3b, 0x3c, 0x7, 0x3, 
    0x2, 0x2, 0x3c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x42, 0x5, 0xc, 0x7, 
    0x2, 0x3e, 0x3f, 0x7, 0x3, 0x2, 0x2, 0x3f, 0x41, 0x5, 0xc, 0x7, 0x2, 
    0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x5, 
    0xe, 0x8, 0x2, 0x46, 0x47, 0x7, 0x4, 0x2, 0x2, 0x47, 0x48, 0x5, 0x12, 
    0xa, 0x2, 0x48, 0xd, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4e, 0x5, 0x10, 0x9, 
    0x2, 0x4a, 0x4b, 0x7, 0x5, 0x2, 0x2, 0x4b, 0x4d, 0x5, 0x10, 0x9, 0x2, 
    0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 
    0x15, 0x2, 0x2, 0x52, 0x11, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x12, 
    0x2, 0x2, 0x54, 0x13, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0xc, 0x2, 
    0x2, 0x56, 0x57, 0x5, 0x18, 0xd, 0x2, 0x57, 0x58, 0x7, 0xd, 0x2, 0x2, 
    0x58, 0x15, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5f, 0x5, 0x14, 0xb, 0x2, 0x5a, 
    0x5f, 0x5, 0x1a, 0xe, 0x2, 0x5b, 0x5f, 0x5, 0x2a, 0x16, 0x2, 0x5c, 0x5f, 
    0x5, 0x2c, 0x17, 0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x60, 0x65, 0x5, 0x16, 0xc, 0x2, 
    0x61, 0x62, 0x7, 0x3, 0x2, 0x2, 0x62, 0x64, 0x5, 0x16, 0xc, 0x2, 0x63, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x5, 0x1c, 
    0xf, 0x2, 0x69, 0x6a, 0x7, 0x6, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x1e, 0x10, 
    0x2, 0x6b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x15, 0x2, 0x2, 
    0x6d, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x8, 0x10, 0x1, 0x2, 0x6f, 
    0x73, 0x5, 0x20, 0x11, 0x2, 0x70, 0x73, 0x5, 0x22, 0x12, 0x2, 0x71, 
    0x73, 0x5, 0x1c, 0xf, 0x2, 0x72, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x75, 0xc, 0x5, 0x2, 0x2, 0x75, 0x76, 0x5, 0x24, 
    0x13, 0x2, 0x76, 0x77, 0x5, 0x1e, 0x10, 0x6, 0x77, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x79, 0xc, 0x4, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x26, 0x14, 0x2, 
    0x7a, 0x7b, 0x5, 0x1e, 0x10, 0x5, 0x7b, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7d, 0xc, 0x3, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x28, 0x15, 0x2, 0x7e, 0x7f, 
    0x5, 0x1e, 0x10, 0x4, 0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x78, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x84, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x16, 0x2, 0x2, 0x86, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x17, 0x2, 0x2, 0x88, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x9, 0x2, 0x2, 0x2, 0x8a, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x8c, 0x9, 0x3, 0x2, 0x2, 0x8c, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x9, 0x4, 0x2, 0x2, 0x8e, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x90, 0x7, 0xe, 0x2, 0x2, 0x90, 0x91, 0x7, 0x7, 0x2, 0x2, 
    0x91, 0x92, 0x5, 0x1e, 0x10, 0x2, 0x92, 0x93, 0x7, 0x8, 0x2, 0x2, 0x93, 
    0x94, 0x7, 0x10, 0x2, 0x2, 0x94, 0x95, 0x5, 0x18, 0xd, 0x2, 0x95, 0x96, 
    0x7, 0x11, 0x2, 0x2, 0x96, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 
    0xf, 0x2, 0x2, 0x98, 0x99, 0x7, 0x7, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x1e, 
    0x10, 0x2, 0x9a, 0x9b, 0x7, 0x8, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x10, 0x2, 
    0x2, 0x9c, 0x9d, 0x5, 0x18, 0xd, 0x2, 0x9d, 0x9e, 0x7, 0x11, 0x2, 0x2, 
    0x9e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x9, 0x42, 0x4e, 0x5e, 0x65, 0x72, 0x80, 
    0x82, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

caffeinatedParser::Initializer caffeinatedParser::_init;
