
// Generated from BasaltParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  BasaltParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleDefinition = 1, RuleArrow = 2, RulePointerDereference = 3, 
    RulePointerSymbol = 4, RuleSliceSymbol = 5, RuleAddressOf = 6, RuleSquareBracketsOpen = 7, 
    RuleSquareBracketsClose = 8, RuleParenthesysOpen = 9, RuleParenthesysClose = 10, 
    RuleCurlyBracketsOpen = 11, RuleCurlyBracketsClose = 12, RuleComma = 13, 
    RuleSemicolon = 14, RuleColon = 15, RuleDot = 16, RulePlus = 17, RuleMinus = 18, 
    RuleStar = 19, RuleDiv = 20, RuleMod = 21, RulePow = 22, RuleLogicalAnd = 23, 
    RuleLogicalOr = 24, RuleLogicalXor = 25, RuleLogicalNot = 26, RuleLogicalEqual = 27, 
    RuleLogicalNotEqual = 28, RuleLogicalGt = 29, RuleLogicalLt = 30, RuleLogicalGe = 31, 
    RuleLogicalLe = 32, RuleInc = 33, RuleDec = 34, RuleAssign = 35, RuleAddeq = 36, 
    RuleSubeq = 37, RuleMuleq = 38, RuleDiveq = 39, RuleModeq = 40, RulePoweq = 41, 
    RuleDiamondOpen = 42, RuleDiamondClose = 43, RuleVarKeyword = 44, RuleConstKeyword = 45, 
    RuleStructKeyword = 46, RuleUnionKeyword = 47, RuleFuncKeyword = 48, 
    RuleReturnKeyword = 49, RuleBreakKeyword = 50, RuleContinueKeyword = 51, 
    RuleIfKeyword = 52, RuleElseKeyword = 53, RuleWhileKeyword = 54, RuleUntilKeyword = 55, 
    RuleSwitchKeyword = 56, RuleDefaultKeyword = 57, RuleIdentifier = 58, 
    RuleTypeName = 59, RulePrimitiveType = 60, RuleIntLiteral = 61, RuleFloatLiteral = 62, 
    RuleBoolLiteral = 63, RuleCharLiteral = 64, RuleStringLiteral = 65, 
    RuleNullKeyword = 66, RuleVariableDeclaration = 67, RuleConstDeclaration = 68, 
    RuleStructDefinition = 69, RuleStructField = 70, RuleUnionDefinition = 71, 
    RuleFunctionDefinition = 72, RuleFunctionDefinitionArgumentsSection = 73, 
    RuleFunctionDefinitionArgumentsList = 74, RuleFunctionReturnTypeSection = 75, 
    RuleFunctionCall = 76, RuleFunctionCallStatement = 77, RuleActualFunctionCallArgumentsSection = 78, 
    RuleTypeSignature = 79, RuleCustomType = 80, RulePointerType = 81, RuleSliceType = 82, 
    RuleArrayType = 83, RuleActualTypeParametersSection = 84, RuleFormalTypeParametersSection = 85, 
    RuleExpression = 86, RuleTerminalExpression = 87, RuleInfixOperator = 88, 
    RuleDotMemberAccess = 89, RulePrefixOperator = 90, RuleSquareBracketsAccess = 91, 
    RuleArrayLiteral = 92, RuleParenthesysDelimitedExpression = 93, RuleInstructionBlock = 94, 
    RuleMultilineScopedInstructionBlock = 95, RuleAssignment = 96, RuleStatement = 97, 
    RuleReturnStatement = 98, RuleBreakStatement = 99, RuleContinueStatement = 100, 
    RuleIfStatement = 101, RuleWhileLoop = 102, RuleUntilLoop = 103, RuleSwitchStatement = 104, 
    RuleSwitchCase = 105
  };

  explicit BasaltParser(antlr4::TokenStream *input);
  ~BasaltParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class DefinitionContext;
  class ArrowContext;
  class PointerDereferenceContext;
  class PointerSymbolContext;
  class SliceSymbolContext;
  class AddressOfContext;
  class SquareBracketsOpenContext;
  class SquareBracketsCloseContext;
  class ParenthesysOpenContext;
  class ParenthesysCloseContext;
  class CurlyBracketsOpenContext;
  class CurlyBracketsCloseContext;
  class CommaContext;
  class SemicolonContext;
  class ColonContext;
  class DotContext;
  class PlusContext;
  class MinusContext;
  class StarContext;
  class DivContext;
  class ModContext;
  class PowContext;
  class LogicalAndContext;
  class LogicalOrContext;
  class LogicalXorContext;
  class LogicalNotContext;
  class LogicalEqualContext;
  class LogicalNotEqualContext;
  class LogicalGtContext;
  class LogicalLtContext;
  class LogicalGeContext;
  class LogicalLeContext;
  class IncContext;
  class DecContext;
  class AssignContext;
  class AddeqContext;
  class SubeqContext;
  class MuleqContext;
  class DiveqContext;
  class ModeqContext;
  class PoweqContext;
  class DiamondOpenContext;
  class DiamondCloseContext;
  class VarKeywordContext;
  class ConstKeywordContext;
  class StructKeywordContext;
  class UnionKeywordContext;
  class FuncKeywordContext;
  class ReturnKeywordContext;
  class BreakKeywordContext;
  class ContinueKeywordContext;
  class IfKeywordContext;
  class ElseKeywordContext;
  class WhileKeywordContext;
  class UntilKeywordContext;
  class SwitchKeywordContext;
  class DefaultKeywordContext;
  class IdentifierContext;
  class TypeNameContext;
  class PrimitiveTypeContext;
  class IntLiteralContext;
  class FloatLiteralContext;
  class BoolLiteralContext;
  class CharLiteralContext;
  class StringLiteralContext;
  class NullKeywordContext;
  class VariableDeclarationContext;
  class ConstDeclarationContext;
  class StructDefinitionContext;
  class StructFieldContext;
  class UnionDefinitionContext;
  class FunctionDefinitionContext;
  class FunctionDefinitionArgumentsSectionContext;
  class FunctionDefinitionArgumentsListContext;
  class FunctionReturnTypeSectionContext;
  class FunctionCallContext;
  class FunctionCallStatementContext;
  class ActualFunctionCallArgumentsSectionContext;
  class TypeSignatureContext;
  class CustomTypeContext;
  class PointerTypeContext;
  class SliceTypeContext;
  class ArrayTypeContext;
  class ActualTypeParametersSectionContext;
  class FormalTypeParametersSectionContext;
  class ExpressionContext;
  class TerminalExpressionContext;
  class InfixOperatorContext;
  class DotMemberAccessContext;
  class PrefixOperatorContext;
  class SquareBracketsAccessContext;
  class ArrayLiteralContext;
  class ParenthesysDelimitedExpressionContext;
  class InstructionBlockContext;
  class MultilineScopedInstructionBlockContext;
  class AssignmentContext;
  class StatementContext;
  class ReturnStatementContext;
  class BreakStatementContext;
  class ContinueStatementContext;
  class IfStatementContext;
  class WhileLoopContext;
  class UntilLoopContext;
  class SwitchStatementContext;
  class SwitchCaseContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructDefinitionContext *structDefinition();
    UnionDefinitionContext *unionDefinition();
    FunctionDefinitionContext *functionDefinition();
    VariableDeclarationContext *variableDeclaration();
    ConstDeclarationContext *constDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  ArrowContext : public antlr4::ParserRuleContext {
  public:
    ArrowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrowContext* arrow();

  class  PointerDereferenceContext : public antlr4::ParserRuleContext {
  public:
    PointerDereferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASHTAG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerDereferenceContext* pointerDereference();

  class  PointerSymbolContext : public antlr4::ParserRuleContext {
  public:
    PointerSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASHTAG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerSymbolContext* pointerSymbol();

  class  SliceSymbolContext : public antlr4::ParserRuleContext {
  public:
    SliceSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASHTAG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SliceSymbolContext* sliceSymbol();

  class  AddressOfContext : public antlr4::ParserRuleContext {
  public:
    AddressOfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITAND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddressOfContext* addressOf();

  class  SquareBracketsOpenContext : public antlr4::ParserRuleContext {
  public:
    SquareBracketsOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SquareBracketsOpenContext* squareBracketsOpen();

  class  SquareBracketsCloseContext : public antlr4::ParserRuleContext {
  public:
    SquareBracketsCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SquareBracketsCloseContext* squareBracketsClose();

  class  ParenthesysOpenContext : public antlr4::ParserRuleContext {
  public:
    ParenthesysOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenthesysOpenContext* parenthesysOpen();

  class  ParenthesysCloseContext : public antlr4::ParserRuleContext {
  public:
    ParenthesysCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenthesysCloseContext* parenthesysClose();

  class  CurlyBracketsOpenContext : public antlr4::ParserRuleContext {
  public:
    CurlyBracketsOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CurlyBracketsOpenContext* curlyBracketsOpen();

  class  CurlyBracketsCloseContext : public antlr4::ParserRuleContext {
  public:
    CurlyBracketsCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CurlyBracketsCloseContext* curlyBracketsClose();

  class  CommaContext : public antlr4::ParserRuleContext {
  public:
    CommaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommaContext* comma();

  class  SemicolonContext : public antlr4::ParserRuleContext {
  public:
    SemicolonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SemicolonContext* semicolon();

  class  ColonContext : public antlr4::ParserRuleContext {
  public:
    ColonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColonContext* colon();

  class  DotContext : public antlr4::ParserRuleContext {
  public:
    DotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DotContext* dot();

  class  PlusContext : public antlr4::ParserRuleContext {
  public:
    PlusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlusContext* plus();

  class  MinusContext : public antlr4::ParserRuleContext {
  public:
    MinusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MinusContext* minus();

  class  StarContext : public antlr4::ParserRuleContext {
  public:
    StarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StarContext* star();

  class  DivContext : public antlr4::ParserRuleContext {
  public:
    DivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivContext* div();

  class  ModContext : public antlr4::ParserRuleContext {
  public:
    ModContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModContext* mod();

  class  PowContext : public antlr4::ParserRuleContext {
  public:
    PowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PowContext* pow();

  class  LogicalAndContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndContext* logicalAnd();

  class  LogicalOrContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrContext* logicalOr();

  class  LogicalXorContext : public antlr4::ParserRuleContext {
  public:
    LogicalXorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalXorContext* logicalXor();

  class  LogicalNotContext : public antlr4::ParserRuleContext {
  public:
    LogicalNotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalNotContext* logicalNot();

  class  LogicalEqualContext : public antlr4::ParserRuleContext {
  public:
    LogicalEqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalEqualContext* logicalEqual();

  class  LogicalNotEqualContext : public antlr4::ParserRuleContext {
  public:
    LogicalNotEqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTEQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalNotEqualContext* logicalNotEqual();

  class  LogicalGtContext : public antlr4::ParserRuleContext {
  public:
    LogicalGtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalGtContext* logicalGt();

  class  LogicalLtContext : public antlr4::ParserRuleContext {
  public:
    LogicalLtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalLtContext* logicalLt();

  class  LogicalGeContext : public antlr4::ParserRuleContext {
  public:
    LogicalGeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalGeContext* logicalGe();

  class  LogicalLeContext : public antlr4::ParserRuleContext {
  public:
    LogicalLeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalLeContext* logicalLe();

  class  IncContext : public antlr4::ParserRuleContext {
  public:
    IncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncContext* inc();

  class  DecContext : public antlr4::ParserRuleContext {
  public:
    DecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecContext* dec();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignContext* assign();

  class  AddeqContext : public antlr4::ParserRuleContext {
  public:
    AddeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddeqContext* addeq();

  class  SubeqContext : public antlr4::ParserRuleContext {
  public:
    SubeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubeqContext* subeq();

  class  MuleqContext : public antlr4::ParserRuleContext {
  public:
    MuleqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MuleqContext* muleq();

  class  DiveqContext : public antlr4::ParserRuleContext {
  public:
    DiveqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIVEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiveqContext* diveq();

  class  ModeqContext : public antlr4::ParserRuleContext {
  public:
    ModeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModeqContext* modeq();

  class  PoweqContext : public antlr4::ParserRuleContext {
  public:
    PoweqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POWEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PoweqContext* poweq();

  class  DiamondOpenContext : public antlr4::ParserRuleContext {
  public:
    DiamondOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiamondOpenContext* diamondOpen();

  class  DiamondCloseContext : public antlr4::ParserRuleContext {
  public:
    DiamondCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiamondCloseContext* diamondClose();

  class  VarKeywordContext : public antlr4::ParserRuleContext {
  public:
    VarKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarKeywordContext* varKeyword();

  class  ConstKeywordContext : public antlr4::ParserRuleContext {
  public:
    ConstKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstKeywordContext* constKeyword();

  class  StructKeywordContext : public antlr4::ParserRuleContext {
  public:
    StructKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructKeywordContext* structKeyword();

  class  UnionKeywordContext : public antlr4::ParserRuleContext {
  public:
    UnionKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionKeywordContext* unionKeyword();

  class  FuncKeywordContext : public antlr4::ParserRuleContext {
  public:
    FuncKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncKeywordContext* funcKeyword();

  class  ReturnKeywordContext : public antlr4::ParserRuleContext {
  public:
    ReturnKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnKeywordContext* returnKeyword();

  class  BreakKeywordContext : public antlr4::ParserRuleContext {
  public:
    BreakKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakKeywordContext* breakKeyword();

  class  ContinueKeywordContext : public antlr4::ParserRuleContext {
  public:
    ContinueKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueKeywordContext* continueKeyword();

  class  IfKeywordContext : public antlr4::ParserRuleContext {
  public:
    IfKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfKeywordContext* ifKeyword();

  class  ElseKeywordContext : public antlr4::ParserRuleContext {
  public:
    ElseKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseKeywordContext* elseKeyword();

  class  WhileKeywordContext : public antlr4::ParserRuleContext {
  public:
    WhileKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileKeywordContext* whileKeyword();

  class  UntilKeywordContext : public antlr4::ParserRuleContext {
  public:
    UntilKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNTIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UntilKeywordContext* untilKeyword();

  class  SwitchKeywordContext : public antlr4::ParserRuleContext {
  public:
    SwitchKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchKeywordContext* switchKeyword();

  class  DefaultKeywordContext : public antlr4::ParserRuleContext {
  public:
    DefaultKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultKeywordContext* defaultKeyword();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPENAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  PrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASETYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveTypeContext* primitiveType();

  class  IntLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntLiteralContext* intLiteral();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  BoolLiteralContext : public antlr4::ParserRuleContext {
  public:
    BoolLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolLiteralContext* boolLiteral();

  class  CharLiteralContext : public antlr4::ParserRuleContext {
  public:
    CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharLiteralContext* charLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  NullKeywordContext : public antlr4::ParserRuleContext {
  public:
    NullKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullKeywordContext* nullKeyword();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarKeywordContext *varKeyword();
    IdentifierContext *identifier();
    ColonContext *colon();
    TypeSignatureContext *typeSignature();
    AssignContext *assign();
    ExpressionContext *expression();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  ConstDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstKeywordContext *constKeyword();
    IdentifierContext *identifier();
    ColonContext *colon();
    TypeSignatureContext *typeSignature();
    AssignContext *assign();
    ExpressionContext *expression();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstDeclarationContext* constDeclaration();

  class  StructDefinitionContext : public antlr4::ParserRuleContext {
  public:
    StructDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructKeywordContext *structKeyword();
    TypeNameContext *typeName();
    CurlyBracketsOpenContext *curlyBracketsOpen();
    CurlyBracketsCloseContext *curlyBracketsClose();
    FormalTypeParametersSectionContext *formalTypeParametersSection();
    std::vector<StructFieldContext *> structField();
    StructFieldContext* structField(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDefinitionContext* structDefinition();

  class  StructFieldContext : public antlr4::ParserRuleContext {
  public:
    StructFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ColonContext *colon();
    TypeSignatureContext *typeSignature();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructFieldContext* structField();

  class  UnionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnionKeywordContext *unionKeyword();
    TypeNameContext *typeName();
    CurlyBracketsOpenContext *curlyBracketsOpen();
    CurlyBracketsCloseContext *curlyBracketsClose();
    FormalTypeParametersSectionContext *formalTypeParametersSection();
    std::vector<TypeSignatureContext *> typeSignature();
    TypeSignatureContext* typeSignature(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionDefinitionContext* unionDefinition();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncKeywordContext *funcKeyword();
    IdentifierContext *identifier();
    FunctionDefinitionArgumentsSectionContext *functionDefinitionArgumentsSection();
    MultilineScopedInstructionBlockContext *multilineScopedInstructionBlock();
    FormalTypeParametersSectionContext *formalTypeParametersSection();
    FunctionReturnTypeSectionContext *functionReturnTypeSection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionDefinitionArgumentsSectionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionArgumentsSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesysOpenContext *parenthesysOpen();
    ParenthesysCloseContext *parenthesysClose();
    FunctionDefinitionArgumentsListContext *functionDefinitionArgumentsList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionArgumentsSectionContext* functionDefinitionArgumentsSection();

  class  FunctionDefinitionArgumentsListContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionArgumentsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<ColonContext *> colon();
    ColonContext* colon(size_t i);
    std::vector<TypeSignatureContext *> typeSignature();
    TypeSignatureContext* typeSignature(size_t i);
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionArgumentsListContext* functionDefinitionArgumentsList();

  class  FunctionReturnTypeSectionContext : public antlr4::ParserRuleContext {
  public:
    FunctionReturnTypeSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColonContext *colon();
    TypeSignatureContext *typeSignature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionReturnTypeSectionContext* functionReturnTypeSection();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ActualFunctionCallArgumentsSectionContext *actualFunctionCallArgumentsSection();
    ActualTypeParametersSectionContext *actualTypeParametersSection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  FunctionCallStatementContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallContext *functionCall();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallStatementContext* functionCallStatement();

  class  ActualFunctionCallArgumentsSectionContext : public antlr4::ParserRuleContext {
  public:
    ActualFunctionCallArgumentsSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesysOpenContext *parenthesysOpen();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    ParenthesysCloseContext *parenthesysClose();
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActualFunctionCallArgumentsSectionContext* actualFunctionCallArgumentsSection();

  class  TypeSignatureContext : public antlr4::ParserRuleContext {
  public:
    TypeSignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveTypeContext *primitiveType();
    CustomTypeContext *customType();
    PointerTypeContext *pointerType();
    SliceTypeContext *sliceType();
    ArrayTypeContext *arrayType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSignatureContext* typeSignature();

  class  CustomTypeContext : public antlr4::ParserRuleContext {
  public:
    CustomTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    ActualTypeParametersSectionContext *actualTypeParametersSection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CustomTypeContext* customType();

  class  PointerTypeContext : public antlr4::ParserRuleContext {
  public:
    PointerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerSymbolContext *pointerSymbol();
    TypeSignatureContext *typeSignature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerTypeContext* pointerType();

  class  SliceTypeContext : public antlr4::ParserRuleContext {
  public:
    SliceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SliceSymbolContext *sliceSymbol();
    TypeSignatureContext *typeSignature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SliceTypeContext* sliceType();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SquareBracketsOpenContext *squareBracketsOpen();
    IntLiteralContext *intLiteral();
    SquareBracketsCloseContext *squareBracketsClose();
    TypeSignatureContext *typeSignature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  ActualTypeParametersSectionContext : public antlr4::ParserRuleContext {
  public:
    ActualTypeParametersSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DiamondOpenContext *diamondOpen();
    std::vector<TypeSignatureContext *> typeSignature();
    TypeSignatureContext* typeSignature(size_t i);
    DiamondCloseContext *diamondClose();
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActualTypeParametersSectionContext* actualTypeParametersSection();

  class  FormalTypeParametersSectionContext : public antlr4::ParserRuleContext {
  public:
    FormalTypeParametersSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DiamondOpenContext *diamondOpen();
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);
    DiamondCloseContext *diamondClose();
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalTypeParametersSectionContext* formalTypeParametersSection();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TerminalExpressionContext *terminalExpression();
    InfixOperatorContext *infixOperator();
    DotMemberAccessContext *dotMemberAccess();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  TerminalExpressionContext : public antlr4::ParserRuleContext {
  public:
    TerminalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SquareBracketsAccessContext *squareBracketsAccess();
    ArrayLiteralContext *arrayLiteral();
    FunctionCallContext *functionCall();
    ParenthesysDelimitedExpressionContext *parenthesysDelimitedExpression();
    PrefixOperatorContext *prefixOperator();
    IntLiteralContext *intLiteral();
    FloatLiteralContext *floatLiteral();
    CharLiteralContext *charLiteral();
    StringLiteralContext *stringLiteral();
    BoolLiteralContext *boolLiteral();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminalExpressionContext* terminalExpression();

  class  InfixOperatorContext : public antlr4::ParserRuleContext {
  public:
    InfixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TerminalExpressionContext *terminalExpression();
    ExpressionContext *expression();
    PlusContext *plus();
    MinusContext *minus();
    StarContext *star();
    DivContext *div();
    PowContext *pow();
    ModContext *mod();
    LogicalAndContext *logicalAnd();
    LogicalOrContext *logicalOr();
    LogicalEqualContext *logicalEqual();
    LogicalNotEqualContext *logicalNotEqual();
    LogicalGtContext *logicalGt();
    LogicalLtContext *logicalLt();
    LogicalLeContext *logicalLe();
    LogicalGeContext *logicalGe();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InfixOperatorContext* infixOperator();

  class  DotMemberAccessContext : public antlr4::ParserRuleContext {
  public:
    DotMemberAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TerminalExpressionContext *terminalExpression();
    std::vector<DotContext *> dot();
    DotContext* dot(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DotMemberAccessContext* dotMemberAccess();

  class  PrefixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrefixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    PointerDereferenceContext *pointerDereference();
    LogicalNotContext *logicalNot();
    PlusContext *plus();
    MinusContext *minus();
    IncContext *inc();
    DecContext *dec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixOperatorContext* prefixOperator();

  class  SquareBracketsAccessContext : public antlr4::ParserRuleContext {
  public:
    SquareBracketsAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ParenthesysDelimitedExpressionContext *parenthesysDelimitedExpression();
    ArrayLiteralContext *arrayLiteral();
    FunctionCallContext *functionCall();
    std::vector<SquareBracketsOpenContext *> squareBracketsOpen();
    SquareBracketsOpenContext* squareBracketsOpen(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<SquareBracketsCloseContext *> squareBracketsClose();
    SquareBracketsCloseContext* squareBracketsClose(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SquareBracketsAccessContext* squareBracketsAccess();

  class  ArrayLiteralContext : public antlr4::ParserRuleContext {
  public:
    ArrayLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SquareBracketsOpenContext *squareBracketsOpen();
    TypeSignatureContext *typeSignature();
    SquareBracketsCloseContext *squareBracketsClose();
    CurlyBracketsOpenContext *curlyBracketsOpen();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    CurlyBracketsCloseContext *curlyBracketsClose();
    std::vector<CommaContext *> comma();
    CommaContext* comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayLiteralContext* arrayLiteral();

  class  ParenthesysDelimitedExpressionContext : public antlr4::ParserRuleContext {
  public:
    ParenthesysDelimitedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenthesysOpenContext *parenthesysOpen();
    ExpressionContext *expression();
    ParenthesysCloseContext *parenthesysClose();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenthesysDelimitedExpressionContext* parenthesysDelimitedExpression();

  class  InstructionBlockContext : public antlr4::ParserRuleContext {
  public:
    InstructionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultilineScopedInstructionBlockContext *multilineScopedInstructionBlock();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionBlockContext* instructionBlock();

  class  MultilineScopedInstructionBlockContext : public antlr4::ParserRuleContext {
  public:
    MultilineScopedInstructionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CurlyBracketsOpenContext *curlyBracketsOpen();
    CurlyBracketsCloseContext *curlyBracketsClose();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultilineScopedInstructionBlockContext* multilineScopedInstructionBlock();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    AssignContext *assign();
    SemicolonContext *semicolon();
    AddeqContext *addeq();
    SubeqContext *subeq();
    MuleqContext *muleq();
    DiveqContext *diveq();
    ModeqContext *modeq();
    PoweqContext *poweq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallStatementContext *functionCallStatement();
    AssignmentContext *assignment();
    VariableDeclarationContext *variableDeclaration();
    ConstDeclarationContext *constDeclaration();
    ReturnStatementContext *returnStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();
    IfStatementContext *ifStatement();
    WhileLoopContext *whileLoop();
    UntilLoopContext *untilLoop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnKeywordContext *returnKeyword();
    SemicolonContext *semicolon();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BreakKeywordContext *breakKeyword();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ContinueKeywordContext *continueKeyword();
    SemicolonContext *semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfKeywordContext *ifKeyword();
    ParenthesysOpenContext *parenthesysOpen();
    ExpressionContext *expression();
    ParenthesysCloseContext *parenthesysClose();
    std::vector<InstructionBlockContext *> instructionBlock();
    InstructionBlockContext* instructionBlock(size_t i);
    ElseKeywordContext *elseKeyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  WhileLoopContext : public antlr4::ParserRuleContext {
  public:
    WhileLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WhileKeywordContext *whileKeyword();
    ParenthesysOpenContext *parenthesysOpen();
    ExpressionContext *expression();
    ParenthesysCloseContext *parenthesysClose();
    InstructionBlockContext *instructionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileLoopContext* whileLoop();

  class  UntilLoopContext : public antlr4::ParserRuleContext {
  public:
    UntilLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UntilKeywordContext *untilKeyword();
    ParenthesysOpenContext *parenthesysOpen();
    ExpressionContext *expression();
    ParenthesysCloseContext *parenthesysClose();
    InstructionBlockContext *instructionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UntilLoopContext* untilLoop();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SwitchKeywordContext *switchKeyword();
    ParenthesysOpenContext *parenthesysOpen();
    ExpressionContext *expression();
    ParenthesysCloseContext *parenthesysClose();
    CurlyBracketsOpenContext *curlyBracketsOpen();
    CurlyBracketsCloseContext *curlyBracketsClose();
    std::vector<SwitchCaseContext *> switchCase();
    SwitchCaseContext* switchCase(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SwitchCaseContext : public antlr4::ParserRuleContext {
  public:
    SwitchCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultKeywordContext *defaultKeyword();
    InstructionBlockContext *instructionBlock();
    IdentifierContext *identifier();
    ColonContext *colon();
    TypeSignatureContext *typeSignature();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchCaseContext* switchCase();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

