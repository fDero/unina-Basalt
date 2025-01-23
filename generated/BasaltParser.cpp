
// Generated from BasaltParser.g4 by ANTLR 4.9.2


#include "BasaltParserListener.h"
#include "BasaltParserVisitor.h"

#include "BasaltParser.h"


using namespace antlrcpp;
using namespace antlr4;

BasaltParser::BasaltParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BasaltParser::~BasaltParser() {
  delete _interpreter;
}

std::string BasaltParser::getGrammarFileName() const {
  return "BasaltParser.g4";
}

const std::vector<std::string>& BasaltParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BasaltParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

BasaltParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ProgramContext::EOF() {
  return getToken(BasaltParser::EOF, 0);
}

std::vector<BasaltParser::DefinitionContext *> BasaltParser::ProgramContext::definition() {
  return getRuleContexts<BasaltParser::DefinitionContext>();
}

BasaltParser::DefinitionContext* BasaltParser::ProgramContext::definition(size_t i) {
  return getRuleContext<BasaltParser::DefinitionContext>(i);
}


size_t BasaltParser::ProgramContext::getRuleIndex() const {
  return BasaltParser::RuleProgram;
}

void BasaltParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void BasaltParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any BasaltParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ProgramContext* BasaltParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BasaltParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BasaltParser::STRUCT)
      | (1ULL << BasaltParser::UNION)
      | (1ULL << BasaltParser::FUNC)
      | (1ULL << BasaltParser::VAR)
      | (1ULL << BasaltParser::CONST))) != 0)) {
      setState(212);
      definition();
      setState(217);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(218);
    match(BasaltParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

BasaltParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::StructDefinitionContext* BasaltParser::DefinitionContext::structDefinition() {
  return getRuleContext<BasaltParser::StructDefinitionContext>(0);
}

BasaltParser::UnionDefinitionContext* BasaltParser::DefinitionContext::unionDefinition() {
  return getRuleContext<BasaltParser::UnionDefinitionContext>(0);
}

BasaltParser::FunctionDefinitionContext* BasaltParser::DefinitionContext::functionDefinition() {
  return getRuleContext<BasaltParser::FunctionDefinitionContext>(0);
}

BasaltParser::VariableDeclarationContext* BasaltParser::DefinitionContext::variableDeclaration() {
  return getRuleContext<BasaltParser::VariableDeclarationContext>(0);
}

BasaltParser::ConstDeclarationContext* BasaltParser::DefinitionContext::constDeclaration() {
  return getRuleContext<BasaltParser::ConstDeclarationContext>(0);
}


size_t BasaltParser::DefinitionContext::getRuleIndex() const {
  return BasaltParser::RuleDefinition;
}

void BasaltParser::DefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinition(this);
}

void BasaltParser::DefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinition(this);
}


antlrcpp::Any BasaltParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DefinitionContext* BasaltParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, BasaltParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasaltParser::STRUCT: {
        enterOuterAlt(_localctx, 1);
        setState(220);
        structDefinition();
        break;
      }

      case BasaltParser::UNION: {
        enterOuterAlt(_localctx, 2);
        setState(221);
        unionDefinition();
        break;
      }

      case BasaltParser::FUNC: {
        enterOuterAlt(_localctx, 3);
        setState(222);
        functionDefinition();
        break;
      }

      case BasaltParser::VAR: {
        enterOuterAlt(_localctx, 4);
        setState(223);
        variableDeclaration();
        break;
      }

      case BasaltParser::CONST: {
        enterOuterAlt(_localctx, 5);
        setState(224);
        constDeclaration();
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

//----------------- ArrowContext ------------------------------------------------------------------

BasaltParser::ArrowContext::ArrowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ArrowContext::ARROW() {
  return getToken(BasaltParser::ARROW, 0);
}


size_t BasaltParser::ArrowContext::getRuleIndex() const {
  return BasaltParser::RuleArrow;
}

void BasaltParser::ArrowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrow(this);
}

void BasaltParser::ArrowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrow(this);
}


antlrcpp::Any BasaltParser::ArrowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitArrow(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ArrowContext* BasaltParser::arrow() {
  ArrowContext *_localctx = _tracker.createInstance<ArrowContext>(_ctx, getState());
  enterRule(_localctx, 4, BasaltParser::RuleArrow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(BasaltParser::ARROW);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerDereferenceContext ------------------------------------------------------------------

BasaltParser::PointerDereferenceContext::PointerDereferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::PointerDereferenceContext::HASHTAG() {
  return getToken(BasaltParser::HASHTAG, 0);
}


size_t BasaltParser::PointerDereferenceContext::getRuleIndex() const {
  return BasaltParser::RulePointerDereference;
}

void BasaltParser::PointerDereferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerDereference(this);
}

void BasaltParser::PointerDereferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerDereference(this);
}


antlrcpp::Any BasaltParser::PointerDereferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPointerDereference(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PointerDereferenceContext* BasaltParser::pointerDereference() {
  PointerDereferenceContext *_localctx = _tracker.createInstance<PointerDereferenceContext>(_ctx, getState());
  enterRule(_localctx, 6, BasaltParser::RulePointerDereference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(BasaltParser::HASHTAG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerSymbolContext ------------------------------------------------------------------

BasaltParser::PointerSymbolContext::PointerSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::PointerSymbolContext::HASHTAG() {
  return getToken(BasaltParser::HASHTAG, 0);
}


size_t BasaltParser::PointerSymbolContext::getRuleIndex() const {
  return BasaltParser::RulePointerSymbol;
}

void BasaltParser::PointerSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerSymbol(this);
}

void BasaltParser::PointerSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerSymbol(this);
}


antlrcpp::Any BasaltParser::PointerSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPointerSymbol(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PointerSymbolContext* BasaltParser::pointerSymbol() {
  PointerSymbolContext *_localctx = _tracker.createInstance<PointerSymbolContext>(_ctx, getState());
  enterRule(_localctx, 8, BasaltParser::RulePointerSymbol);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(BasaltParser::HASHTAG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SliceSymbolContext ------------------------------------------------------------------

BasaltParser::SliceSymbolContext::SliceSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::SliceSymbolContext::HASHTAG() {
  return getToken(BasaltParser::HASHTAG, 0);
}


size_t BasaltParser::SliceSymbolContext::getRuleIndex() const {
  return BasaltParser::RuleSliceSymbol;
}

void BasaltParser::SliceSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSliceSymbol(this);
}

void BasaltParser::SliceSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSliceSymbol(this);
}


antlrcpp::Any BasaltParser::SliceSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSliceSymbol(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SliceSymbolContext* BasaltParser::sliceSymbol() {
  SliceSymbolContext *_localctx = _tracker.createInstance<SliceSymbolContext>(_ctx, getState());
  enterRule(_localctx, 10, BasaltParser::RuleSliceSymbol);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(BasaltParser::HASHTAG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressOfContext ------------------------------------------------------------------

BasaltParser::AddressOfContext::AddressOfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::AddressOfContext::BITAND() {
  return getToken(BasaltParser::BITAND, 0);
}


size_t BasaltParser::AddressOfContext::getRuleIndex() const {
  return BasaltParser::RuleAddressOf;
}

void BasaltParser::AddressOfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddressOf(this);
}

void BasaltParser::AddressOfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddressOf(this);
}


antlrcpp::Any BasaltParser::AddressOfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitAddressOf(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::AddressOfContext* BasaltParser::addressOf() {
  AddressOfContext *_localctx = _tracker.createInstance<AddressOfContext>(_ctx, getState());
  enterRule(_localctx, 12, BasaltParser::RuleAddressOf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(BasaltParser::BITAND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SquareBracketsOpenContext ------------------------------------------------------------------

BasaltParser::SquareBracketsOpenContext::SquareBracketsOpenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::SquareBracketsOpenContext::LBRACK() {
  return getToken(BasaltParser::LBRACK, 0);
}


size_t BasaltParser::SquareBracketsOpenContext::getRuleIndex() const {
  return BasaltParser::RuleSquareBracketsOpen;
}

void BasaltParser::SquareBracketsOpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSquareBracketsOpen(this);
}

void BasaltParser::SquareBracketsOpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSquareBracketsOpen(this);
}


antlrcpp::Any BasaltParser::SquareBracketsOpenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSquareBracketsOpen(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SquareBracketsOpenContext* BasaltParser::squareBracketsOpen() {
  SquareBracketsOpenContext *_localctx = _tracker.createInstance<SquareBracketsOpenContext>(_ctx, getState());
  enterRule(_localctx, 14, BasaltParser::RuleSquareBracketsOpen);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(BasaltParser::LBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SquareBracketsCloseContext ------------------------------------------------------------------

BasaltParser::SquareBracketsCloseContext::SquareBracketsCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::SquareBracketsCloseContext::RBRACK() {
  return getToken(BasaltParser::RBRACK, 0);
}


size_t BasaltParser::SquareBracketsCloseContext::getRuleIndex() const {
  return BasaltParser::RuleSquareBracketsClose;
}

void BasaltParser::SquareBracketsCloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSquareBracketsClose(this);
}

void BasaltParser::SquareBracketsCloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSquareBracketsClose(this);
}


antlrcpp::Any BasaltParser::SquareBracketsCloseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSquareBracketsClose(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SquareBracketsCloseContext* BasaltParser::squareBracketsClose() {
  SquareBracketsCloseContext *_localctx = _tracker.createInstance<SquareBracketsCloseContext>(_ctx, getState());
  enterRule(_localctx, 16, BasaltParser::RuleSquareBracketsClose);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    match(BasaltParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesysOpenContext ------------------------------------------------------------------

BasaltParser::ParenthesysOpenContext::ParenthesysOpenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ParenthesysOpenContext::LPAREN() {
  return getToken(BasaltParser::LPAREN, 0);
}


size_t BasaltParser::ParenthesysOpenContext::getRuleIndex() const {
  return BasaltParser::RuleParenthesysOpen;
}

void BasaltParser::ParenthesysOpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesysOpen(this);
}

void BasaltParser::ParenthesysOpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesysOpen(this);
}


antlrcpp::Any BasaltParser::ParenthesysOpenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitParenthesysOpen(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ParenthesysOpenContext* BasaltParser::parenthesysOpen() {
  ParenthesysOpenContext *_localctx = _tracker.createInstance<ParenthesysOpenContext>(_ctx, getState());
  enterRule(_localctx, 18, BasaltParser::RuleParenthesysOpen);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(BasaltParser::LPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesysCloseContext ------------------------------------------------------------------

BasaltParser::ParenthesysCloseContext::ParenthesysCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ParenthesysCloseContext::RPAREN() {
  return getToken(BasaltParser::RPAREN, 0);
}


size_t BasaltParser::ParenthesysCloseContext::getRuleIndex() const {
  return BasaltParser::RuleParenthesysClose;
}

void BasaltParser::ParenthesysCloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesysClose(this);
}

void BasaltParser::ParenthesysCloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesysClose(this);
}


antlrcpp::Any BasaltParser::ParenthesysCloseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitParenthesysClose(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::parenthesysClose() {
  ParenthesysCloseContext *_localctx = _tracker.createInstance<ParenthesysCloseContext>(_ctx, getState());
  enterRule(_localctx, 20, BasaltParser::RuleParenthesysClose);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(BasaltParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CurlyBracketsOpenContext ------------------------------------------------------------------

BasaltParser::CurlyBracketsOpenContext::CurlyBracketsOpenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::CurlyBracketsOpenContext::LBRACE() {
  return getToken(BasaltParser::LBRACE, 0);
}


size_t BasaltParser::CurlyBracketsOpenContext::getRuleIndex() const {
  return BasaltParser::RuleCurlyBracketsOpen;
}

void BasaltParser::CurlyBracketsOpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCurlyBracketsOpen(this);
}

void BasaltParser::CurlyBracketsOpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCurlyBracketsOpen(this);
}


antlrcpp::Any BasaltParser::CurlyBracketsOpenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitCurlyBracketsOpen(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::CurlyBracketsOpenContext* BasaltParser::curlyBracketsOpen() {
  CurlyBracketsOpenContext *_localctx = _tracker.createInstance<CurlyBracketsOpenContext>(_ctx, getState());
  enterRule(_localctx, 22, BasaltParser::RuleCurlyBracketsOpen);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(BasaltParser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CurlyBracketsCloseContext ------------------------------------------------------------------

BasaltParser::CurlyBracketsCloseContext::CurlyBracketsCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::CurlyBracketsCloseContext::RBRACE() {
  return getToken(BasaltParser::RBRACE, 0);
}


size_t BasaltParser::CurlyBracketsCloseContext::getRuleIndex() const {
  return BasaltParser::RuleCurlyBracketsClose;
}

void BasaltParser::CurlyBracketsCloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCurlyBracketsClose(this);
}

void BasaltParser::CurlyBracketsCloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCurlyBracketsClose(this);
}


antlrcpp::Any BasaltParser::CurlyBracketsCloseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitCurlyBracketsClose(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::CurlyBracketsCloseContext* BasaltParser::curlyBracketsClose() {
  CurlyBracketsCloseContext *_localctx = _tracker.createInstance<CurlyBracketsCloseContext>(_ctx, getState());
  enterRule(_localctx, 24, BasaltParser::RuleCurlyBracketsClose);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(BasaltParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommaContext ------------------------------------------------------------------

BasaltParser::CommaContext::CommaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::CommaContext::COMMA() {
  return getToken(BasaltParser::COMMA, 0);
}


size_t BasaltParser::CommaContext::getRuleIndex() const {
  return BasaltParser::RuleComma;
}

void BasaltParser::CommaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComma(this);
}

void BasaltParser::CommaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComma(this);
}


antlrcpp::Any BasaltParser::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::CommaContext* BasaltParser::comma() {
  CommaContext *_localctx = _tracker.createInstance<CommaContext>(_ctx, getState());
  enterRule(_localctx, 26, BasaltParser::RuleComma);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(BasaltParser::COMMA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SemicolonContext ------------------------------------------------------------------

BasaltParser::SemicolonContext::SemicolonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::SemicolonContext::SEMICOLON() {
  return getToken(BasaltParser::SEMICOLON, 0);
}


size_t BasaltParser::SemicolonContext::getRuleIndex() const {
  return BasaltParser::RuleSemicolon;
}

void BasaltParser::SemicolonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSemicolon(this);
}

void BasaltParser::SemicolonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSemicolon(this);
}


antlrcpp::Any BasaltParser::SemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSemicolon(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SemicolonContext* BasaltParser::semicolon() {
  SemicolonContext *_localctx = _tracker.createInstance<SemicolonContext>(_ctx, getState());
  enterRule(_localctx, 28, BasaltParser::RuleSemicolon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(BasaltParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColonContext ------------------------------------------------------------------

BasaltParser::ColonContext::ColonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ColonContext::COLON() {
  return getToken(BasaltParser::COLON, 0);
}


size_t BasaltParser::ColonContext::getRuleIndex() const {
  return BasaltParser::RuleColon;
}

void BasaltParser::ColonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColon(this);
}

void BasaltParser::ColonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColon(this);
}


antlrcpp::Any BasaltParser::ColonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitColon(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ColonContext* BasaltParser::colon() {
  ColonContext *_localctx = _tracker.createInstance<ColonContext>(_ctx, getState());
  enterRule(_localctx, 30, BasaltParser::RuleColon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(BasaltParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DotContext ------------------------------------------------------------------

BasaltParser::DotContext::DotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::DotContext::DOT() {
  return getToken(BasaltParser::DOT, 0);
}


size_t BasaltParser::DotContext::getRuleIndex() const {
  return BasaltParser::RuleDot;
}

void BasaltParser::DotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDot(this);
}

void BasaltParser::DotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDot(this);
}


antlrcpp::Any BasaltParser::DotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDot(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DotContext* BasaltParser::dot() {
  DotContext *_localctx = _tracker.createInstance<DotContext>(_ctx, getState());
  enterRule(_localctx, 32, BasaltParser::RuleDot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(BasaltParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlusContext ------------------------------------------------------------------

BasaltParser::PlusContext::PlusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::PlusContext::PLUS() {
  return getToken(BasaltParser::PLUS, 0);
}


size_t BasaltParser::PlusContext::getRuleIndex() const {
  return BasaltParser::RulePlus;
}

void BasaltParser::PlusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlus(this);
}

void BasaltParser::PlusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlus(this);
}


antlrcpp::Any BasaltParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PlusContext* BasaltParser::plus() {
  PlusContext *_localctx = _tracker.createInstance<PlusContext>(_ctx, getState());
  enterRule(_localctx, 34, BasaltParser::RulePlus);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(BasaltParser::PLUS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinusContext ------------------------------------------------------------------

BasaltParser::MinusContext::MinusContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::MinusContext::MINUS() {
  return getToken(BasaltParser::MINUS, 0);
}


size_t BasaltParser::MinusContext::getRuleIndex() const {
  return BasaltParser::RuleMinus;
}

void BasaltParser::MinusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinus(this);
}

void BasaltParser::MinusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinus(this);
}


antlrcpp::Any BasaltParser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::MinusContext* BasaltParser::minus() {
  MinusContext *_localctx = _tracker.createInstance<MinusContext>(_ctx, getState());
  enterRule(_localctx, 36, BasaltParser::RuleMinus);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(BasaltParser::MINUS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StarContext ------------------------------------------------------------------

BasaltParser::StarContext::StarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::StarContext::MUL() {
  return getToken(BasaltParser::MUL, 0);
}


size_t BasaltParser::StarContext::getRuleIndex() const {
  return BasaltParser::RuleStar;
}

void BasaltParser::StarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStar(this);
}

void BasaltParser::StarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStar(this);
}


antlrcpp::Any BasaltParser::StarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitStar(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::StarContext* BasaltParser::star() {
  StarContext *_localctx = _tracker.createInstance<StarContext>(_ctx, getState());
  enterRule(_localctx, 38, BasaltParser::RuleStar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(BasaltParser::MUL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivContext ------------------------------------------------------------------

BasaltParser::DivContext::DivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::DivContext::DIV() {
  return getToken(BasaltParser::DIV, 0);
}


size_t BasaltParser::DivContext::getRuleIndex() const {
  return BasaltParser::RuleDiv;
}

void BasaltParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}

void BasaltParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}


antlrcpp::Any BasaltParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DivContext* BasaltParser::div() {
  DivContext *_localctx = _tracker.createInstance<DivContext>(_ctx, getState());
  enterRule(_localctx, 40, BasaltParser::RuleDiv);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(BasaltParser::DIV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModContext ------------------------------------------------------------------

BasaltParser::ModContext::ModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ModContext::MOD() {
  return getToken(BasaltParser::MOD, 0);
}


size_t BasaltParser::ModContext::getRuleIndex() const {
  return BasaltParser::RuleMod;
}

void BasaltParser::ModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMod(this);
}

void BasaltParser::ModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMod(this);
}


antlrcpp::Any BasaltParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ModContext* BasaltParser::mod() {
  ModContext *_localctx = _tracker.createInstance<ModContext>(_ctx, getState());
  enterRule(_localctx, 42, BasaltParser::RuleMod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(BasaltParser::MOD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PowContext ------------------------------------------------------------------

BasaltParser::PowContext::PowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::PowContext::POW() {
  return getToken(BasaltParser::POW, 0);
}


size_t BasaltParser::PowContext::getRuleIndex() const {
  return BasaltParser::RulePow;
}

void BasaltParser::PowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPow(this);
}

void BasaltParser::PowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPow(this);
}


antlrcpp::Any BasaltParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PowContext* BasaltParser::pow() {
  PowContext *_localctx = _tracker.createInstance<PowContext>(_ctx, getState());
  enterRule(_localctx, 44, BasaltParser::RulePow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(BasaltParser::POW);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndContext ------------------------------------------------------------------

BasaltParser::LogicalAndContext::LogicalAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalAndContext::AND() {
  return getToken(BasaltParser::AND, 0);
}


size_t BasaltParser::LogicalAndContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalAnd;
}

void BasaltParser::LogicalAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAnd(this);
}

void BasaltParser::LogicalAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAnd(this);
}


antlrcpp::Any BasaltParser::LogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalAndContext* BasaltParser::logicalAnd() {
  LogicalAndContext *_localctx = _tracker.createInstance<LogicalAndContext>(_ctx, getState());
  enterRule(_localctx, 46, BasaltParser::RuleLogicalAnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(BasaltParser::AND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrContext ------------------------------------------------------------------

BasaltParser::LogicalOrContext::LogicalOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalOrContext::OR() {
  return getToken(BasaltParser::OR, 0);
}


size_t BasaltParser::LogicalOrContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalOr;
}

void BasaltParser::LogicalOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOr(this);
}

void BasaltParser::LogicalOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOr(this);
}


antlrcpp::Any BasaltParser::LogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalOr(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalOrContext* BasaltParser::logicalOr() {
  LogicalOrContext *_localctx = _tracker.createInstance<LogicalOrContext>(_ctx, getState());
  enterRule(_localctx, 48, BasaltParser::RuleLogicalOr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(BasaltParser::OR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalXorContext ------------------------------------------------------------------

BasaltParser::LogicalXorContext::LogicalXorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalXorContext::XOR() {
  return getToken(BasaltParser::XOR, 0);
}


size_t BasaltParser::LogicalXorContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalXor;
}

void BasaltParser::LogicalXorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalXor(this);
}

void BasaltParser::LogicalXorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalXor(this);
}


antlrcpp::Any BasaltParser::LogicalXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalXor(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalXorContext* BasaltParser::logicalXor() {
  LogicalXorContext *_localctx = _tracker.createInstance<LogicalXorContext>(_ctx, getState());
  enterRule(_localctx, 50, BasaltParser::RuleLogicalXor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(BasaltParser::XOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalNotContext ------------------------------------------------------------------

BasaltParser::LogicalNotContext::LogicalNotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalNotContext::NOT() {
  return getToken(BasaltParser::NOT, 0);
}


size_t BasaltParser::LogicalNotContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalNot;
}

void BasaltParser::LogicalNotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalNot(this);
}

void BasaltParser::LogicalNotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalNot(this);
}


antlrcpp::Any BasaltParser::LogicalNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalNot(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalNotContext* BasaltParser::logicalNot() {
  LogicalNotContext *_localctx = _tracker.createInstance<LogicalNotContext>(_ctx, getState());
  enterRule(_localctx, 52, BasaltParser::RuleLogicalNot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(BasaltParser::NOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalEqualContext ------------------------------------------------------------------

BasaltParser::LogicalEqualContext::LogicalEqualContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalEqualContext::EQUAL() {
  return getToken(BasaltParser::EQUAL, 0);
}


size_t BasaltParser::LogicalEqualContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalEqual;
}

void BasaltParser::LogicalEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalEqual(this);
}

void BasaltParser::LogicalEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalEqual(this);
}


antlrcpp::Any BasaltParser::LogicalEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalEqual(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalEqualContext* BasaltParser::logicalEqual() {
  LogicalEqualContext *_localctx = _tracker.createInstance<LogicalEqualContext>(_ctx, getState());
  enterRule(_localctx, 54, BasaltParser::RuleLogicalEqual);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    match(BasaltParser::EQUAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalNotEqualContext ------------------------------------------------------------------

BasaltParser::LogicalNotEqualContext::LogicalNotEqualContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalNotEqualContext::NOTEQUAL() {
  return getToken(BasaltParser::NOTEQUAL, 0);
}


size_t BasaltParser::LogicalNotEqualContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalNotEqual;
}

void BasaltParser::LogicalNotEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalNotEqual(this);
}

void BasaltParser::LogicalNotEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalNotEqual(this);
}


antlrcpp::Any BasaltParser::LogicalNotEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalNotEqual(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalNotEqualContext* BasaltParser::logicalNotEqual() {
  LogicalNotEqualContext *_localctx = _tracker.createInstance<LogicalNotEqualContext>(_ctx, getState());
  enterRule(_localctx, 56, BasaltParser::RuleLogicalNotEqual);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(BasaltParser::NOTEQUAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalGtContext ------------------------------------------------------------------

BasaltParser::LogicalGtContext::LogicalGtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalGtContext::GT() {
  return getToken(BasaltParser::GT, 0);
}


size_t BasaltParser::LogicalGtContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalGt;
}

void BasaltParser::LogicalGtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalGt(this);
}

void BasaltParser::LogicalGtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalGt(this);
}


antlrcpp::Any BasaltParser::LogicalGtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalGt(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalGtContext* BasaltParser::logicalGt() {
  LogicalGtContext *_localctx = _tracker.createInstance<LogicalGtContext>(_ctx, getState());
  enterRule(_localctx, 58, BasaltParser::RuleLogicalGt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(BasaltParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalLtContext ------------------------------------------------------------------

BasaltParser::LogicalLtContext::LogicalLtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalLtContext::LT() {
  return getToken(BasaltParser::LT, 0);
}


size_t BasaltParser::LogicalLtContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalLt;
}

void BasaltParser::LogicalLtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalLt(this);
}

void BasaltParser::LogicalLtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalLt(this);
}


antlrcpp::Any BasaltParser::LogicalLtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalLt(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalLtContext* BasaltParser::logicalLt() {
  LogicalLtContext *_localctx = _tracker.createInstance<LogicalLtContext>(_ctx, getState());
  enterRule(_localctx, 60, BasaltParser::RuleLogicalLt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(BasaltParser::LT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalGeContext ------------------------------------------------------------------

BasaltParser::LogicalGeContext::LogicalGeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalGeContext::GE() {
  return getToken(BasaltParser::GE, 0);
}


size_t BasaltParser::LogicalGeContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalGe;
}

void BasaltParser::LogicalGeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalGe(this);
}

void BasaltParser::LogicalGeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalGe(this);
}


antlrcpp::Any BasaltParser::LogicalGeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalGe(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalGeContext* BasaltParser::logicalGe() {
  LogicalGeContext *_localctx = _tracker.createInstance<LogicalGeContext>(_ctx, getState());
  enterRule(_localctx, 62, BasaltParser::RuleLogicalGe);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    match(BasaltParser::GE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalLeContext ------------------------------------------------------------------

BasaltParser::LogicalLeContext::LogicalLeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::LogicalLeContext::LE() {
  return getToken(BasaltParser::LE, 0);
}


size_t BasaltParser::LogicalLeContext::getRuleIndex() const {
  return BasaltParser::RuleLogicalLe;
}

void BasaltParser::LogicalLeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalLe(this);
}

void BasaltParser::LogicalLeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalLe(this);
}


antlrcpp::Any BasaltParser::LogicalLeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitLogicalLe(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::LogicalLeContext* BasaltParser::logicalLe() {
  LogicalLeContext *_localctx = _tracker.createInstance<LogicalLeContext>(_ctx, getState());
  enterRule(_localctx, 64, BasaltParser::RuleLogicalLe);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    match(BasaltParser::LE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncContext ------------------------------------------------------------------

BasaltParser::IncContext::IncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::IncContext::INC() {
  return getToken(BasaltParser::INC, 0);
}


size_t BasaltParser::IncContext::getRuleIndex() const {
  return BasaltParser::RuleInc;
}

void BasaltParser::IncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInc(this);
}

void BasaltParser::IncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInc(this);
}


antlrcpp::Any BasaltParser::IncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitInc(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::IncContext* BasaltParser::inc() {
  IncContext *_localctx = _tracker.createInstance<IncContext>(_ctx, getState());
  enterRule(_localctx, 66, BasaltParser::RuleInc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    match(BasaltParser::INC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecContext ------------------------------------------------------------------

BasaltParser::DecContext::DecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::DecContext::DEC() {
  return getToken(BasaltParser::DEC, 0);
}


size_t BasaltParser::DecContext::getRuleIndex() const {
  return BasaltParser::RuleDec;
}

void BasaltParser::DecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDec(this);
}

void BasaltParser::DecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDec(this);
}


antlrcpp::Any BasaltParser::DecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDec(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DecContext* BasaltParser::dec() {
  DecContext *_localctx = _tracker.createInstance<DecContext>(_ctx, getState());
  enterRule(_localctx, 68, BasaltParser::RuleDec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    match(BasaltParser::DEC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

BasaltParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::AssignContext::EQ() {
  return getToken(BasaltParser::EQ, 0);
}


size_t BasaltParser::AssignContext::getRuleIndex() const {
  return BasaltParser::RuleAssign;
}

void BasaltParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void BasaltParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


antlrcpp::Any BasaltParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::AssignContext* BasaltParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 70, BasaltParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(BasaltParser::EQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddeqContext ------------------------------------------------------------------

BasaltParser::AddeqContext::AddeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::AddeqContext::ADDEQ() {
  return getToken(BasaltParser::ADDEQ, 0);
}


size_t BasaltParser::AddeqContext::getRuleIndex() const {
  return BasaltParser::RuleAddeq;
}

void BasaltParser::AddeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddeq(this);
}

void BasaltParser::AddeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddeq(this);
}


antlrcpp::Any BasaltParser::AddeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitAddeq(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::AddeqContext* BasaltParser::addeq() {
  AddeqContext *_localctx = _tracker.createInstance<AddeqContext>(_ctx, getState());
  enterRule(_localctx, 72, BasaltParser::RuleAddeq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(BasaltParser::ADDEQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubeqContext ------------------------------------------------------------------

BasaltParser::SubeqContext::SubeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::SubeqContext::SUBEQ() {
  return getToken(BasaltParser::SUBEQ, 0);
}


size_t BasaltParser::SubeqContext::getRuleIndex() const {
  return BasaltParser::RuleSubeq;
}

void BasaltParser::SubeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubeq(this);
}

void BasaltParser::SubeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubeq(this);
}


antlrcpp::Any BasaltParser::SubeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSubeq(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SubeqContext* BasaltParser::subeq() {
  SubeqContext *_localctx = _tracker.createInstance<SubeqContext>(_ctx, getState());
  enterRule(_localctx, 74, BasaltParser::RuleSubeq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(BasaltParser::SUBEQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MuleqContext ------------------------------------------------------------------

BasaltParser::MuleqContext::MuleqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::MuleqContext::MULEQ() {
  return getToken(BasaltParser::MULEQ, 0);
}


size_t BasaltParser::MuleqContext::getRuleIndex() const {
  return BasaltParser::RuleMuleq;
}

void BasaltParser::MuleqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMuleq(this);
}

void BasaltParser::MuleqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMuleq(this);
}


antlrcpp::Any BasaltParser::MuleqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitMuleq(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::MuleqContext* BasaltParser::muleq() {
  MuleqContext *_localctx = _tracker.createInstance<MuleqContext>(_ctx, getState());
  enterRule(_localctx, 76, BasaltParser::RuleMuleq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(BasaltParser::MULEQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiveqContext ------------------------------------------------------------------

BasaltParser::DiveqContext::DiveqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::DiveqContext::DIVEQ() {
  return getToken(BasaltParser::DIVEQ, 0);
}


size_t BasaltParser::DiveqContext::getRuleIndex() const {
  return BasaltParser::RuleDiveq;
}

void BasaltParser::DiveqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiveq(this);
}

void BasaltParser::DiveqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiveq(this);
}


antlrcpp::Any BasaltParser::DiveqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDiveq(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DiveqContext* BasaltParser::diveq() {
  DiveqContext *_localctx = _tracker.createInstance<DiveqContext>(_ctx, getState());
  enterRule(_localctx, 78, BasaltParser::RuleDiveq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    match(BasaltParser::DIVEQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModeqContext ------------------------------------------------------------------

BasaltParser::ModeqContext::ModeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ModeqContext::MODEQ() {
  return getToken(BasaltParser::MODEQ, 0);
}


size_t BasaltParser::ModeqContext::getRuleIndex() const {
  return BasaltParser::RuleModeq;
}

void BasaltParser::ModeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeq(this);
}

void BasaltParser::ModeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeq(this);
}


antlrcpp::Any BasaltParser::ModeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitModeq(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ModeqContext* BasaltParser::modeq() {
  ModeqContext *_localctx = _tracker.createInstance<ModeqContext>(_ctx, getState());
  enterRule(_localctx, 80, BasaltParser::RuleModeq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(BasaltParser::MODEQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PoweqContext ------------------------------------------------------------------

BasaltParser::PoweqContext::PoweqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::PoweqContext::POWEQ() {
  return getToken(BasaltParser::POWEQ, 0);
}


size_t BasaltParser::PoweqContext::getRuleIndex() const {
  return BasaltParser::RulePoweq;
}

void BasaltParser::PoweqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPoweq(this);
}

void BasaltParser::PoweqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPoweq(this);
}


antlrcpp::Any BasaltParser::PoweqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPoweq(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PoweqContext* BasaltParser::poweq() {
  PoweqContext *_localctx = _tracker.createInstance<PoweqContext>(_ctx, getState());
  enterRule(_localctx, 82, BasaltParser::RulePoweq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(BasaltParser::POWEQ);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiamondOpenContext ------------------------------------------------------------------

BasaltParser::DiamondOpenContext::DiamondOpenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::DiamondOpenContext::LT() {
  return getToken(BasaltParser::LT, 0);
}


size_t BasaltParser::DiamondOpenContext::getRuleIndex() const {
  return BasaltParser::RuleDiamondOpen;
}

void BasaltParser::DiamondOpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiamondOpen(this);
}

void BasaltParser::DiamondOpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiamondOpen(this);
}


antlrcpp::Any BasaltParser::DiamondOpenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDiamondOpen(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DiamondOpenContext* BasaltParser::diamondOpen() {
  DiamondOpenContext *_localctx = _tracker.createInstance<DiamondOpenContext>(_ctx, getState());
  enterRule(_localctx, 84, BasaltParser::RuleDiamondOpen);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(BasaltParser::LT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiamondCloseContext ------------------------------------------------------------------

BasaltParser::DiamondCloseContext::DiamondCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::DiamondCloseContext::GT() {
  return getToken(BasaltParser::GT, 0);
}


size_t BasaltParser::DiamondCloseContext::getRuleIndex() const {
  return BasaltParser::RuleDiamondClose;
}

void BasaltParser::DiamondCloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiamondClose(this);
}

void BasaltParser::DiamondCloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiamondClose(this);
}


antlrcpp::Any BasaltParser::DiamondCloseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDiamondClose(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DiamondCloseContext* BasaltParser::diamondClose() {
  DiamondCloseContext *_localctx = _tracker.createInstance<DiamondCloseContext>(_ctx, getState());
  enterRule(_localctx, 86, BasaltParser::RuleDiamondClose);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(BasaltParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarKeywordContext ------------------------------------------------------------------

BasaltParser::VarKeywordContext::VarKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::VarKeywordContext::VAR() {
  return getToken(BasaltParser::VAR, 0);
}


size_t BasaltParser::VarKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleVarKeyword;
}

void BasaltParser::VarKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarKeyword(this);
}

void BasaltParser::VarKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarKeyword(this);
}


antlrcpp::Any BasaltParser::VarKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitVarKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::VarKeywordContext* BasaltParser::varKeyword() {
  VarKeywordContext *_localctx = _tracker.createInstance<VarKeywordContext>(_ctx, getState());
  enterRule(_localctx, 88, BasaltParser::RuleVarKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(BasaltParser::VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstKeywordContext ------------------------------------------------------------------

BasaltParser::ConstKeywordContext::ConstKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ConstKeywordContext::CONST() {
  return getToken(BasaltParser::CONST, 0);
}


size_t BasaltParser::ConstKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleConstKeyword;
}

void BasaltParser::ConstKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstKeyword(this);
}

void BasaltParser::ConstKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstKeyword(this);
}


antlrcpp::Any BasaltParser::ConstKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitConstKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ConstKeywordContext* BasaltParser::constKeyword() {
  ConstKeywordContext *_localctx = _tracker.createInstance<ConstKeywordContext>(_ctx, getState());
  enterRule(_localctx, 90, BasaltParser::RuleConstKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(BasaltParser::CONST);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructKeywordContext ------------------------------------------------------------------

BasaltParser::StructKeywordContext::StructKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::StructKeywordContext::STRUCT() {
  return getToken(BasaltParser::STRUCT, 0);
}


size_t BasaltParser::StructKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleStructKeyword;
}

void BasaltParser::StructKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructKeyword(this);
}

void BasaltParser::StructKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructKeyword(this);
}


antlrcpp::Any BasaltParser::StructKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitStructKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::StructKeywordContext* BasaltParser::structKeyword() {
  StructKeywordContext *_localctx = _tracker.createInstance<StructKeywordContext>(_ctx, getState());
  enterRule(_localctx, 92, BasaltParser::RuleStructKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    match(BasaltParser::STRUCT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionKeywordContext ------------------------------------------------------------------

BasaltParser::UnionKeywordContext::UnionKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::UnionKeywordContext::UNION() {
  return getToken(BasaltParser::UNION, 0);
}


size_t BasaltParser::UnionKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleUnionKeyword;
}

void BasaltParser::UnionKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionKeyword(this);
}

void BasaltParser::UnionKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionKeyword(this);
}


antlrcpp::Any BasaltParser::UnionKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitUnionKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::UnionKeywordContext* BasaltParser::unionKeyword() {
  UnionKeywordContext *_localctx = _tracker.createInstance<UnionKeywordContext>(_ctx, getState());
  enterRule(_localctx, 94, BasaltParser::RuleUnionKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(BasaltParser::UNION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncKeywordContext ------------------------------------------------------------------

BasaltParser::FuncKeywordContext::FuncKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::FuncKeywordContext::FUNC() {
  return getToken(BasaltParser::FUNC, 0);
}


size_t BasaltParser::FuncKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleFuncKeyword;
}

void BasaltParser::FuncKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncKeyword(this);
}

void BasaltParser::FuncKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncKeyword(this);
}


antlrcpp::Any BasaltParser::FuncKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFuncKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FuncKeywordContext* BasaltParser::funcKeyword() {
  FuncKeywordContext *_localctx = _tracker.createInstance<FuncKeywordContext>(_ctx, getState());
  enterRule(_localctx, 96, BasaltParser::RuleFuncKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    match(BasaltParser::FUNC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnKeywordContext ------------------------------------------------------------------

BasaltParser::ReturnKeywordContext::ReturnKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ReturnKeywordContext::RETURN() {
  return getToken(BasaltParser::RETURN, 0);
}


size_t BasaltParser::ReturnKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleReturnKeyword;
}

void BasaltParser::ReturnKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnKeyword(this);
}

void BasaltParser::ReturnKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnKeyword(this);
}


antlrcpp::Any BasaltParser::ReturnKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitReturnKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ReturnKeywordContext* BasaltParser::returnKeyword() {
  ReturnKeywordContext *_localctx = _tracker.createInstance<ReturnKeywordContext>(_ctx, getState());
  enterRule(_localctx, 98, BasaltParser::RuleReturnKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(BasaltParser::RETURN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakKeywordContext ------------------------------------------------------------------

BasaltParser::BreakKeywordContext::BreakKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::BreakKeywordContext::BREAK() {
  return getToken(BasaltParser::BREAK, 0);
}


size_t BasaltParser::BreakKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleBreakKeyword;
}

void BasaltParser::BreakKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakKeyword(this);
}

void BasaltParser::BreakKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakKeyword(this);
}


antlrcpp::Any BasaltParser::BreakKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitBreakKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::BreakKeywordContext* BasaltParser::breakKeyword() {
  BreakKeywordContext *_localctx = _tracker.createInstance<BreakKeywordContext>(_ctx, getState());
  enterRule(_localctx, 100, BasaltParser::RuleBreakKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(BasaltParser::BREAK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueKeywordContext ------------------------------------------------------------------

BasaltParser::ContinueKeywordContext::ContinueKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ContinueKeywordContext::CONTINUE() {
  return getToken(BasaltParser::CONTINUE, 0);
}


size_t BasaltParser::ContinueKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleContinueKeyword;
}

void BasaltParser::ContinueKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueKeyword(this);
}

void BasaltParser::ContinueKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueKeyword(this);
}


antlrcpp::Any BasaltParser::ContinueKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitContinueKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ContinueKeywordContext* BasaltParser::continueKeyword() {
  ContinueKeywordContext *_localctx = _tracker.createInstance<ContinueKeywordContext>(_ctx, getState());
  enterRule(_localctx, 102, BasaltParser::RuleContinueKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(BasaltParser::CONTINUE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfKeywordContext ------------------------------------------------------------------

BasaltParser::IfKeywordContext::IfKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::IfKeywordContext::IF() {
  return getToken(BasaltParser::IF, 0);
}


size_t BasaltParser::IfKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleIfKeyword;
}

void BasaltParser::IfKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfKeyword(this);
}

void BasaltParser::IfKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfKeyword(this);
}


antlrcpp::Any BasaltParser::IfKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitIfKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::IfKeywordContext* BasaltParser::ifKeyword() {
  IfKeywordContext *_localctx = _tracker.createInstance<IfKeywordContext>(_ctx, getState());
  enterRule(_localctx, 104, BasaltParser::RuleIfKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(BasaltParser::IF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseKeywordContext ------------------------------------------------------------------

BasaltParser::ElseKeywordContext::ElseKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::ElseKeywordContext::ELSE() {
  return getToken(BasaltParser::ELSE, 0);
}


size_t BasaltParser::ElseKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleElseKeyword;
}

void BasaltParser::ElseKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseKeyword(this);
}

void BasaltParser::ElseKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseKeyword(this);
}


antlrcpp::Any BasaltParser::ElseKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitElseKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ElseKeywordContext* BasaltParser::elseKeyword() {
  ElseKeywordContext *_localctx = _tracker.createInstance<ElseKeywordContext>(_ctx, getState());
  enterRule(_localctx, 106, BasaltParser::RuleElseKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(BasaltParser::ELSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileKeywordContext ------------------------------------------------------------------

BasaltParser::WhileKeywordContext::WhileKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::WhileKeywordContext::WHILE() {
  return getToken(BasaltParser::WHILE, 0);
}


size_t BasaltParser::WhileKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleWhileKeyword;
}

void BasaltParser::WhileKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileKeyword(this);
}

void BasaltParser::WhileKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileKeyword(this);
}


antlrcpp::Any BasaltParser::WhileKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitWhileKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::WhileKeywordContext* BasaltParser::whileKeyword() {
  WhileKeywordContext *_localctx = _tracker.createInstance<WhileKeywordContext>(_ctx, getState());
  enterRule(_localctx, 108, BasaltParser::RuleWhileKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(BasaltParser::WHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UntilKeywordContext ------------------------------------------------------------------

BasaltParser::UntilKeywordContext::UntilKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::UntilKeywordContext::UNTIL() {
  return getToken(BasaltParser::UNTIL, 0);
}


size_t BasaltParser::UntilKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleUntilKeyword;
}

void BasaltParser::UntilKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntilKeyword(this);
}

void BasaltParser::UntilKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntilKeyword(this);
}


antlrcpp::Any BasaltParser::UntilKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitUntilKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::UntilKeywordContext* BasaltParser::untilKeyword() {
  UntilKeywordContext *_localctx = _tracker.createInstance<UntilKeywordContext>(_ctx, getState());
  enterRule(_localctx, 110, BasaltParser::RuleUntilKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    match(BasaltParser::UNTIL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchKeywordContext ------------------------------------------------------------------

BasaltParser::SwitchKeywordContext::SwitchKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::SwitchKeywordContext::SWITCH() {
  return getToken(BasaltParser::SWITCH, 0);
}


size_t BasaltParser::SwitchKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleSwitchKeyword;
}

void BasaltParser::SwitchKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchKeyword(this);
}

void BasaltParser::SwitchKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchKeyword(this);
}


antlrcpp::Any BasaltParser::SwitchKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSwitchKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SwitchKeywordContext* BasaltParser::switchKeyword() {
  SwitchKeywordContext *_localctx = _tracker.createInstance<SwitchKeywordContext>(_ctx, getState());
  enterRule(_localctx, 112, BasaltParser::RuleSwitchKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(BasaltParser::SWITCH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultKeywordContext ------------------------------------------------------------------

BasaltParser::DefaultKeywordContext::DefaultKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::DefaultKeywordContext::DEFAULT() {
  return getToken(BasaltParser::DEFAULT, 0);
}


size_t BasaltParser::DefaultKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleDefaultKeyword;
}

void BasaltParser::DefaultKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultKeyword(this);
}

void BasaltParser::DefaultKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultKeyword(this);
}


antlrcpp::Any BasaltParser::DefaultKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDefaultKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DefaultKeywordContext* BasaltParser::defaultKeyword() {
  DefaultKeywordContext *_localctx = _tracker.createInstance<DefaultKeywordContext>(_ctx, getState());
  enterRule(_localctx, 114, BasaltParser::RuleDefaultKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(BasaltParser::DEFAULT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

BasaltParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::IdentifierContext::ID() {
  return getToken(BasaltParser::ID, 0);
}


size_t BasaltParser::IdentifierContext::getRuleIndex() const {
  return BasaltParser::RuleIdentifier;
}

void BasaltParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void BasaltParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any BasaltParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::IdentifierContext* BasaltParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 116, BasaltParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(BasaltParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

BasaltParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::TypeNameContext::TYPENAME() {
  return getToken(BasaltParser::TYPENAME, 0);
}


size_t BasaltParser::TypeNameContext::getRuleIndex() const {
  return BasaltParser::RuleTypeName;
}

void BasaltParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void BasaltParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any BasaltParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::TypeNameContext* BasaltParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 118, BasaltParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(BasaltParser::TYPENAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

BasaltParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::PrimitiveTypeContext::BASETYPE() {
  return getToken(BasaltParser::BASETYPE, 0);
}


size_t BasaltParser::PrimitiveTypeContext::getRuleIndex() const {
  return BasaltParser::RulePrimitiveType;
}

void BasaltParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void BasaltParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}


antlrcpp::Any BasaltParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PrimitiveTypeContext* BasaltParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 120, BasaltParser::RulePrimitiveType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(BasaltParser::BASETYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntLiteralContext ------------------------------------------------------------------

BasaltParser::IntLiteralContext::IntLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::IntLiteralContext::INT_LITERAL() {
  return getToken(BasaltParser::INT_LITERAL, 0);
}


size_t BasaltParser::IntLiteralContext::getRuleIndex() const {
  return BasaltParser::RuleIntLiteral;
}

void BasaltParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}

void BasaltParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}


antlrcpp::Any BasaltParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::IntLiteralContext* BasaltParser::intLiteral() {
  IntLiteralContext *_localctx = _tracker.createInstance<IntLiteralContext>(_ctx, getState());
  enterRule(_localctx, 122, BasaltParser::RuleIntLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(BasaltParser::INT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

BasaltParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(BasaltParser::FLOAT_LITERAL, 0);
}


size_t BasaltParser::FloatLiteralContext::getRuleIndex() const {
  return BasaltParser::RuleFloatLiteral;
}

void BasaltParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void BasaltParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any BasaltParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FloatLiteralContext* BasaltParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 124, BasaltParser::RuleFloatLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(BasaltParser::FLOAT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolLiteralContext ------------------------------------------------------------------

BasaltParser::BoolLiteralContext::BoolLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::BoolLiteralContext::BOOL_LITERAL() {
  return getToken(BasaltParser::BOOL_LITERAL, 0);
}


size_t BasaltParser::BoolLiteralContext::getRuleIndex() const {
  return BasaltParser::RuleBoolLiteral;
}

void BasaltParser::BoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLiteral(this);
}

void BasaltParser::BoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLiteral(this);
}


antlrcpp::Any BasaltParser::BoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitBoolLiteral(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::BoolLiteralContext* BasaltParser::boolLiteral() {
  BoolLiteralContext *_localctx = _tracker.createInstance<BoolLiteralContext>(_ctx, getState());
  enterRule(_localctx, 126, BasaltParser::RuleBoolLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(BasaltParser::BOOL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharLiteralContext ------------------------------------------------------------------

BasaltParser::CharLiteralContext::CharLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::CharLiteralContext::CHAR_LITERAL() {
  return getToken(BasaltParser::CHAR_LITERAL, 0);
}


size_t BasaltParser::CharLiteralContext::getRuleIndex() const {
  return BasaltParser::RuleCharLiteral;
}

void BasaltParser::CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharLiteral(this);
}

void BasaltParser::CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharLiteral(this);
}


antlrcpp::Any BasaltParser::CharLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitCharLiteral(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::CharLiteralContext* BasaltParser::charLiteral() {
  CharLiteralContext *_localctx = _tracker.createInstance<CharLiteralContext>(_ctx, getState());
  enterRule(_localctx, 128, BasaltParser::RuleCharLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    match(BasaltParser::CHAR_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

BasaltParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::StringLiteralContext::STRING_LITERAL() {
  return getToken(BasaltParser::STRING_LITERAL, 0);
}


size_t BasaltParser::StringLiteralContext::getRuleIndex() const {
  return BasaltParser::RuleStringLiteral;
}

void BasaltParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void BasaltParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any BasaltParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::StringLiteralContext* BasaltParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 130, BasaltParser::RuleStringLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    match(BasaltParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullKeywordContext ------------------------------------------------------------------

BasaltParser::NullKeywordContext::NullKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasaltParser::NullKeywordContext::NULLK() {
  return getToken(BasaltParser::NULLK, 0);
}


size_t BasaltParser::NullKeywordContext::getRuleIndex() const {
  return BasaltParser::RuleNullKeyword;
}

void BasaltParser::NullKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullKeyword(this);
}

void BasaltParser::NullKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullKeyword(this);
}


antlrcpp::Any BasaltParser::NullKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitNullKeyword(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::NullKeywordContext* BasaltParser::nullKeyword() {
  NullKeywordContext *_localctx = _tracker.createInstance<NullKeywordContext>(_ctx, getState());
  enterRule(_localctx, 132, BasaltParser::RuleNullKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
    match(BasaltParser::NULLK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

BasaltParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::VarKeywordContext* BasaltParser::VariableDeclarationContext::varKeyword() {
  return getRuleContext<BasaltParser::VarKeywordContext>(0);
}

BasaltParser::IdentifierContext* BasaltParser::VariableDeclarationContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}

BasaltParser::ColonContext* BasaltParser::VariableDeclarationContext::colon() {
  return getRuleContext<BasaltParser::ColonContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::VariableDeclarationContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}

BasaltParser::AssignContext* BasaltParser::VariableDeclarationContext::assign() {
  return getRuleContext<BasaltParser::AssignContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::VariableDeclarationContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::VariableDeclarationContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}


size_t BasaltParser::VariableDeclarationContext::getRuleIndex() const {
  return BasaltParser::RuleVariableDeclaration;
}

void BasaltParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void BasaltParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any BasaltParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::VariableDeclarationContext* BasaltParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 134, BasaltParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(357);
      varKeyword();
      setState(358);
      identifier();
      setState(359);
      colon();
      setState(360);
      typeSignature();
      setState(361);
      assign();
      setState(362);
      expression();
      setState(363);
      semicolon();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(365);
      varKeyword();
      setState(366);
      identifier();
      setState(367);
      colon();
      setState(368);
      typeSignature();
      setState(369);
      semicolon();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

BasaltParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ConstKeywordContext* BasaltParser::ConstDeclarationContext::constKeyword() {
  return getRuleContext<BasaltParser::ConstKeywordContext>(0);
}

BasaltParser::IdentifierContext* BasaltParser::ConstDeclarationContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}

BasaltParser::ColonContext* BasaltParser::ConstDeclarationContext::colon() {
  return getRuleContext<BasaltParser::ColonContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::ConstDeclarationContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}

BasaltParser::AssignContext* BasaltParser::ConstDeclarationContext::assign() {
  return getRuleContext<BasaltParser::AssignContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::ConstDeclarationContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::ConstDeclarationContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}


size_t BasaltParser::ConstDeclarationContext::getRuleIndex() const {
  return BasaltParser::RuleConstDeclaration;
}

void BasaltParser::ConstDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDeclaration(this);
}

void BasaltParser::ConstDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDeclaration(this);
}


antlrcpp::Any BasaltParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ConstDeclarationContext* BasaltParser::constDeclaration() {
  ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 136, BasaltParser::RuleConstDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    constKeyword();
    setState(374);
    identifier();
    setState(375);
    colon();
    setState(376);
    typeSignature();
    setState(377);
    assign();
    setState(378);
    expression();
    setState(379);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDefinitionContext ------------------------------------------------------------------

BasaltParser::StructDefinitionContext::StructDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::StructKeywordContext* BasaltParser::StructDefinitionContext::structKeyword() {
  return getRuleContext<BasaltParser::StructKeywordContext>(0);
}

BasaltParser::TypeNameContext* BasaltParser::StructDefinitionContext::typeName() {
  return getRuleContext<BasaltParser::TypeNameContext>(0);
}

BasaltParser::CurlyBracketsOpenContext* BasaltParser::StructDefinitionContext::curlyBracketsOpen() {
  return getRuleContext<BasaltParser::CurlyBracketsOpenContext>(0);
}

BasaltParser::CurlyBracketsCloseContext* BasaltParser::StructDefinitionContext::curlyBracketsClose() {
  return getRuleContext<BasaltParser::CurlyBracketsCloseContext>(0);
}

BasaltParser::FormalTypeParametersSectionContext* BasaltParser::StructDefinitionContext::formalTypeParametersSection() {
  return getRuleContext<BasaltParser::FormalTypeParametersSectionContext>(0);
}

std::vector<BasaltParser::StructFieldContext *> BasaltParser::StructDefinitionContext::structField() {
  return getRuleContexts<BasaltParser::StructFieldContext>();
}

BasaltParser::StructFieldContext* BasaltParser::StructDefinitionContext::structField(size_t i) {
  return getRuleContext<BasaltParser::StructFieldContext>(i);
}


size_t BasaltParser::StructDefinitionContext::getRuleIndex() const {
  return BasaltParser::RuleStructDefinition;
}

void BasaltParser::StructDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDefinition(this);
}

void BasaltParser::StructDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDefinition(this);
}


antlrcpp::Any BasaltParser::StructDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitStructDefinition(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::StructDefinitionContext* BasaltParser::structDefinition() {
  StructDefinitionContext *_localctx = _tracker.createInstance<StructDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 138, BasaltParser::RuleStructDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    structKeyword();
    setState(382);
    typeName();
    setState(384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasaltParser::LT) {
      setState(383);
      formalTypeParametersSection();
    }
    setState(386);
    curlyBracketsOpen();
    setState(390);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasaltParser::ID) {
      setState(387);
      structField();
      setState(392);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(393);
    curlyBracketsClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructFieldContext ------------------------------------------------------------------

BasaltParser::StructFieldContext::StructFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::IdentifierContext* BasaltParser::StructFieldContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}

BasaltParser::ColonContext* BasaltParser::StructFieldContext::colon() {
  return getRuleContext<BasaltParser::ColonContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::StructFieldContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::StructFieldContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}


size_t BasaltParser::StructFieldContext::getRuleIndex() const {
  return BasaltParser::RuleStructField;
}

void BasaltParser::StructFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructField(this);
}

void BasaltParser::StructFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructField(this);
}


antlrcpp::Any BasaltParser::StructFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitStructField(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::StructFieldContext* BasaltParser::structField() {
  StructFieldContext *_localctx = _tracker.createInstance<StructFieldContext>(_ctx, getState());
  enterRule(_localctx, 140, BasaltParser::RuleStructField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    identifier();
    setState(396);
    colon();
    setState(397);
    typeSignature();
    setState(398);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionDefinitionContext ------------------------------------------------------------------

BasaltParser::UnionDefinitionContext::UnionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::UnionKeywordContext* BasaltParser::UnionDefinitionContext::unionKeyword() {
  return getRuleContext<BasaltParser::UnionKeywordContext>(0);
}

BasaltParser::TypeNameContext* BasaltParser::UnionDefinitionContext::typeName() {
  return getRuleContext<BasaltParser::TypeNameContext>(0);
}

BasaltParser::CurlyBracketsOpenContext* BasaltParser::UnionDefinitionContext::curlyBracketsOpen() {
  return getRuleContext<BasaltParser::CurlyBracketsOpenContext>(0);
}

BasaltParser::CurlyBracketsCloseContext* BasaltParser::UnionDefinitionContext::curlyBracketsClose() {
  return getRuleContext<BasaltParser::CurlyBracketsCloseContext>(0);
}

BasaltParser::FormalTypeParametersSectionContext* BasaltParser::UnionDefinitionContext::formalTypeParametersSection() {
  return getRuleContext<BasaltParser::FormalTypeParametersSectionContext>(0);
}

std::vector<BasaltParser::TypeSignatureContext *> BasaltParser::UnionDefinitionContext::typeSignature() {
  return getRuleContexts<BasaltParser::TypeSignatureContext>();
}

BasaltParser::TypeSignatureContext* BasaltParser::UnionDefinitionContext::typeSignature(size_t i) {
  return getRuleContext<BasaltParser::TypeSignatureContext>(i);
}


size_t BasaltParser::UnionDefinitionContext::getRuleIndex() const {
  return BasaltParser::RuleUnionDefinition;
}

void BasaltParser::UnionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionDefinition(this);
}

void BasaltParser::UnionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionDefinition(this);
}


antlrcpp::Any BasaltParser::UnionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitUnionDefinition(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::UnionDefinitionContext* BasaltParser::unionDefinition() {
  UnionDefinitionContext *_localctx = _tracker.createInstance<UnionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 142, BasaltParser::RuleUnionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(400);
    unionKeyword();
    setState(401);
    typeName();
    setState(403);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasaltParser::LT) {
      setState(402);
      formalTypeParametersSection();
    }
    setState(405);
    curlyBracketsOpen();
    setState(409);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 21) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 21)) & ((1ULL << (BasaltParser::BASETYPE - 21))
      | (1ULL << (BasaltParser::TYPENAME - 21))
      | (1ULL << (BasaltParser::LBRACK - 21))
      | (1ULL << (BasaltParser::HASHTAG - 21)))) != 0)) {
      setState(406);
      typeSignature();
      setState(411);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(412);
    curlyBracketsClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

BasaltParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::FuncKeywordContext* BasaltParser::FunctionDefinitionContext::funcKeyword() {
  return getRuleContext<BasaltParser::FuncKeywordContext>(0);
}

BasaltParser::IdentifierContext* BasaltParser::FunctionDefinitionContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}

BasaltParser::FunctionDefinitionArgumentsSectionContext* BasaltParser::FunctionDefinitionContext::functionDefinitionArgumentsSection() {
  return getRuleContext<BasaltParser::FunctionDefinitionArgumentsSectionContext>(0);
}

BasaltParser::MultilineScopedInstructionBlockContext* BasaltParser::FunctionDefinitionContext::multilineScopedInstructionBlock() {
  return getRuleContext<BasaltParser::MultilineScopedInstructionBlockContext>(0);
}

BasaltParser::FormalTypeParametersSectionContext* BasaltParser::FunctionDefinitionContext::formalTypeParametersSection() {
  return getRuleContext<BasaltParser::FormalTypeParametersSectionContext>(0);
}

BasaltParser::FunctionReturnTypeSectionContext* BasaltParser::FunctionDefinitionContext::functionReturnTypeSection() {
  return getRuleContext<BasaltParser::FunctionReturnTypeSectionContext>(0);
}


size_t BasaltParser::FunctionDefinitionContext::getRuleIndex() const {
  return BasaltParser::RuleFunctionDefinition;
}

void BasaltParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void BasaltParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any BasaltParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FunctionDefinitionContext* BasaltParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 144, BasaltParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    funcKeyword();
    setState(415);
    identifier();
    setState(417);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasaltParser::LT) {
      setState(416);
      formalTypeParametersSection();
    }
    setState(419);
    functionDefinitionArgumentsSection();
    setState(421);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasaltParser::COLON) {
      setState(420);
      functionReturnTypeSection();
    }
    setState(423);
    multilineScopedInstructionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionArgumentsSectionContext ------------------------------------------------------------------

BasaltParser::FunctionDefinitionArgumentsSectionContext::FunctionDefinitionArgumentsSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ParenthesysOpenContext* BasaltParser::FunctionDefinitionArgumentsSectionContext::parenthesysOpen() {
  return getRuleContext<BasaltParser::ParenthesysOpenContext>(0);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::FunctionDefinitionArgumentsSectionContext::parenthesysClose() {
  return getRuleContext<BasaltParser::ParenthesysCloseContext>(0);
}

BasaltParser::FunctionDefinitionArgumentsListContext* BasaltParser::FunctionDefinitionArgumentsSectionContext::functionDefinitionArgumentsList() {
  return getRuleContext<BasaltParser::FunctionDefinitionArgumentsListContext>(0);
}


size_t BasaltParser::FunctionDefinitionArgumentsSectionContext::getRuleIndex() const {
  return BasaltParser::RuleFunctionDefinitionArgumentsSection;
}

void BasaltParser::FunctionDefinitionArgumentsSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinitionArgumentsSection(this);
}

void BasaltParser::FunctionDefinitionArgumentsSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinitionArgumentsSection(this);
}


antlrcpp::Any BasaltParser::FunctionDefinitionArgumentsSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinitionArgumentsSection(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FunctionDefinitionArgumentsSectionContext* BasaltParser::functionDefinitionArgumentsSection() {
  FunctionDefinitionArgumentsSectionContext *_localctx = _tracker.createInstance<FunctionDefinitionArgumentsSectionContext>(_ctx, getState());
  enterRule(_localctx, 146, BasaltParser::RuleFunctionDefinitionArgumentsSection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    parenthesysOpen();
    setState(427);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasaltParser::ID) {
      setState(426);
      functionDefinitionArgumentsList();
    }
    setState(429);
    parenthesysClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionArgumentsListContext ------------------------------------------------------------------

BasaltParser::FunctionDefinitionArgumentsListContext::FunctionDefinitionArgumentsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BasaltParser::IdentifierContext *> BasaltParser::FunctionDefinitionArgumentsListContext::identifier() {
  return getRuleContexts<BasaltParser::IdentifierContext>();
}

BasaltParser::IdentifierContext* BasaltParser::FunctionDefinitionArgumentsListContext::identifier(size_t i) {
  return getRuleContext<BasaltParser::IdentifierContext>(i);
}

std::vector<BasaltParser::ColonContext *> BasaltParser::FunctionDefinitionArgumentsListContext::colon() {
  return getRuleContexts<BasaltParser::ColonContext>();
}

BasaltParser::ColonContext* BasaltParser::FunctionDefinitionArgumentsListContext::colon(size_t i) {
  return getRuleContext<BasaltParser::ColonContext>(i);
}

std::vector<BasaltParser::TypeSignatureContext *> BasaltParser::FunctionDefinitionArgumentsListContext::typeSignature() {
  return getRuleContexts<BasaltParser::TypeSignatureContext>();
}

BasaltParser::TypeSignatureContext* BasaltParser::FunctionDefinitionArgumentsListContext::typeSignature(size_t i) {
  return getRuleContext<BasaltParser::TypeSignatureContext>(i);
}

std::vector<BasaltParser::CommaContext *> BasaltParser::FunctionDefinitionArgumentsListContext::comma() {
  return getRuleContexts<BasaltParser::CommaContext>();
}

BasaltParser::CommaContext* BasaltParser::FunctionDefinitionArgumentsListContext::comma(size_t i) {
  return getRuleContext<BasaltParser::CommaContext>(i);
}


size_t BasaltParser::FunctionDefinitionArgumentsListContext::getRuleIndex() const {
  return BasaltParser::RuleFunctionDefinitionArgumentsList;
}

void BasaltParser::FunctionDefinitionArgumentsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinitionArgumentsList(this);
}

void BasaltParser::FunctionDefinitionArgumentsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinitionArgumentsList(this);
}


antlrcpp::Any BasaltParser::FunctionDefinitionArgumentsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinitionArgumentsList(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FunctionDefinitionArgumentsListContext* BasaltParser::functionDefinitionArgumentsList() {
  FunctionDefinitionArgumentsListContext *_localctx = _tracker.createInstance<FunctionDefinitionArgumentsListContext>(_ctx, getState());
  enterRule(_localctx, 148, BasaltParser::RuleFunctionDefinitionArgumentsList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    identifier();
    setState(432);
    colon();
    setState(433);
    typeSignature();
    setState(441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasaltParser::COMMA) {
      setState(434);
      comma();
      setState(435);
      identifier();
      setState(436);
      colon();
      setState(437);
      typeSignature();
      setState(443);
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

//----------------- FunctionReturnTypeSectionContext ------------------------------------------------------------------

BasaltParser::FunctionReturnTypeSectionContext::FunctionReturnTypeSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ColonContext* BasaltParser::FunctionReturnTypeSectionContext::colon() {
  return getRuleContext<BasaltParser::ColonContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::FunctionReturnTypeSectionContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}


size_t BasaltParser::FunctionReturnTypeSectionContext::getRuleIndex() const {
  return BasaltParser::RuleFunctionReturnTypeSection;
}

void BasaltParser::FunctionReturnTypeSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionReturnTypeSection(this);
}

void BasaltParser::FunctionReturnTypeSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionReturnTypeSection(this);
}


antlrcpp::Any BasaltParser::FunctionReturnTypeSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFunctionReturnTypeSection(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FunctionReturnTypeSectionContext* BasaltParser::functionReturnTypeSection() {
  FunctionReturnTypeSectionContext *_localctx = _tracker.createInstance<FunctionReturnTypeSectionContext>(_ctx, getState());
  enterRule(_localctx, 150, BasaltParser::RuleFunctionReturnTypeSection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    colon();
    setState(445);
    typeSignature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

BasaltParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::IdentifierContext* BasaltParser::FunctionCallContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}

BasaltParser::ActualFunctionCallArgumentsSectionContext* BasaltParser::FunctionCallContext::actualFunctionCallArgumentsSection() {
  return getRuleContext<BasaltParser::ActualFunctionCallArgumentsSectionContext>(0);
}

BasaltParser::ActualTypeParametersSectionContext* BasaltParser::FunctionCallContext::actualTypeParametersSection() {
  return getRuleContext<BasaltParser::ActualTypeParametersSectionContext>(0);
}


size_t BasaltParser::FunctionCallContext::getRuleIndex() const {
  return BasaltParser::RuleFunctionCall;
}

void BasaltParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void BasaltParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any BasaltParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FunctionCallContext* BasaltParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 152, BasaltParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    identifier();
    setState(449);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasaltParser::LT) {
      setState(448);
      actualTypeParametersSection();
    }
    setState(451);
    actualFunctionCallArgumentsSection();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallStatementContext ------------------------------------------------------------------

BasaltParser::FunctionCallStatementContext::FunctionCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::FunctionCallContext* BasaltParser::FunctionCallStatementContext::functionCall() {
  return getRuleContext<BasaltParser::FunctionCallContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::FunctionCallStatementContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}


size_t BasaltParser::FunctionCallStatementContext::getRuleIndex() const {
  return BasaltParser::RuleFunctionCallStatement;
}

void BasaltParser::FunctionCallStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallStatement(this);
}

void BasaltParser::FunctionCallStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallStatement(this);
}


antlrcpp::Any BasaltParser::FunctionCallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallStatement(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FunctionCallStatementContext* BasaltParser::functionCallStatement() {
  FunctionCallStatementContext *_localctx = _tracker.createInstance<FunctionCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 154, BasaltParser::RuleFunctionCallStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    functionCall();
    setState(454);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActualFunctionCallArgumentsSectionContext ------------------------------------------------------------------

BasaltParser::ActualFunctionCallArgumentsSectionContext::ActualFunctionCallArgumentsSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ParenthesysOpenContext* BasaltParser::ActualFunctionCallArgumentsSectionContext::parenthesysOpen() {
  return getRuleContext<BasaltParser::ParenthesysOpenContext>(0);
}

std::vector<BasaltParser::ExpressionContext *> BasaltParser::ActualFunctionCallArgumentsSectionContext::expression() {
  return getRuleContexts<BasaltParser::ExpressionContext>();
}

BasaltParser::ExpressionContext* BasaltParser::ActualFunctionCallArgumentsSectionContext::expression(size_t i) {
  return getRuleContext<BasaltParser::ExpressionContext>(i);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::ActualFunctionCallArgumentsSectionContext::parenthesysClose() {
  return getRuleContext<BasaltParser::ParenthesysCloseContext>(0);
}

std::vector<BasaltParser::CommaContext *> BasaltParser::ActualFunctionCallArgumentsSectionContext::comma() {
  return getRuleContexts<BasaltParser::CommaContext>();
}

BasaltParser::CommaContext* BasaltParser::ActualFunctionCallArgumentsSectionContext::comma(size_t i) {
  return getRuleContext<BasaltParser::CommaContext>(i);
}


size_t BasaltParser::ActualFunctionCallArgumentsSectionContext::getRuleIndex() const {
  return BasaltParser::RuleActualFunctionCallArgumentsSection;
}

void BasaltParser::ActualFunctionCallArgumentsSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActualFunctionCallArgumentsSection(this);
}

void BasaltParser::ActualFunctionCallArgumentsSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActualFunctionCallArgumentsSection(this);
}


antlrcpp::Any BasaltParser::ActualFunctionCallArgumentsSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitActualFunctionCallArgumentsSection(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ActualFunctionCallArgumentsSectionContext* BasaltParser::actualFunctionCallArgumentsSection() {
  ActualFunctionCallArgumentsSectionContext *_localctx = _tracker.createInstance<ActualFunctionCallArgumentsSectionContext>(_ctx, getState());
  enterRule(_localctx, 156, BasaltParser::RuleActualFunctionCallArgumentsSection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(471);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(456);
      parenthesysOpen();
      setState(457);
      expression();
      setState(463);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BasaltParser::COMMA) {
        setState(458);
        comma();
        setState(459);
        expression();
        setState(465);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(466);
      parenthesysClose();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(468);
      parenthesysOpen();
      setState(469);
      parenthesysClose();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSignatureContext ------------------------------------------------------------------

BasaltParser::TypeSignatureContext::TypeSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::PrimitiveTypeContext* BasaltParser::TypeSignatureContext::primitiveType() {
  return getRuleContext<BasaltParser::PrimitiveTypeContext>(0);
}

BasaltParser::CustomTypeContext* BasaltParser::TypeSignatureContext::customType() {
  return getRuleContext<BasaltParser::CustomTypeContext>(0);
}

BasaltParser::PointerTypeContext* BasaltParser::TypeSignatureContext::pointerType() {
  return getRuleContext<BasaltParser::PointerTypeContext>(0);
}

BasaltParser::SliceTypeContext* BasaltParser::TypeSignatureContext::sliceType() {
  return getRuleContext<BasaltParser::SliceTypeContext>(0);
}

BasaltParser::ArrayTypeContext* BasaltParser::TypeSignatureContext::arrayType() {
  return getRuleContext<BasaltParser::ArrayTypeContext>(0);
}


size_t BasaltParser::TypeSignatureContext::getRuleIndex() const {
  return BasaltParser::RuleTypeSignature;
}

void BasaltParser::TypeSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSignature(this);
}

void BasaltParser::TypeSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSignature(this);
}


antlrcpp::Any BasaltParser::TypeSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitTypeSignature(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::TypeSignatureContext* BasaltParser::typeSignature() {
  TypeSignatureContext *_localctx = _tracker.createInstance<TypeSignatureContext>(_ctx, getState());
  enterRule(_localctx, 158, BasaltParser::RuleTypeSignature);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(478);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(473);
      primitiveType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(474);
      customType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(475);
      pointerType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(476);
      sliceType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(477);
      arrayType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CustomTypeContext ------------------------------------------------------------------

BasaltParser::CustomTypeContext::CustomTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::TypeNameContext* BasaltParser::CustomTypeContext::typeName() {
  return getRuleContext<BasaltParser::TypeNameContext>(0);
}

BasaltParser::ActualTypeParametersSectionContext* BasaltParser::CustomTypeContext::actualTypeParametersSection() {
  return getRuleContext<BasaltParser::ActualTypeParametersSectionContext>(0);
}


size_t BasaltParser::CustomTypeContext::getRuleIndex() const {
  return BasaltParser::RuleCustomType;
}

void BasaltParser::CustomTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCustomType(this);
}

void BasaltParser::CustomTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCustomType(this);
}


antlrcpp::Any BasaltParser::CustomTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitCustomType(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::CustomTypeContext* BasaltParser::customType() {
  CustomTypeContext *_localctx = _tracker.createInstance<CustomTypeContext>(_ctx, getState());
  enterRule(_localctx, 160, BasaltParser::RuleCustomType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
    typeName();
    setState(482);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasaltParser::LT) {
      setState(481);
      actualTypeParametersSection();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerTypeContext ------------------------------------------------------------------

BasaltParser::PointerTypeContext::PointerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::PointerSymbolContext* BasaltParser::PointerTypeContext::pointerSymbol() {
  return getRuleContext<BasaltParser::PointerSymbolContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::PointerTypeContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}


size_t BasaltParser::PointerTypeContext::getRuleIndex() const {
  return BasaltParser::RulePointerType;
}

void BasaltParser::PointerTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerType(this);
}

void BasaltParser::PointerTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerType(this);
}


antlrcpp::Any BasaltParser::PointerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPointerType(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PointerTypeContext* BasaltParser::pointerType() {
  PointerTypeContext *_localctx = _tracker.createInstance<PointerTypeContext>(_ctx, getState());
  enterRule(_localctx, 162, BasaltParser::RulePointerType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
    pointerSymbol();
    setState(485);
    typeSignature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SliceTypeContext ------------------------------------------------------------------

BasaltParser::SliceTypeContext::SliceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::SliceSymbolContext* BasaltParser::SliceTypeContext::sliceSymbol() {
  return getRuleContext<BasaltParser::SliceSymbolContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::SliceTypeContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}


size_t BasaltParser::SliceTypeContext::getRuleIndex() const {
  return BasaltParser::RuleSliceType;
}

void BasaltParser::SliceTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSliceType(this);
}

void BasaltParser::SliceTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSliceType(this);
}


antlrcpp::Any BasaltParser::SliceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSliceType(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SliceTypeContext* BasaltParser::sliceType() {
  SliceTypeContext *_localctx = _tracker.createInstance<SliceTypeContext>(_ctx, getState());
  enterRule(_localctx, 164, BasaltParser::RuleSliceType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    sliceSymbol();
    setState(488);
    typeSignature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

BasaltParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::SquareBracketsOpenContext* BasaltParser::ArrayTypeContext::squareBracketsOpen() {
  return getRuleContext<BasaltParser::SquareBracketsOpenContext>(0);
}

BasaltParser::IntLiteralContext* BasaltParser::ArrayTypeContext::intLiteral() {
  return getRuleContext<BasaltParser::IntLiteralContext>(0);
}

BasaltParser::SquareBracketsCloseContext* BasaltParser::ArrayTypeContext::squareBracketsClose() {
  return getRuleContext<BasaltParser::SquareBracketsCloseContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::ArrayTypeContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}


size_t BasaltParser::ArrayTypeContext::getRuleIndex() const {
  return BasaltParser::RuleArrayType;
}

void BasaltParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void BasaltParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


antlrcpp::Any BasaltParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ArrayTypeContext* BasaltParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 166, BasaltParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    squareBracketsOpen();
    setState(491);
    intLiteral();
    setState(492);
    squareBracketsClose();
    setState(493);
    typeSignature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActualTypeParametersSectionContext ------------------------------------------------------------------

BasaltParser::ActualTypeParametersSectionContext::ActualTypeParametersSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::DiamondOpenContext* BasaltParser::ActualTypeParametersSectionContext::diamondOpen() {
  return getRuleContext<BasaltParser::DiamondOpenContext>(0);
}

std::vector<BasaltParser::TypeSignatureContext *> BasaltParser::ActualTypeParametersSectionContext::typeSignature() {
  return getRuleContexts<BasaltParser::TypeSignatureContext>();
}

BasaltParser::TypeSignatureContext* BasaltParser::ActualTypeParametersSectionContext::typeSignature(size_t i) {
  return getRuleContext<BasaltParser::TypeSignatureContext>(i);
}

BasaltParser::DiamondCloseContext* BasaltParser::ActualTypeParametersSectionContext::diamondClose() {
  return getRuleContext<BasaltParser::DiamondCloseContext>(0);
}

std::vector<BasaltParser::CommaContext *> BasaltParser::ActualTypeParametersSectionContext::comma() {
  return getRuleContexts<BasaltParser::CommaContext>();
}

BasaltParser::CommaContext* BasaltParser::ActualTypeParametersSectionContext::comma(size_t i) {
  return getRuleContext<BasaltParser::CommaContext>(i);
}


size_t BasaltParser::ActualTypeParametersSectionContext::getRuleIndex() const {
  return BasaltParser::RuleActualTypeParametersSection;
}

void BasaltParser::ActualTypeParametersSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActualTypeParametersSection(this);
}

void BasaltParser::ActualTypeParametersSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActualTypeParametersSection(this);
}


antlrcpp::Any BasaltParser::ActualTypeParametersSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitActualTypeParametersSection(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ActualTypeParametersSectionContext* BasaltParser::actualTypeParametersSection() {
  ActualTypeParametersSectionContext *_localctx = _tracker.createInstance<ActualTypeParametersSectionContext>(_ctx, getState());
  enterRule(_localctx, 168, BasaltParser::RuleActualTypeParametersSection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    diamondOpen();
    setState(496);
    typeSignature();
    setState(502);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasaltParser::COMMA) {
      setState(497);
      comma();
      setState(498);
      typeSignature();
      setState(504);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(505);
    diamondClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalTypeParametersSectionContext ------------------------------------------------------------------

BasaltParser::FormalTypeParametersSectionContext::FormalTypeParametersSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::DiamondOpenContext* BasaltParser::FormalTypeParametersSectionContext::diamondOpen() {
  return getRuleContext<BasaltParser::DiamondOpenContext>(0);
}

std::vector<BasaltParser::TypeNameContext *> BasaltParser::FormalTypeParametersSectionContext::typeName() {
  return getRuleContexts<BasaltParser::TypeNameContext>();
}

BasaltParser::TypeNameContext* BasaltParser::FormalTypeParametersSectionContext::typeName(size_t i) {
  return getRuleContext<BasaltParser::TypeNameContext>(i);
}

BasaltParser::DiamondCloseContext* BasaltParser::FormalTypeParametersSectionContext::diamondClose() {
  return getRuleContext<BasaltParser::DiamondCloseContext>(0);
}

std::vector<BasaltParser::CommaContext *> BasaltParser::FormalTypeParametersSectionContext::comma() {
  return getRuleContexts<BasaltParser::CommaContext>();
}

BasaltParser::CommaContext* BasaltParser::FormalTypeParametersSectionContext::comma(size_t i) {
  return getRuleContext<BasaltParser::CommaContext>(i);
}


size_t BasaltParser::FormalTypeParametersSectionContext::getRuleIndex() const {
  return BasaltParser::RuleFormalTypeParametersSection;
}

void BasaltParser::FormalTypeParametersSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalTypeParametersSection(this);
}

void BasaltParser::FormalTypeParametersSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalTypeParametersSection(this);
}


antlrcpp::Any BasaltParser::FormalTypeParametersSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitFormalTypeParametersSection(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::FormalTypeParametersSectionContext* BasaltParser::formalTypeParametersSection() {
  FormalTypeParametersSectionContext *_localctx = _tracker.createInstance<FormalTypeParametersSectionContext>(_ctx, getState());
  enterRule(_localctx, 170, BasaltParser::RuleFormalTypeParametersSection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    diamondOpen();
    setState(508);
    typeName();
    setState(514);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasaltParser::COMMA) {
      setState(509);
      comma();
      setState(510);
      typeName();
      setState(516);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(517);
    diamondClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

BasaltParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::TerminalExpressionContext* BasaltParser::ExpressionContext::terminalExpression() {
  return getRuleContext<BasaltParser::TerminalExpressionContext>(0);
}

BasaltParser::InfixOperatorContext* BasaltParser::ExpressionContext::infixOperator() {
  return getRuleContext<BasaltParser::InfixOperatorContext>(0);
}

BasaltParser::DotMemberAccessContext* BasaltParser::ExpressionContext::dotMemberAccess() {
  return getRuleContext<BasaltParser::DotMemberAccessContext>(0);
}


size_t BasaltParser::ExpressionContext::getRuleIndex() const {
  return BasaltParser::RuleExpression;
}

void BasaltParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void BasaltParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any BasaltParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ExpressionContext* BasaltParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 172, BasaltParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(522);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(519);
      terminalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(520);
      infixOperator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(521);
      dotMemberAccess();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminalExpressionContext ------------------------------------------------------------------

BasaltParser::TerminalExpressionContext::TerminalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::SquareBracketsAccessContext* BasaltParser::TerminalExpressionContext::squareBracketsAccess() {
  return getRuleContext<BasaltParser::SquareBracketsAccessContext>(0);
}

BasaltParser::ArrayLiteralContext* BasaltParser::TerminalExpressionContext::arrayLiteral() {
  return getRuleContext<BasaltParser::ArrayLiteralContext>(0);
}

BasaltParser::FunctionCallContext* BasaltParser::TerminalExpressionContext::functionCall() {
  return getRuleContext<BasaltParser::FunctionCallContext>(0);
}

BasaltParser::ParenthesysDelimitedExpressionContext* BasaltParser::TerminalExpressionContext::parenthesysDelimitedExpression() {
  return getRuleContext<BasaltParser::ParenthesysDelimitedExpressionContext>(0);
}

BasaltParser::PrefixOperatorContext* BasaltParser::TerminalExpressionContext::prefixOperator() {
  return getRuleContext<BasaltParser::PrefixOperatorContext>(0);
}

BasaltParser::IntLiteralContext* BasaltParser::TerminalExpressionContext::intLiteral() {
  return getRuleContext<BasaltParser::IntLiteralContext>(0);
}

BasaltParser::FloatLiteralContext* BasaltParser::TerminalExpressionContext::floatLiteral() {
  return getRuleContext<BasaltParser::FloatLiteralContext>(0);
}

BasaltParser::CharLiteralContext* BasaltParser::TerminalExpressionContext::charLiteral() {
  return getRuleContext<BasaltParser::CharLiteralContext>(0);
}

BasaltParser::StringLiteralContext* BasaltParser::TerminalExpressionContext::stringLiteral() {
  return getRuleContext<BasaltParser::StringLiteralContext>(0);
}

BasaltParser::BoolLiteralContext* BasaltParser::TerminalExpressionContext::boolLiteral() {
  return getRuleContext<BasaltParser::BoolLiteralContext>(0);
}

BasaltParser::IdentifierContext* BasaltParser::TerminalExpressionContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}


size_t BasaltParser::TerminalExpressionContext::getRuleIndex() const {
  return BasaltParser::RuleTerminalExpression;
}

void BasaltParser::TerminalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminalExpression(this);
}

void BasaltParser::TerminalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminalExpression(this);
}


antlrcpp::Any BasaltParser::TerminalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitTerminalExpression(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::TerminalExpressionContext* BasaltParser::terminalExpression() {
  TerminalExpressionContext *_localctx = _tracker.createInstance<TerminalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 174, BasaltParser::RuleTerminalExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(535);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(524);
      squareBracketsAccess();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(525);
      arrayLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(526);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(527);
      parenthesysDelimitedExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(528);
      prefixOperator();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(529);
      intLiteral();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(530);
      floatLiteral();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(531);
      charLiteral();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(532);
      stringLiteral();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(533);
      boolLiteral();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(534);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfixOperatorContext ------------------------------------------------------------------

BasaltParser::InfixOperatorContext::InfixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::TerminalExpressionContext* BasaltParser::InfixOperatorContext::terminalExpression() {
  return getRuleContext<BasaltParser::TerminalExpressionContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::InfixOperatorContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::PlusContext* BasaltParser::InfixOperatorContext::plus() {
  return getRuleContext<BasaltParser::PlusContext>(0);
}

BasaltParser::MinusContext* BasaltParser::InfixOperatorContext::minus() {
  return getRuleContext<BasaltParser::MinusContext>(0);
}

BasaltParser::StarContext* BasaltParser::InfixOperatorContext::star() {
  return getRuleContext<BasaltParser::StarContext>(0);
}

BasaltParser::DivContext* BasaltParser::InfixOperatorContext::div() {
  return getRuleContext<BasaltParser::DivContext>(0);
}

BasaltParser::PowContext* BasaltParser::InfixOperatorContext::pow() {
  return getRuleContext<BasaltParser::PowContext>(0);
}

BasaltParser::ModContext* BasaltParser::InfixOperatorContext::mod() {
  return getRuleContext<BasaltParser::ModContext>(0);
}

BasaltParser::LogicalAndContext* BasaltParser::InfixOperatorContext::logicalAnd() {
  return getRuleContext<BasaltParser::LogicalAndContext>(0);
}

BasaltParser::LogicalOrContext* BasaltParser::InfixOperatorContext::logicalOr() {
  return getRuleContext<BasaltParser::LogicalOrContext>(0);
}

BasaltParser::LogicalEqualContext* BasaltParser::InfixOperatorContext::logicalEqual() {
  return getRuleContext<BasaltParser::LogicalEqualContext>(0);
}

BasaltParser::LogicalNotEqualContext* BasaltParser::InfixOperatorContext::logicalNotEqual() {
  return getRuleContext<BasaltParser::LogicalNotEqualContext>(0);
}

BasaltParser::LogicalGtContext* BasaltParser::InfixOperatorContext::logicalGt() {
  return getRuleContext<BasaltParser::LogicalGtContext>(0);
}

BasaltParser::LogicalLtContext* BasaltParser::InfixOperatorContext::logicalLt() {
  return getRuleContext<BasaltParser::LogicalLtContext>(0);
}

BasaltParser::LogicalLeContext* BasaltParser::InfixOperatorContext::logicalLe() {
  return getRuleContext<BasaltParser::LogicalLeContext>(0);
}

BasaltParser::LogicalGeContext* BasaltParser::InfixOperatorContext::logicalGe() {
  return getRuleContext<BasaltParser::LogicalGeContext>(0);
}


size_t BasaltParser::InfixOperatorContext::getRuleIndex() const {
  return BasaltParser::RuleInfixOperator;
}

void BasaltParser::InfixOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixOperator(this);
}

void BasaltParser::InfixOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixOperator(this);
}


antlrcpp::Any BasaltParser::InfixOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitInfixOperator(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::InfixOperatorContext* BasaltParser::infixOperator() {
  InfixOperatorContext *_localctx = _tracker.createInstance<InfixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 176, BasaltParser::RuleInfixOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(568);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(537);
      terminalExpression();
      setState(544);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BasaltParser::PLUS: {
          setState(538);
          plus();
          break;
        }

        case BasaltParser::MINUS: {
          setState(539);
          minus();
          break;
        }

        case BasaltParser::MUL: {
          setState(540);
          star();
          break;
        }

        case BasaltParser::DIV: {
          setState(541);
          div();
          break;
        }

        case BasaltParser::POW: {
          setState(542);
          pow();
          break;
        }

        case BasaltParser::MOD: {
          setState(543);
          mod();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(546);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(548);
      terminalExpression();
      setState(553);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BasaltParser::AND: {
          setState(549);
          logicalAnd();
          break;
        }

        case BasaltParser::OR: {
          setState(550);
          logicalOr();
          break;
        }

        case BasaltParser::EQUAL: {
          setState(551);
          logicalEqual();
          break;
        }

        case BasaltParser::NOTEQUAL: {
          setState(552);
          logicalNotEqual();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(555);
      expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(557);
      terminalExpression();
      setState(564);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BasaltParser::GT: {
          setState(558);
          logicalGt();
          break;
        }

        case BasaltParser::LT: {
          setState(559);
          logicalLt();
          break;
        }

        case BasaltParser::LE: {
          setState(560);
          logicalLe();
          break;
        }

        case BasaltParser::GE: {
          setState(561);
          logicalGe();
          break;
        }

        case BasaltParser::EQUAL: {
          setState(562);
          logicalEqual();
          break;
        }

        case BasaltParser::NOTEQUAL: {
          setState(563);
          logicalNotEqual();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(566);
      expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DotMemberAccessContext ------------------------------------------------------------------

BasaltParser::DotMemberAccessContext::DotMemberAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::TerminalExpressionContext* BasaltParser::DotMemberAccessContext::terminalExpression() {
  return getRuleContext<BasaltParser::TerminalExpressionContext>(0);
}

std::vector<BasaltParser::DotContext *> BasaltParser::DotMemberAccessContext::dot() {
  return getRuleContexts<BasaltParser::DotContext>();
}

BasaltParser::DotContext* BasaltParser::DotMemberAccessContext::dot(size_t i) {
  return getRuleContext<BasaltParser::DotContext>(i);
}

std::vector<BasaltParser::IdentifierContext *> BasaltParser::DotMemberAccessContext::identifier() {
  return getRuleContexts<BasaltParser::IdentifierContext>();
}

BasaltParser::IdentifierContext* BasaltParser::DotMemberAccessContext::identifier(size_t i) {
  return getRuleContext<BasaltParser::IdentifierContext>(i);
}


size_t BasaltParser::DotMemberAccessContext::getRuleIndex() const {
  return BasaltParser::RuleDotMemberAccess;
}

void BasaltParser::DotMemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotMemberAccess(this);
}

void BasaltParser::DotMemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotMemberAccess(this);
}


antlrcpp::Any BasaltParser::DotMemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitDotMemberAccess(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::DotMemberAccessContext* BasaltParser::dotMemberAccess() {
  DotMemberAccessContext *_localctx = _tracker.createInstance<DotMemberAccessContext>(_ctx, getState());
  enterRule(_localctx, 178, BasaltParser::RuleDotMemberAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(570);
    terminalExpression();
    setState(574); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(571);
              dot();
              setState(572);
              identifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(576); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixOperatorContext ------------------------------------------------------------------

BasaltParser::PrefixOperatorContext::PrefixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ExpressionContext* BasaltParser::PrefixOperatorContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::PointerDereferenceContext* BasaltParser::PrefixOperatorContext::pointerDereference() {
  return getRuleContext<BasaltParser::PointerDereferenceContext>(0);
}

BasaltParser::LogicalNotContext* BasaltParser::PrefixOperatorContext::logicalNot() {
  return getRuleContext<BasaltParser::LogicalNotContext>(0);
}

BasaltParser::PlusContext* BasaltParser::PrefixOperatorContext::plus() {
  return getRuleContext<BasaltParser::PlusContext>(0);
}

BasaltParser::MinusContext* BasaltParser::PrefixOperatorContext::minus() {
  return getRuleContext<BasaltParser::MinusContext>(0);
}

BasaltParser::IncContext* BasaltParser::PrefixOperatorContext::inc() {
  return getRuleContext<BasaltParser::IncContext>(0);
}

BasaltParser::DecContext* BasaltParser::PrefixOperatorContext::dec() {
  return getRuleContext<BasaltParser::DecContext>(0);
}


size_t BasaltParser::PrefixOperatorContext::getRuleIndex() const {
  return BasaltParser::RulePrefixOperator;
}

void BasaltParser::PrefixOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixOperator(this);
}

void BasaltParser::PrefixOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixOperator(this);
}


antlrcpp::Any BasaltParser::PrefixOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitPrefixOperator(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::PrefixOperatorContext* BasaltParser::prefixOperator() {
  PrefixOperatorContext *_localctx = _tracker.createInstance<PrefixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 180, BasaltParser::RulePrefixOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasaltParser::HASHTAG: {
        setState(578);
        pointerDereference();
        break;
      }

      case BasaltParser::NOT: {
        setState(579);
        logicalNot();
        break;
      }

      case BasaltParser::PLUS: {
        setState(580);
        plus();
        break;
      }

      case BasaltParser::MINUS: {
        setState(581);
        minus();
        break;
      }

      case BasaltParser::INC: {
        setState(582);
        inc();
        break;
      }

      case BasaltParser::DEC: {
        setState(583);
        dec();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(586);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SquareBracketsAccessContext ------------------------------------------------------------------

BasaltParser::SquareBracketsAccessContext::SquareBracketsAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::IdentifierContext* BasaltParser::SquareBracketsAccessContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}

BasaltParser::ParenthesysDelimitedExpressionContext* BasaltParser::SquareBracketsAccessContext::parenthesysDelimitedExpression() {
  return getRuleContext<BasaltParser::ParenthesysDelimitedExpressionContext>(0);
}

BasaltParser::ArrayLiteralContext* BasaltParser::SquareBracketsAccessContext::arrayLiteral() {
  return getRuleContext<BasaltParser::ArrayLiteralContext>(0);
}

BasaltParser::FunctionCallContext* BasaltParser::SquareBracketsAccessContext::functionCall() {
  return getRuleContext<BasaltParser::FunctionCallContext>(0);
}

std::vector<BasaltParser::SquareBracketsOpenContext *> BasaltParser::SquareBracketsAccessContext::squareBracketsOpen() {
  return getRuleContexts<BasaltParser::SquareBracketsOpenContext>();
}

BasaltParser::SquareBracketsOpenContext* BasaltParser::SquareBracketsAccessContext::squareBracketsOpen(size_t i) {
  return getRuleContext<BasaltParser::SquareBracketsOpenContext>(i);
}

std::vector<BasaltParser::ExpressionContext *> BasaltParser::SquareBracketsAccessContext::expression() {
  return getRuleContexts<BasaltParser::ExpressionContext>();
}

BasaltParser::ExpressionContext* BasaltParser::SquareBracketsAccessContext::expression(size_t i) {
  return getRuleContext<BasaltParser::ExpressionContext>(i);
}

std::vector<BasaltParser::SquareBracketsCloseContext *> BasaltParser::SquareBracketsAccessContext::squareBracketsClose() {
  return getRuleContexts<BasaltParser::SquareBracketsCloseContext>();
}

BasaltParser::SquareBracketsCloseContext* BasaltParser::SquareBracketsAccessContext::squareBracketsClose(size_t i) {
  return getRuleContext<BasaltParser::SquareBracketsCloseContext>(i);
}


size_t BasaltParser::SquareBracketsAccessContext::getRuleIndex() const {
  return BasaltParser::RuleSquareBracketsAccess;
}

void BasaltParser::SquareBracketsAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSquareBracketsAccess(this);
}

void BasaltParser::SquareBracketsAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSquareBracketsAccess(this);
}


antlrcpp::Any BasaltParser::SquareBracketsAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSquareBracketsAccess(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SquareBracketsAccessContext* BasaltParser::squareBracketsAccess() {
  SquareBracketsAccessContext *_localctx = _tracker.createInstance<SquareBracketsAccessContext>(_ctx, getState());
  enterRule(_localctx, 182, BasaltParser::RuleSquareBracketsAccess);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(588);
      identifier();
      break;
    }

    case 2: {
      setState(589);
      parenthesysDelimitedExpression();
      break;
    }

    case 3: {
      setState(590);
      arrayLiteral();
      break;
    }

    case 4: {
      setState(591);
      functionCall();
      break;
    }

    default:
      break;
    }
    setState(598); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(594);
      squareBracketsOpen();
      setState(595);
      expression();
      setState(596);
      squareBracketsClose();
      setState(600); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BasaltParser::LBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayLiteralContext ------------------------------------------------------------------

BasaltParser::ArrayLiteralContext::ArrayLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::SquareBracketsOpenContext* BasaltParser::ArrayLiteralContext::squareBracketsOpen() {
  return getRuleContext<BasaltParser::SquareBracketsOpenContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::ArrayLiteralContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}

BasaltParser::SquareBracketsCloseContext* BasaltParser::ArrayLiteralContext::squareBracketsClose() {
  return getRuleContext<BasaltParser::SquareBracketsCloseContext>(0);
}

BasaltParser::CurlyBracketsOpenContext* BasaltParser::ArrayLiteralContext::curlyBracketsOpen() {
  return getRuleContext<BasaltParser::CurlyBracketsOpenContext>(0);
}

std::vector<BasaltParser::ExpressionContext *> BasaltParser::ArrayLiteralContext::expression() {
  return getRuleContexts<BasaltParser::ExpressionContext>();
}

BasaltParser::ExpressionContext* BasaltParser::ArrayLiteralContext::expression(size_t i) {
  return getRuleContext<BasaltParser::ExpressionContext>(i);
}

BasaltParser::CurlyBracketsCloseContext* BasaltParser::ArrayLiteralContext::curlyBracketsClose() {
  return getRuleContext<BasaltParser::CurlyBracketsCloseContext>(0);
}

std::vector<BasaltParser::CommaContext *> BasaltParser::ArrayLiteralContext::comma() {
  return getRuleContexts<BasaltParser::CommaContext>();
}

BasaltParser::CommaContext* BasaltParser::ArrayLiteralContext::comma(size_t i) {
  return getRuleContext<BasaltParser::CommaContext>(i);
}


size_t BasaltParser::ArrayLiteralContext::getRuleIndex() const {
  return BasaltParser::RuleArrayLiteral;
}

void BasaltParser::ArrayLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteral(this);
}

void BasaltParser::ArrayLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteral(this);
}


antlrcpp::Any BasaltParser::ArrayLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitArrayLiteral(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ArrayLiteralContext* BasaltParser::arrayLiteral() {
  ArrayLiteralContext *_localctx = _tracker.createInstance<ArrayLiteralContext>(_ctx, getState());
  enterRule(_localctx, 184, BasaltParser::RuleArrayLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(602);
    squareBracketsOpen();
    setState(603);
    typeSignature();
    setState(604);
    squareBracketsClose();
    setState(605);
    curlyBracketsOpen();
    setState(606);
    expression();
    setState(612);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasaltParser::COMMA) {
      setState(607);
      comma();
      setState(608);
      expression();
      setState(614);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(615);
    curlyBracketsClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesysDelimitedExpressionContext ------------------------------------------------------------------

BasaltParser::ParenthesysDelimitedExpressionContext::ParenthesysDelimitedExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ParenthesysOpenContext* BasaltParser::ParenthesysDelimitedExpressionContext::parenthesysOpen() {
  return getRuleContext<BasaltParser::ParenthesysOpenContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::ParenthesysDelimitedExpressionContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::ParenthesysDelimitedExpressionContext::parenthesysClose() {
  return getRuleContext<BasaltParser::ParenthesysCloseContext>(0);
}


size_t BasaltParser::ParenthesysDelimitedExpressionContext::getRuleIndex() const {
  return BasaltParser::RuleParenthesysDelimitedExpression;
}

void BasaltParser::ParenthesysDelimitedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesysDelimitedExpression(this);
}

void BasaltParser::ParenthesysDelimitedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesysDelimitedExpression(this);
}


antlrcpp::Any BasaltParser::ParenthesysDelimitedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitParenthesysDelimitedExpression(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ParenthesysDelimitedExpressionContext* BasaltParser::parenthesysDelimitedExpression() {
  ParenthesysDelimitedExpressionContext *_localctx = _tracker.createInstance<ParenthesysDelimitedExpressionContext>(_ctx, getState());
  enterRule(_localctx, 186, BasaltParser::RuleParenthesysDelimitedExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    parenthesysOpen();
    setState(618);
    expression();
    setState(619);
    parenthesysClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionBlockContext ------------------------------------------------------------------

BasaltParser::InstructionBlockContext::InstructionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::MultilineScopedInstructionBlockContext* BasaltParser::InstructionBlockContext::multilineScopedInstructionBlock() {
  return getRuleContext<BasaltParser::MultilineScopedInstructionBlockContext>(0);
}

BasaltParser::StatementContext* BasaltParser::InstructionBlockContext::statement() {
  return getRuleContext<BasaltParser::StatementContext>(0);
}


size_t BasaltParser::InstructionBlockContext::getRuleIndex() const {
  return BasaltParser::RuleInstructionBlock;
}

void BasaltParser::InstructionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstructionBlock(this);
}

void BasaltParser::InstructionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstructionBlock(this);
}


antlrcpp::Any BasaltParser::InstructionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitInstructionBlock(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::InstructionBlockContext* BasaltParser::instructionBlock() {
  InstructionBlockContext *_localctx = _tracker.createInstance<InstructionBlockContext>(_ctx, getState());
  enterRule(_localctx, 188, BasaltParser::RuleInstructionBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(623);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasaltParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(621);
        multilineScopedInstructionBlock();
        break;
      }

      case BasaltParser::RETURN:
      case BasaltParser::BREAK:
      case BasaltParser::CONTINUE:
      case BasaltParser::IF:
      case BasaltParser::WHILE:
      case BasaltParser::UNTIL:
      case BasaltParser::VAR:
      case BasaltParser::CONST:
      case BasaltParser::INT_LITERAL:
      case BasaltParser::FLOAT_LITERAL:
      case BasaltParser::BOOL_LITERAL:
      case BasaltParser::CHAR_LITERAL:
      case BasaltParser::STRING_LITERAL:
      case BasaltParser::ID:
      case BasaltParser::LPAREN:
      case BasaltParser::LBRACK:
      case BasaltParser::NOT:
      case BasaltParser::INC:
      case BasaltParser::DEC:
      case BasaltParser::PLUS:
      case BasaltParser::MINUS:
      case BasaltParser::HASHTAG: {
        enterOuterAlt(_localctx, 2);
        setState(622);
        statement();
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

//----------------- MultilineScopedInstructionBlockContext ------------------------------------------------------------------

BasaltParser::MultilineScopedInstructionBlockContext::MultilineScopedInstructionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::CurlyBracketsOpenContext* BasaltParser::MultilineScopedInstructionBlockContext::curlyBracketsOpen() {
  return getRuleContext<BasaltParser::CurlyBracketsOpenContext>(0);
}

BasaltParser::CurlyBracketsCloseContext* BasaltParser::MultilineScopedInstructionBlockContext::curlyBracketsClose() {
  return getRuleContext<BasaltParser::CurlyBracketsCloseContext>(0);
}

std::vector<BasaltParser::StatementContext *> BasaltParser::MultilineScopedInstructionBlockContext::statement() {
  return getRuleContexts<BasaltParser::StatementContext>();
}

BasaltParser::StatementContext* BasaltParser::MultilineScopedInstructionBlockContext::statement(size_t i) {
  return getRuleContext<BasaltParser::StatementContext>(i);
}


size_t BasaltParser::MultilineScopedInstructionBlockContext::getRuleIndex() const {
  return BasaltParser::RuleMultilineScopedInstructionBlock;
}

void BasaltParser::MultilineScopedInstructionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultilineScopedInstructionBlock(this);
}

void BasaltParser::MultilineScopedInstructionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultilineScopedInstructionBlock(this);
}


antlrcpp::Any BasaltParser::MultilineScopedInstructionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitMultilineScopedInstructionBlock(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::MultilineScopedInstructionBlockContext* BasaltParser::multilineScopedInstructionBlock() {
  MultilineScopedInstructionBlockContext *_localctx = _tracker.createInstance<MultilineScopedInstructionBlockContext>(_ctx, getState());
  enterRule(_localctx, 190, BasaltParser::RuleMultilineScopedInstructionBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    curlyBracketsOpen();
    setState(629);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 6) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 6)) & ((1ULL << (BasaltParser::RETURN - 6))
      | (1ULL << (BasaltParser::BREAK - 6))
      | (1ULL << (BasaltParser::CONTINUE - 6))
      | (1ULL << (BasaltParser::IF - 6))
      | (1ULL << (BasaltParser::WHILE - 6))
      | (1ULL << (BasaltParser::UNTIL - 6))
      | (1ULL << (BasaltParser::VAR - 6))
      | (1ULL << (BasaltParser::CONST - 6))
      | (1ULL << (BasaltParser::INT_LITERAL - 6))
      | (1ULL << (BasaltParser::FLOAT_LITERAL - 6))
      | (1ULL << (BasaltParser::BOOL_LITERAL - 6))
      | (1ULL << (BasaltParser::CHAR_LITERAL - 6))
      | (1ULL << (BasaltParser::STRING_LITERAL - 6))
      | (1ULL << (BasaltParser::ID - 6))
      | (1ULL << (BasaltParser::LPAREN - 6))
      | (1ULL << (BasaltParser::LBRACK - 6))
      | (1ULL << (BasaltParser::NOT - 6))
      | (1ULL << (BasaltParser::INC - 6))
      | (1ULL << (BasaltParser::DEC - 6))
      | (1ULL << (BasaltParser::PLUS - 6))
      | (1ULL << (BasaltParser::MINUS - 6))
      | (1ULL << (BasaltParser::HASHTAG - 6)))) != 0)) {
      setState(626);
      statement();
      setState(631);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(632);
    curlyBracketsClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

BasaltParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BasaltParser::ExpressionContext *> BasaltParser::AssignmentContext::expression() {
  return getRuleContexts<BasaltParser::ExpressionContext>();
}

BasaltParser::ExpressionContext* BasaltParser::AssignmentContext::expression(size_t i) {
  return getRuleContext<BasaltParser::ExpressionContext>(i);
}

BasaltParser::AssignContext* BasaltParser::AssignmentContext::assign() {
  return getRuleContext<BasaltParser::AssignContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::AssignmentContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}

BasaltParser::AddeqContext* BasaltParser::AssignmentContext::addeq() {
  return getRuleContext<BasaltParser::AddeqContext>(0);
}

BasaltParser::SubeqContext* BasaltParser::AssignmentContext::subeq() {
  return getRuleContext<BasaltParser::SubeqContext>(0);
}

BasaltParser::MuleqContext* BasaltParser::AssignmentContext::muleq() {
  return getRuleContext<BasaltParser::MuleqContext>(0);
}

BasaltParser::DiveqContext* BasaltParser::AssignmentContext::diveq() {
  return getRuleContext<BasaltParser::DiveqContext>(0);
}

BasaltParser::ModeqContext* BasaltParser::AssignmentContext::modeq() {
  return getRuleContext<BasaltParser::ModeqContext>(0);
}

BasaltParser::PoweqContext* BasaltParser::AssignmentContext::poweq() {
  return getRuleContext<BasaltParser::PoweqContext>(0);
}


size_t BasaltParser::AssignmentContext::getRuleIndex() const {
  return BasaltParser::RuleAssignment;
}

void BasaltParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void BasaltParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any BasaltParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::AssignmentContext* BasaltParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 192, BasaltParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(651);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(634);
      expression();
      setState(635);
      assign();
      setState(636);
      expression();
      setState(637);
      semicolon();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(639);
      expression();
      setState(646);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BasaltParser::ADDEQ: {
          setState(640);
          addeq();
          break;
        }

        case BasaltParser::SUBEQ: {
          setState(641);
          subeq();
          break;
        }

        case BasaltParser::MULEQ: {
          setState(642);
          muleq();
          break;
        }

        case BasaltParser::DIVEQ: {
          setState(643);
          diveq();
          break;
        }

        case BasaltParser::MODEQ: {
          setState(644);
          modeq();
          break;
        }

        case BasaltParser::POWEQ: {
          setState(645);
          poweq();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(648);
      expression();
      setState(649);
      semicolon();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BasaltParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::FunctionCallStatementContext* BasaltParser::StatementContext::functionCallStatement() {
  return getRuleContext<BasaltParser::FunctionCallStatementContext>(0);
}

BasaltParser::AssignmentContext* BasaltParser::StatementContext::assignment() {
  return getRuleContext<BasaltParser::AssignmentContext>(0);
}

BasaltParser::VariableDeclarationContext* BasaltParser::StatementContext::variableDeclaration() {
  return getRuleContext<BasaltParser::VariableDeclarationContext>(0);
}

BasaltParser::ConstDeclarationContext* BasaltParser::StatementContext::constDeclaration() {
  return getRuleContext<BasaltParser::ConstDeclarationContext>(0);
}

BasaltParser::ReturnStatementContext* BasaltParser::StatementContext::returnStatement() {
  return getRuleContext<BasaltParser::ReturnStatementContext>(0);
}

BasaltParser::BreakStatementContext* BasaltParser::StatementContext::breakStatement() {
  return getRuleContext<BasaltParser::BreakStatementContext>(0);
}

BasaltParser::ContinueStatementContext* BasaltParser::StatementContext::continueStatement() {
  return getRuleContext<BasaltParser::ContinueStatementContext>(0);
}

BasaltParser::IfStatementContext* BasaltParser::StatementContext::ifStatement() {
  return getRuleContext<BasaltParser::IfStatementContext>(0);
}

BasaltParser::WhileLoopContext* BasaltParser::StatementContext::whileLoop() {
  return getRuleContext<BasaltParser::WhileLoopContext>(0);
}

BasaltParser::UntilLoopContext* BasaltParser::StatementContext::untilLoop() {
  return getRuleContext<BasaltParser::UntilLoopContext>(0);
}


size_t BasaltParser::StatementContext::getRuleIndex() const {
  return BasaltParser::RuleStatement;
}

void BasaltParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void BasaltParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any BasaltParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::StatementContext* BasaltParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 194, BasaltParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(663);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(653);
      functionCallStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(654);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(655);
      variableDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(656);
      constDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(657);
      returnStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(658);
      breakStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(659);
      continueStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(660);
      ifStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(661);
      whileLoop();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(662);
      untilLoop();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

BasaltParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ReturnKeywordContext* BasaltParser::ReturnStatementContext::returnKeyword() {
  return getRuleContext<BasaltParser::ReturnKeywordContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::ReturnStatementContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::ReturnStatementContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}


size_t BasaltParser::ReturnStatementContext::getRuleIndex() const {
  return BasaltParser::RuleReturnStatement;
}

void BasaltParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void BasaltParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any BasaltParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ReturnStatementContext* BasaltParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 196, BasaltParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    returnKeyword();
    setState(667);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & ((1ULL << (BasaltParser::INT_LITERAL - 16))
      | (1ULL << (BasaltParser::FLOAT_LITERAL - 16))
      | (1ULL << (BasaltParser::BOOL_LITERAL - 16))
      | (1ULL << (BasaltParser::CHAR_LITERAL - 16))
      | (1ULL << (BasaltParser::STRING_LITERAL - 16))
      | (1ULL << (BasaltParser::ID - 16))
      | (1ULL << (BasaltParser::LPAREN - 16))
      | (1ULL << (BasaltParser::LBRACK - 16))
      | (1ULL << (BasaltParser::NOT - 16))
      | (1ULL << (BasaltParser::INC - 16))
      | (1ULL << (BasaltParser::DEC - 16))
      | (1ULL << (BasaltParser::PLUS - 16))
      | (1ULL << (BasaltParser::MINUS - 16))
      | (1ULL << (BasaltParser::HASHTAG - 16)))) != 0)) {
      setState(666);
      expression();
    }
    setState(669);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

BasaltParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::BreakKeywordContext* BasaltParser::BreakStatementContext::breakKeyword() {
  return getRuleContext<BasaltParser::BreakKeywordContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::BreakStatementContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}


size_t BasaltParser::BreakStatementContext::getRuleIndex() const {
  return BasaltParser::RuleBreakStatement;
}

void BasaltParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void BasaltParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any BasaltParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::BreakStatementContext* BasaltParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 198, BasaltParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    breakKeyword();
    setState(672);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

BasaltParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::ContinueKeywordContext* BasaltParser::ContinueStatementContext::continueKeyword() {
  return getRuleContext<BasaltParser::ContinueKeywordContext>(0);
}

BasaltParser::SemicolonContext* BasaltParser::ContinueStatementContext::semicolon() {
  return getRuleContext<BasaltParser::SemicolonContext>(0);
}


size_t BasaltParser::ContinueStatementContext::getRuleIndex() const {
  return BasaltParser::RuleContinueStatement;
}

void BasaltParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void BasaltParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any BasaltParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::ContinueStatementContext* BasaltParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 200, BasaltParser::RuleContinueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
    continueKeyword();
    setState(675);
    semicolon();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

BasaltParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::IfKeywordContext* BasaltParser::IfStatementContext::ifKeyword() {
  return getRuleContext<BasaltParser::IfKeywordContext>(0);
}

BasaltParser::ParenthesysOpenContext* BasaltParser::IfStatementContext::parenthesysOpen() {
  return getRuleContext<BasaltParser::ParenthesysOpenContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::IfStatementContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::IfStatementContext::parenthesysClose() {
  return getRuleContext<BasaltParser::ParenthesysCloseContext>(0);
}

std::vector<BasaltParser::InstructionBlockContext *> BasaltParser::IfStatementContext::instructionBlock() {
  return getRuleContexts<BasaltParser::InstructionBlockContext>();
}

BasaltParser::InstructionBlockContext* BasaltParser::IfStatementContext::instructionBlock(size_t i) {
  return getRuleContext<BasaltParser::InstructionBlockContext>(i);
}

BasaltParser::ElseKeywordContext* BasaltParser::IfStatementContext::elseKeyword() {
  return getRuleContext<BasaltParser::ElseKeywordContext>(0);
}


size_t BasaltParser::IfStatementContext::getRuleIndex() const {
  return BasaltParser::RuleIfStatement;
}

void BasaltParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void BasaltParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any BasaltParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::IfStatementContext* BasaltParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 202, BasaltParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(677);
    ifKeyword();
    setState(678);
    parenthesysOpen();
    setState(679);
    expression();
    setState(680);
    parenthesysClose();
    setState(681);
    instructionBlock();
    setState(685);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(682);
      elseKeyword();
      setState(683);
      instructionBlock();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

BasaltParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::WhileKeywordContext* BasaltParser::WhileLoopContext::whileKeyword() {
  return getRuleContext<BasaltParser::WhileKeywordContext>(0);
}

BasaltParser::ParenthesysOpenContext* BasaltParser::WhileLoopContext::parenthesysOpen() {
  return getRuleContext<BasaltParser::ParenthesysOpenContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::WhileLoopContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::WhileLoopContext::parenthesysClose() {
  return getRuleContext<BasaltParser::ParenthesysCloseContext>(0);
}

BasaltParser::InstructionBlockContext* BasaltParser::WhileLoopContext::instructionBlock() {
  return getRuleContext<BasaltParser::InstructionBlockContext>(0);
}


size_t BasaltParser::WhileLoopContext::getRuleIndex() const {
  return BasaltParser::RuleWhileLoop;
}

void BasaltParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}

void BasaltParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}


antlrcpp::Any BasaltParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::WhileLoopContext* BasaltParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 204, BasaltParser::RuleWhileLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(687);
    whileKeyword();
    setState(688);
    parenthesysOpen();
    setState(689);
    expression();
    setState(690);
    parenthesysClose();
    setState(691);
    instructionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UntilLoopContext ------------------------------------------------------------------

BasaltParser::UntilLoopContext::UntilLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::UntilKeywordContext* BasaltParser::UntilLoopContext::untilKeyword() {
  return getRuleContext<BasaltParser::UntilKeywordContext>(0);
}

BasaltParser::ParenthesysOpenContext* BasaltParser::UntilLoopContext::parenthesysOpen() {
  return getRuleContext<BasaltParser::ParenthesysOpenContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::UntilLoopContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::UntilLoopContext::parenthesysClose() {
  return getRuleContext<BasaltParser::ParenthesysCloseContext>(0);
}

BasaltParser::InstructionBlockContext* BasaltParser::UntilLoopContext::instructionBlock() {
  return getRuleContext<BasaltParser::InstructionBlockContext>(0);
}


size_t BasaltParser::UntilLoopContext::getRuleIndex() const {
  return BasaltParser::RuleUntilLoop;
}

void BasaltParser::UntilLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntilLoop(this);
}

void BasaltParser::UntilLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntilLoop(this);
}


antlrcpp::Any BasaltParser::UntilLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitUntilLoop(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::UntilLoopContext* BasaltParser::untilLoop() {
  UntilLoopContext *_localctx = _tracker.createInstance<UntilLoopContext>(_ctx, getState());
  enterRule(_localctx, 206, BasaltParser::RuleUntilLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(693);
    untilKeyword();
    setState(694);
    parenthesysOpen();
    setState(695);
    expression();
    setState(696);
    parenthesysClose();
    setState(697);
    instructionBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

BasaltParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::SwitchKeywordContext* BasaltParser::SwitchStatementContext::switchKeyword() {
  return getRuleContext<BasaltParser::SwitchKeywordContext>(0);
}

BasaltParser::ParenthesysOpenContext* BasaltParser::SwitchStatementContext::parenthesysOpen() {
  return getRuleContext<BasaltParser::ParenthesysOpenContext>(0);
}

BasaltParser::ExpressionContext* BasaltParser::SwitchStatementContext::expression() {
  return getRuleContext<BasaltParser::ExpressionContext>(0);
}

BasaltParser::ParenthesysCloseContext* BasaltParser::SwitchStatementContext::parenthesysClose() {
  return getRuleContext<BasaltParser::ParenthesysCloseContext>(0);
}

BasaltParser::CurlyBracketsOpenContext* BasaltParser::SwitchStatementContext::curlyBracketsOpen() {
  return getRuleContext<BasaltParser::CurlyBracketsOpenContext>(0);
}

BasaltParser::CurlyBracketsCloseContext* BasaltParser::SwitchStatementContext::curlyBracketsClose() {
  return getRuleContext<BasaltParser::CurlyBracketsCloseContext>(0);
}

std::vector<BasaltParser::SwitchCaseContext *> BasaltParser::SwitchStatementContext::switchCase() {
  return getRuleContexts<BasaltParser::SwitchCaseContext>();
}

BasaltParser::SwitchCaseContext* BasaltParser::SwitchStatementContext::switchCase(size_t i) {
  return getRuleContext<BasaltParser::SwitchCaseContext>(i);
}


size_t BasaltParser::SwitchStatementContext::getRuleIndex() const {
  return BasaltParser::RuleSwitchStatement;
}

void BasaltParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void BasaltParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}


antlrcpp::Any BasaltParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SwitchStatementContext* BasaltParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 208, BasaltParser::RuleSwitchStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(699);
    switchKeyword();
    setState(700);
    parenthesysOpen();
    setState(701);
    expression();
    setState(702);
    parenthesysClose();
    setState(703);
    curlyBracketsOpen();
    setState(707);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BasaltParser::DEFAULT

    || _la == BasaltParser::ID) {
      setState(704);
      switchCase();
      setState(709);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(710);
    curlyBracketsClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchCaseContext ------------------------------------------------------------------

BasaltParser::SwitchCaseContext::SwitchCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasaltParser::DefaultKeywordContext* BasaltParser::SwitchCaseContext::defaultKeyword() {
  return getRuleContext<BasaltParser::DefaultKeywordContext>(0);
}

BasaltParser::InstructionBlockContext* BasaltParser::SwitchCaseContext::instructionBlock() {
  return getRuleContext<BasaltParser::InstructionBlockContext>(0);
}

BasaltParser::IdentifierContext* BasaltParser::SwitchCaseContext::identifier() {
  return getRuleContext<BasaltParser::IdentifierContext>(0);
}

BasaltParser::ColonContext* BasaltParser::SwitchCaseContext::colon() {
  return getRuleContext<BasaltParser::ColonContext>(0);
}

BasaltParser::TypeSignatureContext* BasaltParser::SwitchCaseContext::typeSignature() {
  return getRuleContext<BasaltParser::TypeSignatureContext>(0);
}


size_t BasaltParser::SwitchCaseContext::getRuleIndex() const {
  return BasaltParser::RuleSwitchCase;
}

void BasaltParser::SwitchCaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchCase(this);
}

void BasaltParser::SwitchCaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasaltParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchCase(this);
}


antlrcpp::Any BasaltParser::SwitchCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasaltParserVisitor*>(visitor))
    return parserVisitor->visitSwitchCase(this);
  else
    return visitor->visitChildren(this);
}

BasaltParser::SwitchCaseContext* BasaltParser::switchCase() {
  SwitchCaseContext *_localctx = _tracker.createInstance<SwitchCaseContext>(_ctx, getState());
  enterRule(_localctx, 210, BasaltParser::RuleSwitchCase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(720);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasaltParser::DEFAULT: {
        enterOuterAlt(_localctx, 1);
        setState(712);
        defaultKeyword();
        setState(713);
        instructionBlock();
        break;
      }

      case BasaltParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(715);
        identifier();
        setState(716);
        colon();
        setState(717);
        typeSignature();
        setState(718);
        instructionBlock();
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

// Static vars and initialization.
std::vector<dfa::DFA> BasaltParser::_decisionToDFA;
atn::PredictionContextCache BasaltParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BasaltParser::_atn;
std::vector<uint16_t> BasaltParser::_serializedATN;

std::vector<std::string> BasaltParser::_ruleNames = {
  "program", "definition", "arrow", "pointerDereference", "pointerSymbol", 
  "sliceSymbol", "addressOf", "squareBracketsOpen", "squareBracketsClose", 
  "parenthesysOpen", "parenthesysClose", "curlyBracketsOpen", "curlyBracketsClose", 
  "comma", "semicolon", "colon", "dot", "plus", "minus", "star", "div", 
  "mod", "pow", "logicalAnd", "logicalOr", "logicalXor", "logicalNot", "logicalEqual", 
  "logicalNotEqual", "logicalGt", "logicalLt", "logicalGe", "logicalLe", 
  "inc", "dec", "assign", "addeq", "subeq", "muleq", "diveq", "modeq", "poweq", 
  "diamondOpen", "diamondClose", "varKeyword", "constKeyword", "structKeyword", 
  "unionKeyword", "funcKeyword", "returnKeyword", "breakKeyword", "continueKeyword", 
  "ifKeyword", "elseKeyword", "whileKeyword", "untilKeyword", "switchKeyword", 
  "defaultKeyword", "identifier", "typeName", "primitiveType", "intLiteral", 
  "floatLiteral", "boolLiteral", "charLiteral", "stringLiteral", "nullKeyword", 
  "variableDeclaration", "constDeclaration", "structDefinition", "structField", 
  "unionDefinition", "functionDefinition", "functionDefinitionArgumentsSection", 
  "functionDefinitionArgumentsList", "functionReturnTypeSection", "functionCall", 
  "functionCallStatement", "actualFunctionCallArgumentsSection", "typeSignature", 
  "customType", "pointerType", "sliceType", "arrayType", "actualTypeParametersSection", 
  "formalTypeParametersSection", "expression", "terminalExpression", "infixOperator", 
  "dotMemberAccess", "prefixOperator", "squareBracketsAccess", "arrayLiteral", 
  "parenthesysDelimitedExpression", "instructionBlock", "multilineScopedInstructionBlock", 
  "assignment", "statement", "returnStatement", "breakStatement", "continueStatement", 
  "ifStatement", "whileLoop", "untilLoop", "switchStatement", "switchCase"
};

std::vector<std::string> BasaltParser::_literalNames = {
  "", "'struct'", "'union'", "'switch'", "'default'", "'func'", "'return'", 
  "'break'", "'continue'", "'if'", "'else'", "'while'", "'until'", "'var'", 
  "'const'", "'null'", "", "", "", "", "", "", "", "", "", "", "'('", "')'", 
  "'{'", "'}'", "'['", "']'", "';'", "','", "':'", "'.'", "'='", "'>'", 
  "'<'", "'!'", "'~'", "'\u003F'", "'=='", "'<='", "'>='", "'!='", "'&&'", 
  "'||'", "'++'", "'--'", "'+'", "'-'", "'*'", "'/'", "'&'", "'|'", "'^'", 
  "'%'", "'+='", "'-='", "'*='", "'/='", "'&='", "'|='", "'^='", "'%='", 
  "'^^'", "'->'", "'::'", "'#'", "'$'", "'@'", "'...'"
};

std::vector<std::string> BasaltParser::_symbolicNames = {
  "", "STRUCT", "UNION", "SWITCH", "DEFAULT", "FUNC", "RETURN", "BREAK", 
  "CONTINUE", "IF", "ELSE", "WHILE", "UNTIL", "VAR", "CONST", "NULLK", "INT_LITERAL", 
  "FLOAT_LITERAL", "BOOL_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "BASETYPE", 
  "ID", "TYPENAME", "FUNCNAME", "WS", "LPAREN", "RPAREN", "LBRACE", "RBRACE", 
  "LBRACK", "RBRACK", "SEMICOLON", "COMMA", "COLON", "DOT", "EQ", "GT", 
  "LT", "NOT", "TILDE", "QUESTION", "EQUAL", "LE", "GE", "NOTEQUAL", "AND", 
  "OR", "INC", "DEC", "PLUS", "MINUS", "MUL", "DIV", "BITAND", "BITOR", 
  "POW", "MOD", "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ", "ANDEQ", "OREQ", "POWEQ", 
  "MODEQ", "XOR", "ARROW", "COLONSQ", "HASHTAG", "DOLLAR", "AT", "ELLIPSIS"
};

dfa::Vocabulary BasaltParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BasaltParser::_tokenNames;

BasaltParser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x4a, 0x2d5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x3, 0x2, 0x7, 0x2, 0xd8, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
       0xdb, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0xe4, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 
       0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x176, 0xa, 0x45, 0x3, 0x46, 0x3, 
       0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
       0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x183, 0xa, 0x47, 
       0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x187, 0xa, 0x47, 0xc, 0x47, 0xe, 
       0x47, 0x18a, 0xb, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 
       0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
       0x5, 0x49, 0x196, 0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x19a, 
       0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x19d, 0xb, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x1a4, 0xa, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x1a8, 0xa, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x1ae, 0xa, 0x4b, 0x3, 0x4b, 
       0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x7, 0x4c, 0x1ba, 0xa, 0x4c, 0xc, 
       0x4c, 0xe, 0x4c, 0x1bd, 0xb, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x1c4, 0xa, 0x4e, 0x3, 0x4e, 0x3, 
       0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x7, 0x50, 0x1d0, 0xa, 0x50, 0xc, 0x50, 
       0xe, 0x50, 0x1d3, 0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x5, 0x50, 0x1da, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 
       0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x1e1, 0xa, 0x51, 0x3, 
       0x52, 0x3, 0x52, 0x5, 0x52, 0x1e5, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x1f7, 0xa, 0x56, 0xc, 0x56, 0xe, 
       0x56, 0x1fa, 0xb, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x7, 0x57, 0x203, 0xa, 0x57, 0xc, 
       0x57, 0xe, 0x57, 0x206, 0xb, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 
       0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x20d, 0xa, 0x58, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x21a, 0xa, 0x59, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
       0x3, 0x5a, 0x5, 0x5a, 0x223, 0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x22c, 
       0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x237, 0xa, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x23b, 0xa, 0x5a, 0x3, 0x5b, 
       0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x6, 0x5b, 0x241, 0xa, 0x5b, 0xd, 
       0x5b, 0xe, 0x5b, 0x242, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
       0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x24b, 0xa, 0x5c, 0x3, 0x5c, 0x3, 
       0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x253, 
       0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x6, 0x5d, 
       0x259, 0xa, 0x5d, 0xd, 0x5d, 0xe, 0x5d, 0x25a, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x7, 0x5e, 0x265, 0xa, 0x5e, 0xc, 0x5e, 0xe, 0x5e, 0x268, 0xb, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x272, 0xa, 0x60, 0x3, 0x61, 0x3, 
       0x61, 0x7, 0x61, 0x276, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x279, 0xb, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
       0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
       0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x289, 0xa, 0x62, 0x3, 0x62, 
       0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x28e, 0xa, 0x62, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x29a, 0xa, 0x63, 0x3, 0x64, 
       0x3, 0x64, 0x5, 0x64, 0x29e, 0xa, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
       0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
       0x67, 0x3, 0x67, 0x5, 0x67, 0x2b0, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 
       0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x7, 0x6a, 0x2c4, 0xa, 
       0x6a, 0xc, 0x6a, 0xe, 0x6a, 0x2c7, 0xb, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x2d3, 0xa, 0x6b, 0x3, 0x6b, 0x2, 
       0x2, 0x6c, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
       0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
       0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
       0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
       0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
       0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
       0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 
       0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 
       0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 
       0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0x2, 0x2, 0x2, 0x2bd, 0x2, 
       0xd9, 0x3, 0x2, 0x2, 0x2, 0x4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x6, 0xe5, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xa, 0xe9, 0x3, 
       0x2, 0x2, 0x2, 0xc, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0x10, 0xef, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf1, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x16, 0xf5, 0x3, 0x2, 0x2, 0x2, 
       0x18, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x20, 0xff, 
       0x3, 0x2, 0x2, 0x2, 0x22, 0x101, 0x3, 0x2, 0x2, 0x2, 0x24, 0x103, 
       0x3, 0x2, 0x2, 0x2, 0x26, 0x105, 0x3, 0x2, 0x2, 0x2, 0x28, 0x107, 
       0x3, 0x2, 0x2, 0x2, 0x2a, 0x109, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0x2e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x10f, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x111, 0x3, 0x2, 0x2, 0x2, 0x34, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x36, 0x115, 0x3, 0x2, 0x2, 0x2, 0x38, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x3a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x11b, 
       0x3, 0x2, 0x2, 0x2, 0x3e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x11f, 
       0x3, 0x2, 0x2, 0x2, 0x42, 0x121, 0x3, 0x2, 0x2, 0x2, 0x44, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x46, 0x125, 0x3, 0x2, 0x2, 0x2, 0x48, 0x127, 
       0x3, 0x2, 0x2, 0x2, 0x4a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x12b, 
       0x3, 0x2, 0x2, 0x2, 0x4e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0x52, 0x131, 0x3, 0x2, 0x2, 0x2, 0x54, 0x133, 
       0x3, 0x2, 0x2, 0x2, 0x56, 0x135, 0x3, 0x2, 0x2, 0x2, 0x58, 0x137, 
       0x3, 0x2, 0x2, 0x2, 0x5a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x13b, 
       0x3, 0x2, 0x2, 0x2, 0x5e, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x13f, 
       0x3, 0x2, 0x2, 0x2, 0x62, 0x141, 0x3, 0x2, 0x2, 0x2, 0x64, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x66, 0x145, 0x3, 0x2, 0x2, 0x2, 0x68, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x6a, 0x149, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x6e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x72, 0x151, 0x3, 0x2, 0x2, 0x2, 0x74, 0x153, 
       0x3, 0x2, 0x2, 0x2, 0x76, 0x155, 0x3, 0x2, 0x2, 0x2, 0x78, 0x157, 
       0x3, 0x2, 0x2, 0x2, 0x7a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x7e, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x15f, 
       0x3, 0x2, 0x2, 0x2, 0x82, 0x161, 0x3, 0x2, 0x2, 0x2, 0x84, 0x163, 
       0x3, 0x2, 0x2, 0x2, 0x86, 0x165, 0x3, 0x2, 0x2, 0x2, 0x88, 0x175, 
       0x3, 0x2, 0x2, 0x2, 0x8a, 0x177, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x17f, 
       0x3, 0x2, 0x2, 0x2, 0x8e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x192, 
       0x3, 0x2, 0x2, 0x2, 0x92, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x94, 0x1ab, 
       0x3, 0x2, 0x2, 0x2, 0x96, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x98, 0x1be, 
       0x3, 0x2, 0x2, 0x2, 0x9a, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x1c7, 
       0x3, 0x2, 0x2, 0x2, 0x9e, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x1e0, 
       0x3, 0x2, 0x2, 0x2, 0xa2, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x1e6, 
       0x3, 0x2, 0x2, 0x2, 0xa6, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x1ec, 
       0x3, 0x2, 0x2, 0x2, 0xaa, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0xac, 0x1fd, 
       0x3, 0x2, 0x2, 0x2, 0xae, 0x20c, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x219, 
       0x3, 0x2, 0x2, 0x2, 0xb2, 0x23a, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x23c, 
       0x3, 0x2, 0x2, 0x2, 0xb6, 0x24a, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x252, 
       0x3, 0x2, 0x2, 0x2, 0xba, 0x25c, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x26b, 
       0x3, 0x2, 0x2, 0x2, 0xbe, 0x271, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x273, 
       0x3, 0x2, 0x2, 0x2, 0xc2, 0x28d, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x299, 
       0x3, 0x2, 0x2, 0x2, 0xc6, 0x29b, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x2a1, 
       0x3, 0x2, 0x2, 0x2, 0xca, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x2a7, 
       0x3, 0x2, 0x2, 0x2, 0xce, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x2b7, 
       0x3, 0x2, 0x2, 0x2, 0xd2, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x5, 0x4, 0x3, 0x2, 0xd7, 0xd6, 0x3, 
       0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 
       0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 
       0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x2, 0x2, 0x3, 
       0xdd, 0x3, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe4, 0x5, 0x8c, 0x47, 0x2, 
       0xdf, 0xe4, 0x5, 0x90, 0x49, 0x2, 0xe0, 0xe4, 0x5, 0x92, 0x4a, 0x2, 
       0xe1, 0xe4, 0x5, 0x88, 0x45, 0x2, 0xe2, 0xe4, 0x5, 0x8a, 0x46, 0x2, 
       0xe3, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe3, 
       0xe0, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe2, 
       0x3, 0x2, 0x2, 0x2, 0xe4, 0x5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 
       0x45, 0x2, 0x2, 0xe6, 0x7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x47, 
       0x2, 0x2, 0xe8, 0x9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x47, 0x2, 
       0x2, 0xea, 0xb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x47, 0x2, 0x2, 
       0xec, 0xd, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 0x38, 0x2, 0x2, 0xee, 
       0xf, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x20, 0x2, 0x2, 0xf0, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x21, 0x2, 0x2, 0xf2, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x1c, 0x2, 0x2, 0xf4, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x1d, 0x2, 0x2, 0xf6, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x1e, 0x2, 0x2, 0xf8, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x1f, 0x2, 0x2, 0xfa, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x23, 0x2, 0x2, 0xfc, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x22, 0x2, 0x2, 0xfe, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x7, 0x24, 0x2, 0x2, 0x100, 0x21, 
       0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x7, 0x25, 0x2, 0x2, 0x102, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x7, 0x34, 0x2, 0x2, 0x104, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x35, 0x2, 0x2, 0x106, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x36, 0x2, 0x2, 0x108, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x37, 0x2, 0x2, 0x10a, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x3b, 0x2, 0x2, 0x10c, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x3a, 0x2, 0x2, 0x10e, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x30, 0x2, 0x2, 0x110, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x31, 0x2, 0x2, 0x112, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x44, 0x2, 0x2, 0x114, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x7, 0x29, 0x2, 0x2, 0x116, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 0x2c, 0x2, 0x2, 0x118, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x2f, 0x2, 0x2, 0x11a, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x27, 0x2, 0x2, 0x11c, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x28, 0x2, 0x2, 0x11e, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x7, 0x2e, 0x2, 0x2, 0x120, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0x2d, 0x2, 0x2, 0x122, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0x32, 0x2, 0x2, 0x124, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x33, 0x2, 0x2, 0x126, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x7, 0x26, 0x2, 0x2, 0x128, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x7, 0x3c, 0x2, 0x2, 0x12a, 0x4b, 
       0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x3d, 0x2, 0x2, 0x12c, 0x4d, 
       0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x7, 0x3e, 0x2, 0x2, 0x12e, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x3f, 0x2, 0x2, 0x130, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0x43, 0x2, 0x2, 0x132, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x42, 0x2, 0x2, 0x134, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0x28, 0x2, 0x2, 0x136, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 0x27, 0x2, 0x2, 0x138, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0xf, 0x2, 0x2, 0x13a, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x10, 0x2, 0x2, 0x13c, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x7, 0x3, 0x2, 0x2, 0x13e, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x4, 0x2, 0x2, 0x140, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x7, 0x7, 0x2, 0x2, 0x142, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x8, 0x2, 0x2, 0x144, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x7, 0x9, 0x2, 0x2, 0x146, 0x67, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 0xa, 0x2, 0x2, 0x148, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0xb, 0x2, 0x2, 0x14a, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0xc, 0x2, 0x2, 0x14c, 0x6d, 
       0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0xd, 0x2, 0x2, 0x14e, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x7, 0xe, 0x2, 0x2, 0x150, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x7, 0x5, 0x2, 0x2, 0x152, 0x73, 
       0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x7, 0x6, 0x2, 0x2, 0x154, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x7, 0x18, 0x2, 0x2, 0x156, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x7, 0x19, 0x2, 0x2, 0x158, 0x79, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x17, 0x2, 0x2, 0x15a, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x12, 0x2, 0x2, 0x15c, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x13, 0x2, 0x2, 0x15e, 0x7f, 
       0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x14, 0x2, 0x2, 0x160, 0x81, 
       0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x15, 0x2, 0x2, 0x162, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x7, 0x16, 0x2, 0x2, 0x164, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x7, 0x11, 0x2, 0x2, 0x166, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x5, 0x5a, 0x2e, 0x2, 0x168, 0x169, 
       0x5, 0x76, 0x3c, 0x2, 0x169, 0x16a, 0x5, 0x20, 0x11, 0x2, 0x16a, 
       0x16b, 0x5, 0xa0, 0x51, 0x2, 0x16b, 0x16c, 0x5, 0x48, 0x25, 0x2, 
       0x16c, 0x16d, 0x5, 0xae, 0x58, 0x2, 0x16d, 0x16e, 0x5, 0x1e, 0x10, 
       0x2, 0x16e, 0x176, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x5, 0x5a, 0x2e, 
       0x2, 0x170, 0x171, 0x5, 0x76, 0x3c, 0x2, 0x171, 0x172, 0x5, 0x20, 
       0x11, 0x2, 0x172, 0x173, 0x5, 0xa0, 0x51, 0x2, 0x173, 0x174, 0x5, 
       0x1e, 0x10, 0x2, 0x174, 0x176, 0x3, 0x2, 0x2, 0x2, 0x175, 0x167, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x176, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x5, 0x5c, 0x2f, 0x2, 0x178, 0x179, 
       0x5, 0x76, 0x3c, 0x2, 0x179, 0x17a, 0x5, 0x20, 0x11, 0x2, 0x17a, 
       0x17b, 0x5, 0xa0, 0x51, 0x2, 0x17b, 0x17c, 0x5, 0x48, 0x25, 0x2, 
       0x17c, 0x17d, 0x5, 0xae, 0x58, 0x2, 0x17d, 0x17e, 0x5, 0x1e, 0x10, 
       0x2, 0x17e, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x5e, 0x30, 
       0x2, 0x180, 0x182, 0x5, 0x78, 0x3d, 0x2, 0x181, 0x183, 0x5, 0xac, 
       0x57, 0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 
       0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 0x184, 0x188, 0x5, 0x18, 
       0xd, 0x2, 0x185, 0x187, 0x5, 0x8e, 0x48, 0x2, 0x186, 0x185, 0x3, 
       0x2, 0x2, 0x2, 0x187, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 
       0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18b, 0x3, 
       0x2, 0x2, 0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x5, 
       0x1a, 0xe, 0x2, 0x18c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x5, 
       0x76, 0x3c, 0x2, 0x18e, 0x18f, 0x5, 0x20, 0x11, 0x2, 0x18f, 0x190, 
       0x5, 0xa0, 0x51, 0x2, 0x190, 0x191, 0x5, 0x1e, 0x10, 0x2, 0x191, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x5, 0x60, 0x31, 0x2, 0x193, 
       0x195, 0x5, 0x78, 0x3d, 0x2, 0x194, 0x196, 0x5, 0xac, 0x57, 0x2, 
       0x195, 0x194, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 
       0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19b, 0x5, 0x18, 0xd, 0x2, 
       0x198, 0x19a, 0x5, 0xa0, 0x51, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 
       0x2, 0x19a, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 0x3, 0x2, 0x2, 
       0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19e, 0x3, 0x2, 0x2, 
       0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x5, 0x1a, 0xe, 
       0x2, 0x19f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x5, 0x62, 0x32, 
       0x2, 0x1a1, 0x1a3, 0x5, 0x76, 0x3c, 0x2, 0x1a2, 0x1a4, 0x5, 0xac, 
       0x57, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 
       0x2, 0x2, 0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a7, 0x5, 0x94, 
       0x4b, 0x2, 0x1a6, 0x1a8, 0x5, 0x98, 0x4d, 0x2, 0x1a7, 0x1a6, 0x3, 
       0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 
       0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x5, 0xc0, 0x61, 0x2, 0x1aa, 0x93, 0x3, 
       0x2, 0x2, 0x2, 0x1ab, 0x1ad, 0x5, 0x14, 0xb, 0x2, 0x1ac, 0x1ae, 0x5, 
       0x96, 0x4c, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 
       0x5, 0x16, 0xc, 0x2, 0x1b0, 0x95, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 
       0x5, 0x76, 0x3c, 0x2, 0x1b2, 0x1b3, 0x5, 0x20, 0x11, 0x2, 0x1b3, 
       0x1bb, 0x5, 0xa0, 0x51, 0x2, 0x1b4, 0x1b5, 0x5, 0x1c, 0xf, 0x2, 0x1b5, 
       0x1b6, 0x5, 0x76, 0x3c, 0x2, 0x1b6, 0x1b7, 0x5, 0x20, 0x11, 0x2, 
       0x1b7, 0x1b8, 0x5, 0xa0, 0x51, 0x2, 0x1b8, 0x1ba, 0x3, 0x2, 0x2, 
       0x2, 0x1b9, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bd, 0x3, 0x2, 0x2, 
       0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 
       0x2, 0x1bc, 0x97, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 
       0x2, 0x1be, 0x1bf, 0x5, 0x20, 0x11, 0x2, 0x1bf, 0x1c0, 0x5, 0xa0, 
       0x51, 0x2, 0x1c0, 0x99, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c3, 0x5, 0x76, 
       0x3c, 0x2, 0x1c2, 0x1c4, 0x5, 0xaa, 0x56, 0x2, 0x1c3, 0x1c2, 0x3, 
       0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x3, 
       0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x9e, 0x50, 0x2, 0x1c6, 0x9b, 0x3, 
       0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x5, 0x9a, 0x4e, 0x2, 0x1c8, 0x1c9, 
       0x5, 0x1e, 0x10, 0x2, 0x1c9, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 
       0x5, 0x14, 0xb, 0x2, 0x1cb, 0x1d1, 0x5, 0xae, 0x58, 0x2, 0x1cc, 0x1cd, 
       0x5, 0x1c, 0xf, 0x2, 0x1cd, 0x1ce, 0x5, 0xae, 0x58, 0x2, 0x1ce, 0x1d0, 
       0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d3, 
       0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 
       0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d1, 
       0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0x16, 0xc, 0x2, 0x1d5, 0x1da, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x5, 0x14, 0xb, 0x2, 0x1d7, 0x1d8, 
       0x5, 0x16, 0xc, 0x2, 0x1d8, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1ca, 
       0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x9f, 
       0x3, 0x2, 0x2, 0x2, 0x1db, 0x1e1, 0x5, 0x7a, 0x3e, 0x2, 0x1dc, 0x1e1, 
       0x5, 0xa2, 0x52, 0x2, 0x1dd, 0x1e1, 0x5, 0xa4, 0x53, 0x2, 0x1de, 
       0x1e1, 0x5, 0xa6, 0x54, 0x2, 0x1df, 0x1e1, 0x5, 0xa8, 0x55, 0x2, 
       0x1e0, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
       0x1e0, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 
       0x1e0, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0xa1, 0x3, 0x2, 0x2, 0x2, 
       0x1e2, 0x1e4, 0x5, 0x78, 0x3d, 0x2, 0x1e3, 0x1e5, 0x5, 0xaa, 0x56, 
       0x2, 0x1e4, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 0x2, 
       0x2, 0x1e5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x5, 0xa, 0x6, 
       0x2, 0x1e7, 0x1e8, 0x5, 0xa0, 0x51, 0x2, 0x1e8, 0xa5, 0x3, 0x2, 0x2, 
       0x2, 0x1e9, 0x1ea, 0x5, 0xc, 0x7, 0x2, 0x1ea, 0x1eb, 0x5, 0xa0, 0x51, 
       0x2, 0x1eb, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x5, 0x10, 0x9, 
       0x2, 0x1ed, 0x1ee, 0x5, 0x7c, 0x3f, 0x2, 0x1ee, 0x1ef, 0x5, 0x12, 
       0xa, 0x2, 0x1ef, 0x1f0, 0x5, 0xa0, 0x51, 0x2, 0x1f0, 0xa9, 0x3, 0x2, 
       0x2, 0x2, 0x1f1, 0x1f2, 0x5, 0x56, 0x2c, 0x2, 0x1f2, 0x1f8, 0x5, 
       0xa0, 0x51, 0x2, 0x1f3, 0x1f4, 0x5, 0x1c, 0xf, 0x2, 0x1f4, 0x1f5, 
       0x5, 0xa0, 0x51, 0x2, 0x1f5, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f3, 
       0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 
       0x5, 0x58, 0x2d, 0x2, 0x1fc, 0xab, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 
       0x5, 0x56, 0x2c, 0x2, 0x1fe, 0x204, 0x5, 0x78, 0x3d, 0x2, 0x1ff, 
       0x200, 0x5, 0x1c, 0xf, 0x2, 0x200, 0x201, 0x5, 0x78, 0x3d, 0x2, 0x201, 
       0x203, 0x3, 0x2, 0x2, 0x2, 0x202, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x203, 
       0x206, 0x3, 0x2, 0x2, 0x2, 0x204, 0x202, 0x3, 0x2, 0x2, 0x2, 0x204, 
       0x205, 0x3, 0x2, 0x2, 0x2, 0x205, 0x207, 0x3, 0x2, 0x2, 0x2, 0x206, 
       0x204, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x5, 0x58, 0x2d, 0x2, 0x208, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20d, 0x5, 0xb0, 0x59, 0x2, 0x20a, 
       0x20d, 0x5, 0xb2, 0x5a, 0x2, 0x20b, 0x20d, 0x5, 0xb4, 0x5b, 0x2, 
       0x20c, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 
       0x20c, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20d, 0xaf, 0x3, 0x2, 0x2, 0x2, 
       0x20e, 0x21a, 0x5, 0xb8, 0x5d, 0x2, 0x20f, 0x21a, 0x5, 0xba, 0x5e, 
       0x2, 0x210, 0x21a, 0x5, 0x9a, 0x4e, 0x2, 0x211, 0x21a, 0x5, 0xbc, 
       0x5f, 0x2, 0x212, 0x21a, 0x5, 0xb6, 0x5c, 0x2, 0x213, 0x21a, 0x5, 
       0x7c, 0x3f, 0x2, 0x214, 0x21a, 0x5, 0x7e, 0x40, 0x2, 0x215, 0x21a, 
       0x5, 0x82, 0x42, 0x2, 0x216, 0x21a, 0x5, 0x84, 0x43, 0x2, 0x217, 
       0x21a, 0x5, 0x80, 0x41, 0x2, 0x218, 0x21a, 0x5, 0x76, 0x3c, 0x2, 
       0x219, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x219, 0x20f, 0x3, 0x2, 0x2, 0x2, 
       0x219, 0x210, 0x3, 0x2, 0x2, 0x2, 0x219, 0x211, 0x3, 0x2, 0x2, 0x2, 
       0x219, 0x212, 0x3, 0x2, 0x2, 0x2, 0x219, 0x213, 0x3, 0x2, 0x2, 0x2, 
       0x219, 0x214, 0x3, 0x2, 0x2, 0x2, 0x219, 0x215, 0x3, 0x2, 0x2, 0x2, 
       0x219, 0x216, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 
       0x219, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0xb1, 0x3, 0x2, 0x2, 0x2, 
       0x21b, 0x222, 0x5, 0xb0, 0x59, 0x2, 0x21c, 0x223, 0x5, 0x24, 0x13, 
       0x2, 0x21d, 0x223, 0x5, 0x26, 0x14, 0x2, 0x21e, 0x223, 0x5, 0x28, 
       0x15, 0x2, 0x21f, 0x223, 0x5, 0x2a, 0x16, 0x2, 0x220, 0x223, 0x5, 
       0x2e, 0x18, 0x2, 0x221, 0x223, 0x5, 0x2c, 0x17, 0x2, 0x222, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x222, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x222, 0x21e, 
       0x3, 0x2, 0x2, 0x2, 0x222, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 
       0x3, 0x2, 0x2, 0x2, 0x222, 0x221, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x5, 0xae, 0x58, 0x2, 0x225, 0x23b, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x22b, 0x5, 0xb0, 0x59, 0x2, 0x227, 0x22c, 
       0x5, 0x30, 0x19, 0x2, 0x228, 0x22c, 0x5, 0x32, 0x1a, 0x2, 0x229, 
       0x22c, 0x5, 0x38, 0x1d, 0x2, 0x22a, 0x22c, 0x5, 0x3a, 0x1e, 0x2, 
       0x22b, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x228, 0x3, 0x2, 0x2, 0x2, 
       0x22b, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22a, 0x3, 0x2, 0x2, 0x2, 
       0x22c, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x5, 0xae, 0x58, 
       0x2, 0x22e, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x236, 0x5, 0xb0, 0x59, 
       0x2, 0x230, 0x237, 0x5, 0x3c, 0x1f, 0x2, 0x231, 0x237, 0x5, 0x3e, 
       0x20, 0x2, 0x232, 0x237, 0x5, 0x42, 0x22, 0x2, 0x233, 0x237, 0x5, 
       0x40, 0x21, 0x2, 0x234, 0x237, 0x5, 0x38, 0x1d, 0x2, 0x235, 0x237, 
       0x5, 0x3a, 0x1e, 0x2, 0x236, 0x230, 0x3, 0x2, 0x2, 0x2, 0x236, 0x231, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x232, 0x3, 0x2, 0x2, 0x2, 0x236, 0x233, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 
       0x5, 0xae, 0x58, 0x2, 0x239, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x21b, 
       0x3, 0x2, 0x2, 0x2, 0x23a, 0x226, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x23b, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x240, 
       0x5, 0xb0, 0x59, 0x2, 0x23d, 0x23e, 0x5, 0x22, 0x12, 0x2, 0x23e, 
       0x23f, 0x5, 0x76, 0x3c, 0x2, 0x23f, 0x241, 0x3, 0x2, 0x2, 0x2, 0x240, 
       0x23d, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 
       0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 
       0xb5, 0x3, 0x2, 0x2, 0x2, 0x244, 0x24b, 0x5, 0x8, 0x5, 0x2, 0x245, 
       0x24b, 0x5, 0x36, 0x1c, 0x2, 0x246, 0x24b, 0x5, 0x24, 0x13, 0x2, 
       0x247, 0x24b, 0x5, 0x26, 0x14, 0x2, 0x248, 0x24b, 0x5, 0x44, 0x23, 
       0x2, 0x249, 0x24b, 0x5, 0x46, 0x24, 0x2, 0x24a, 0x244, 0x3, 0x2, 
       0x2, 0x2, 0x24a, 0x245, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x246, 0x3, 0x2, 
       0x2, 0x2, 0x24a, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 
       0x2, 0x2, 0x24a, 0x249, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 
       0x2, 0x2, 0x24c, 0x24d, 0x5, 0xae, 0x58, 0x2, 0x24d, 0xb7, 0x3, 0x2, 
       0x2, 0x2, 0x24e, 0x253, 0x5, 0x76, 0x3c, 0x2, 0x24f, 0x253, 0x5, 
       0xbc, 0x5f, 0x2, 0x250, 0x253, 0x5, 0xba, 0x5e, 0x2, 0x251, 0x253, 
       0x5, 0x9a, 0x4e, 0x2, 0x252, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x252, 0x24f, 
       0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 0x251, 
       0x3, 0x2, 0x2, 0x2, 0x253, 0x258, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 
       0x5, 0x10, 0x9, 0x2, 0x255, 0x256, 0x5, 0xae, 0x58, 0x2, 0x256, 0x257, 
       0x5, 0x12, 0xa, 0x2, 0x257, 0x259, 0x3, 0x2, 0x2, 0x2, 0x258, 0x254, 
       0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x258, 
       0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0xb9, 
       0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x10, 0x9, 0x2, 0x25d, 0x25e, 
       0x5, 0xa0, 0x51, 0x2, 0x25e, 0x25f, 0x5, 0x12, 0xa, 0x2, 0x25f, 0x260, 
       0x5, 0x18, 0xd, 0x2, 0x260, 0x266, 0x5, 0xae, 0x58, 0x2, 0x261, 0x262, 
       0x5, 0x1c, 0xf, 0x2, 0x262, 0x263, 0x5, 0xae, 0x58, 0x2, 0x263, 0x265, 
       0x3, 0x2, 0x2, 0x2, 0x264, 0x261, 0x3, 0x2, 0x2, 0x2, 0x265, 0x268, 
       0x3, 0x2, 0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
       0x3, 0x2, 0x2, 0x2, 0x267, 0x269, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 
       0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x5, 0x1a, 0xe, 0x2, 0x26a, 0xbb, 
       0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x5, 0x14, 0xb, 0x2, 0x26c, 0x26d, 
       0x5, 0xae, 0x58, 0x2, 0x26d, 0x26e, 0x5, 0x16, 0xc, 0x2, 0x26e, 0xbd, 
       0x3, 0x2, 0x2, 0x2, 0x26f, 0x272, 0x5, 0xc0, 0x61, 0x2, 0x270, 0x272, 
       0x5, 0xc4, 0x63, 0x2, 0x271, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x270, 
       0x3, 0x2, 0x2, 0x2, 0x272, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x273, 0x277, 
       0x5, 0x18, 0xd, 0x2, 0x274, 0x276, 0x5, 0xc4, 0x63, 0x2, 0x275, 0x274, 
       0x3, 0x2, 0x2, 0x2, 0x276, 0x279, 0x3, 0x2, 0x2, 0x2, 0x277, 0x275, 
       0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 0x2, 0x2, 0x278, 0x27a, 
       0x3, 0x2, 0x2, 0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 
       0x5, 0x1a, 0xe, 0x2, 0x27b, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 
       0x5, 0xae, 0x58, 0x2, 0x27d, 0x27e, 0x5, 0x48, 0x25, 0x2, 0x27e, 
       0x27f, 0x5, 0xae, 0x58, 0x2, 0x27f, 0x280, 0x5, 0x1e, 0x10, 0x2, 
       0x280, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x281, 0x288, 0x5, 0xae, 0x58, 
       0x2, 0x282, 0x289, 0x5, 0x4a, 0x26, 0x2, 0x283, 0x289, 0x5, 0x4c, 
       0x27, 0x2, 0x284, 0x289, 0x5, 0x4e, 0x28, 0x2, 0x285, 0x289, 0x5, 
       0x50, 0x29, 0x2, 0x286, 0x289, 0x5, 0x52, 0x2a, 0x2, 0x287, 0x289, 
       0x5, 0x54, 0x2b, 0x2, 0x288, 0x282, 0x3, 0x2, 0x2, 0x2, 0x288, 0x283, 
       0x3, 0x2, 0x2, 0x2, 0x288, 0x284, 0x3, 0x2, 0x2, 0x2, 0x288, 0x285, 
       0x3, 0x2, 0x2, 0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x288, 0x287, 
       0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 
       0x5, 0xae, 0x58, 0x2, 0x28b, 0x28c, 0x5, 0x1e, 0x10, 0x2, 0x28c, 
       0x28e, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x28d, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x28e, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x28f, 
       0x29a, 0x5, 0x9c, 0x4f, 0x2, 0x290, 0x29a, 0x5, 0xc2, 0x62, 0x2, 
       0x291, 0x29a, 0x5, 0x88, 0x45, 0x2, 0x292, 0x29a, 0x5, 0x8a, 0x46, 
       0x2, 0x293, 0x29a, 0x5, 0xc6, 0x64, 0x2, 0x294, 0x29a, 0x5, 0xc8, 
       0x65, 0x2, 0x295, 0x29a, 0x5, 0xca, 0x66, 0x2, 0x296, 0x29a, 0x5, 
       0xcc, 0x67, 0x2, 0x297, 0x29a, 0x5, 0xce, 0x68, 0x2, 0x298, 0x29a, 
       0x5, 0xd0, 0x69, 0x2, 0x299, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x299, 0x290, 
       0x3, 0x2, 0x2, 0x2, 0x299, 0x291, 0x3, 0x2, 0x2, 0x2, 0x299, 0x292, 
       0x3, 0x2, 0x2, 0x2, 0x299, 0x293, 0x3, 0x2, 0x2, 0x2, 0x299, 0x294, 
       0x3, 0x2, 0x2, 0x2, 0x299, 0x295, 0x3, 0x2, 0x2, 0x2, 0x299, 0x296, 
       0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 0x298, 
       0x3, 0x2, 0x2, 0x2, 0x29a, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29d, 
       0x5, 0x64, 0x33, 0x2, 0x29c, 0x29e, 0x5, 0xae, 0x58, 0x2, 0x29d, 
       0x29c, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x29e, 
       0x29f, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x5, 0x1e, 0x10, 0x2, 0x2a0, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x5, 0x66, 0x34, 0x2, 0x2a2, 
       0x2a3, 0x5, 0x1e, 0x10, 0x2, 0x2a3, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
       0x2a5, 0x5, 0x68, 0x35, 0x2, 0x2a5, 0x2a6, 0x5, 0x1e, 0x10, 0x2, 
       0x2a6, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 0x5, 0x6a, 0x36, 0x2, 
       0x2a8, 0x2a9, 0x5, 0x14, 0xb, 0x2, 0x2a9, 0x2aa, 0x5, 0xae, 0x58, 
       0x2, 0x2aa, 0x2ab, 0x5, 0x16, 0xc, 0x2, 0x2ab, 0x2af, 0x5, 0xbe, 
       0x60, 0x2, 0x2ac, 0x2ad, 0x5, 0x6c, 0x37, 0x2, 0x2ad, 0x2ae, 0x5, 
       0xbe, 0x60, 0x2, 0x2ae, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ac, 
       0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0xcd, 
       0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x5, 0x6e, 0x38, 0x2, 0x2b2, 0x2b3, 
       0x5, 0x14, 0xb, 0x2, 0x2b3, 0x2b4, 0x5, 0xae, 0x58, 0x2, 0x2b4, 0x2b5, 
       0x5, 0x16, 0xc, 0x2, 0x2b5, 0x2b6, 0x5, 0xbe, 0x60, 0x2, 0x2b6, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x5, 0x70, 0x39, 0x2, 0x2b8, 0x2b9, 
       0x5, 0x14, 0xb, 0x2, 0x2b9, 0x2ba, 0x5, 0xae, 0x58, 0x2, 0x2ba, 0x2bb, 
       0x5, 0x16, 0xc, 0x2, 0x2bb, 0x2bc, 0x5, 0xbe, 0x60, 0x2, 0x2bc, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 0x5, 0x72, 0x3a, 0x2, 0x2be, 0x2bf, 
       0x5, 0x14, 0xb, 0x2, 0x2bf, 0x2c0, 0x5, 0xae, 0x58, 0x2, 0x2c0, 0x2c1, 
       0x5, 0x16, 0xc, 0x2, 0x2c1, 0x2c5, 0x5, 0x18, 0xd, 0x2, 0x2c2, 0x2c4, 
       0x5, 0xd4, 0x6b, 0x2, 0x2c3, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 
       0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c5, 
       0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x5, 0x1a, 0xe, 0x2, 0x2c9, 0xd3, 
       0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0x5, 0x74, 0x3b, 0x2, 0x2cb, 0x2cc, 
       0x5, 0xbe, 0x60, 0x2, 0x2cc, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 
       0x5, 0x76, 0x3c, 0x2, 0x2ce, 0x2cf, 0x5, 0x20, 0x11, 0x2, 0x2cf, 
       0x2d0, 0x5, 0xa0, 0x51, 0x2, 0x2d0, 0x2d1, 0x5, 0xbe, 0x60, 0x2, 
       0x2d1, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2ca, 0x3, 0x2, 0x2, 0x2, 
       0x2d2, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0xd5, 0x3, 0x2, 0x2, 0x2, 
       0x28, 0xd9, 0xe3, 0x175, 0x182, 0x188, 0x195, 0x19b, 0x1a3, 0x1a7, 
       0x1ad, 0x1bb, 0x1c3, 0x1d1, 0x1d9, 0x1e0, 0x1e4, 0x1f8, 0x204, 0x20c, 
       0x219, 0x222, 0x22b, 0x236, 0x23a, 0x242, 0x24a, 0x252, 0x25a, 0x266, 
       0x271, 0x277, 0x288, 0x28d, 0x299, 0x29d, 0x2af, 0x2c5, 0x2d2, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BasaltParser::Initializer BasaltParser::_init;
