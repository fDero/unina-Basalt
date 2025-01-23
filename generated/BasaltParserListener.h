
// Generated from BasaltParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "BasaltParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BasaltParser.
 */
class  BasaltParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(BasaltParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(BasaltParser::ProgramContext *ctx) = 0;

  virtual void enterDefinition(BasaltParser::DefinitionContext *ctx) = 0;
  virtual void exitDefinition(BasaltParser::DefinitionContext *ctx) = 0;

  virtual void enterArrow(BasaltParser::ArrowContext *ctx) = 0;
  virtual void exitArrow(BasaltParser::ArrowContext *ctx) = 0;

  virtual void enterPointerDereference(BasaltParser::PointerDereferenceContext *ctx) = 0;
  virtual void exitPointerDereference(BasaltParser::PointerDereferenceContext *ctx) = 0;

  virtual void enterPointerSymbol(BasaltParser::PointerSymbolContext *ctx) = 0;
  virtual void exitPointerSymbol(BasaltParser::PointerSymbolContext *ctx) = 0;

  virtual void enterSliceSymbol(BasaltParser::SliceSymbolContext *ctx) = 0;
  virtual void exitSliceSymbol(BasaltParser::SliceSymbolContext *ctx) = 0;

  virtual void enterAddressOf(BasaltParser::AddressOfContext *ctx) = 0;
  virtual void exitAddressOf(BasaltParser::AddressOfContext *ctx) = 0;

  virtual void enterSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext *ctx) = 0;
  virtual void exitSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext *ctx) = 0;

  virtual void enterSquareBracketsClose(BasaltParser::SquareBracketsCloseContext *ctx) = 0;
  virtual void exitSquareBracketsClose(BasaltParser::SquareBracketsCloseContext *ctx) = 0;

  virtual void enterParenthesysOpen(BasaltParser::ParenthesysOpenContext *ctx) = 0;
  virtual void exitParenthesysOpen(BasaltParser::ParenthesysOpenContext *ctx) = 0;

  virtual void enterParenthesysClose(BasaltParser::ParenthesysCloseContext *ctx) = 0;
  virtual void exitParenthesysClose(BasaltParser::ParenthesysCloseContext *ctx) = 0;

  virtual void enterCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext *ctx) = 0;
  virtual void exitCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext *ctx) = 0;

  virtual void enterCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext *ctx) = 0;
  virtual void exitCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext *ctx) = 0;

  virtual void enterComma(BasaltParser::CommaContext *ctx) = 0;
  virtual void exitComma(BasaltParser::CommaContext *ctx) = 0;

  virtual void enterSemicolon(BasaltParser::SemicolonContext *ctx) = 0;
  virtual void exitSemicolon(BasaltParser::SemicolonContext *ctx) = 0;

  virtual void enterColon(BasaltParser::ColonContext *ctx) = 0;
  virtual void exitColon(BasaltParser::ColonContext *ctx) = 0;

  virtual void enterDot(BasaltParser::DotContext *ctx) = 0;
  virtual void exitDot(BasaltParser::DotContext *ctx) = 0;

  virtual void enterPlus(BasaltParser::PlusContext *ctx) = 0;
  virtual void exitPlus(BasaltParser::PlusContext *ctx) = 0;

  virtual void enterMinus(BasaltParser::MinusContext *ctx) = 0;
  virtual void exitMinus(BasaltParser::MinusContext *ctx) = 0;

  virtual void enterStar(BasaltParser::StarContext *ctx) = 0;
  virtual void exitStar(BasaltParser::StarContext *ctx) = 0;

  virtual void enterDiv(BasaltParser::DivContext *ctx) = 0;
  virtual void exitDiv(BasaltParser::DivContext *ctx) = 0;

  virtual void enterMod(BasaltParser::ModContext *ctx) = 0;
  virtual void exitMod(BasaltParser::ModContext *ctx) = 0;

  virtual void enterPow(BasaltParser::PowContext *ctx) = 0;
  virtual void exitPow(BasaltParser::PowContext *ctx) = 0;

  virtual void enterLogicalAnd(BasaltParser::LogicalAndContext *ctx) = 0;
  virtual void exitLogicalAnd(BasaltParser::LogicalAndContext *ctx) = 0;

  virtual void enterLogicalOr(BasaltParser::LogicalOrContext *ctx) = 0;
  virtual void exitLogicalOr(BasaltParser::LogicalOrContext *ctx) = 0;

  virtual void enterLogicalXor(BasaltParser::LogicalXorContext *ctx) = 0;
  virtual void exitLogicalXor(BasaltParser::LogicalXorContext *ctx) = 0;

  virtual void enterLogicalNot(BasaltParser::LogicalNotContext *ctx) = 0;
  virtual void exitLogicalNot(BasaltParser::LogicalNotContext *ctx) = 0;

  virtual void enterLogicalEqual(BasaltParser::LogicalEqualContext *ctx) = 0;
  virtual void exitLogicalEqual(BasaltParser::LogicalEqualContext *ctx) = 0;

  virtual void enterLogicalNotEqual(BasaltParser::LogicalNotEqualContext *ctx) = 0;
  virtual void exitLogicalNotEqual(BasaltParser::LogicalNotEqualContext *ctx) = 0;

  virtual void enterLogicalGt(BasaltParser::LogicalGtContext *ctx) = 0;
  virtual void exitLogicalGt(BasaltParser::LogicalGtContext *ctx) = 0;

  virtual void enterLogicalLt(BasaltParser::LogicalLtContext *ctx) = 0;
  virtual void exitLogicalLt(BasaltParser::LogicalLtContext *ctx) = 0;

  virtual void enterLogicalGe(BasaltParser::LogicalGeContext *ctx) = 0;
  virtual void exitLogicalGe(BasaltParser::LogicalGeContext *ctx) = 0;

  virtual void enterLogicalLe(BasaltParser::LogicalLeContext *ctx) = 0;
  virtual void exitLogicalLe(BasaltParser::LogicalLeContext *ctx) = 0;

  virtual void enterInc(BasaltParser::IncContext *ctx) = 0;
  virtual void exitInc(BasaltParser::IncContext *ctx) = 0;

  virtual void enterDec(BasaltParser::DecContext *ctx) = 0;
  virtual void exitDec(BasaltParser::DecContext *ctx) = 0;

  virtual void enterAssign(BasaltParser::AssignContext *ctx) = 0;
  virtual void exitAssign(BasaltParser::AssignContext *ctx) = 0;

  virtual void enterAddeq(BasaltParser::AddeqContext *ctx) = 0;
  virtual void exitAddeq(BasaltParser::AddeqContext *ctx) = 0;

  virtual void enterSubeq(BasaltParser::SubeqContext *ctx) = 0;
  virtual void exitSubeq(BasaltParser::SubeqContext *ctx) = 0;

  virtual void enterMuleq(BasaltParser::MuleqContext *ctx) = 0;
  virtual void exitMuleq(BasaltParser::MuleqContext *ctx) = 0;

  virtual void enterDiveq(BasaltParser::DiveqContext *ctx) = 0;
  virtual void exitDiveq(BasaltParser::DiveqContext *ctx) = 0;

  virtual void enterModeq(BasaltParser::ModeqContext *ctx) = 0;
  virtual void exitModeq(BasaltParser::ModeqContext *ctx) = 0;

  virtual void enterPoweq(BasaltParser::PoweqContext *ctx) = 0;
  virtual void exitPoweq(BasaltParser::PoweqContext *ctx) = 0;

  virtual void enterDiamondOpen(BasaltParser::DiamondOpenContext *ctx) = 0;
  virtual void exitDiamondOpen(BasaltParser::DiamondOpenContext *ctx) = 0;

  virtual void enterDiamondClose(BasaltParser::DiamondCloseContext *ctx) = 0;
  virtual void exitDiamondClose(BasaltParser::DiamondCloseContext *ctx) = 0;

  virtual void enterVarKeyword(BasaltParser::VarKeywordContext *ctx) = 0;
  virtual void exitVarKeyword(BasaltParser::VarKeywordContext *ctx) = 0;

  virtual void enterConstKeyword(BasaltParser::ConstKeywordContext *ctx) = 0;
  virtual void exitConstKeyword(BasaltParser::ConstKeywordContext *ctx) = 0;

  virtual void enterStructKeyword(BasaltParser::StructKeywordContext *ctx) = 0;
  virtual void exitStructKeyword(BasaltParser::StructKeywordContext *ctx) = 0;

  virtual void enterUnionKeyword(BasaltParser::UnionKeywordContext *ctx) = 0;
  virtual void exitUnionKeyword(BasaltParser::UnionKeywordContext *ctx) = 0;

  virtual void enterFuncKeyword(BasaltParser::FuncKeywordContext *ctx) = 0;
  virtual void exitFuncKeyword(BasaltParser::FuncKeywordContext *ctx) = 0;

  virtual void enterReturnKeyword(BasaltParser::ReturnKeywordContext *ctx) = 0;
  virtual void exitReturnKeyword(BasaltParser::ReturnKeywordContext *ctx) = 0;

  virtual void enterBreakKeyword(BasaltParser::BreakKeywordContext *ctx) = 0;
  virtual void exitBreakKeyword(BasaltParser::BreakKeywordContext *ctx) = 0;

  virtual void enterContinueKeyword(BasaltParser::ContinueKeywordContext *ctx) = 0;
  virtual void exitContinueKeyword(BasaltParser::ContinueKeywordContext *ctx) = 0;

  virtual void enterIfKeyword(BasaltParser::IfKeywordContext *ctx) = 0;
  virtual void exitIfKeyword(BasaltParser::IfKeywordContext *ctx) = 0;

  virtual void enterElseKeyword(BasaltParser::ElseKeywordContext *ctx) = 0;
  virtual void exitElseKeyword(BasaltParser::ElseKeywordContext *ctx) = 0;

  virtual void enterWhileKeyword(BasaltParser::WhileKeywordContext *ctx) = 0;
  virtual void exitWhileKeyword(BasaltParser::WhileKeywordContext *ctx) = 0;

  virtual void enterUntilKeyword(BasaltParser::UntilKeywordContext *ctx) = 0;
  virtual void exitUntilKeyword(BasaltParser::UntilKeywordContext *ctx) = 0;

  virtual void enterSwitchKeyword(BasaltParser::SwitchKeywordContext *ctx) = 0;
  virtual void exitSwitchKeyword(BasaltParser::SwitchKeywordContext *ctx) = 0;

  virtual void enterDefaultKeyword(BasaltParser::DefaultKeywordContext *ctx) = 0;
  virtual void exitDefaultKeyword(BasaltParser::DefaultKeywordContext *ctx) = 0;

  virtual void enterIdentifier(BasaltParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(BasaltParser::IdentifierContext *ctx) = 0;

  virtual void enterTypeName(BasaltParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(BasaltParser::TypeNameContext *ctx) = 0;

  virtual void enterPrimitiveType(BasaltParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(BasaltParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterIntLiteral(BasaltParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(BasaltParser::IntLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(BasaltParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(BasaltParser::FloatLiteralContext *ctx) = 0;

  virtual void enterBoolLiteral(BasaltParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(BasaltParser::BoolLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(BasaltParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(BasaltParser::CharLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(BasaltParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(BasaltParser::StringLiteralContext *ctx) = 0;

  virtual void enterNullKeyword(BasaltParser::NullKeywordContext *ctx) = 0;
  virtual void exitNullKeyword(BasaltParser::NullKeywordContext *ctx) = 0;

  virtual void enterVariableDeclaration(BasaltParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(BasaltParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterConstDeclaration(BasaltParser::ConstDeclarationContext *ctx) = 0;
  virtual void exitConstDeclaration(BasaltParser::ConstDeclarationContext *ctx) = 0;

  virtual void enterStructDefinition(BasaltParser::StructDefinitionContext *ctx) = 0;
  virtual void exitStructDefinition(BasaltParser::StructDefinitionContext *ctx) = 0;

  virtual void enterStructField(BasaltParser::StructFieldContext *ctx) = 0;
  virtual void exitStructField(BasaltParser::StructFieldContext *ctx) = 0;

  virtual void enterUnionDefinition(BasaltParser::UnionDefinitionContext *ctx) = 0;
  virtual void exitUnionDefinition(BasaltParser::UnionDefinitionContext *ctx) = 0;

  virtual void enterFunctionDefinition(BasaltParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(BasaltParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext *ctx) = 0;
  virtual void exitFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext *ctx) = 0;

  virtual void enterFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext *ctx) = 0;
  virtual void exitFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext *ctx) = 0;

  virtual void enterFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext *ctx) = 0;
  virtual void exitFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext *ctx) = 0;

  virtual void enterFunctionCall(BasaltParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(BasaltParser::FunctionCallContext *ctx) = 0;

  virtual void enterFunctionCallStatement(BasaltParser::FunctionCallStatementContext *ctx) = 0;
  virtual void exitFunctionCallStatement(BasaltParser::FunctionCallStatementContext *ctx) = 0;

  virtual void enterActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext *ctx) = 0;
  virtual void exitActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext *ctx) = 0;

  virtual void enterTypeSignature(BasaltParser::TypeSignatureContext *ctx) = 0;
  virtual void exitTypeSignature(BasaltParser::TypeSignatureContext *ctx) = 0;

  virtual void enterCustomType(BasaltParser::CustomTypeContext *ctx) = 0;
  virtual void exitCustomType(BasaltParser::CustomTypeContext *ctx) = 0;

  virtual void enterPointerType(BasaltParser::PointerTypeContext *ctx) = 0;
  virtual void exitPointerType(BasaltParser::PointerTypeContext *ctx) = 0;

  virtual void enterSliceType(BasaltParser::SliceTypeContext *ctx) = 0;
  virtual void exitSliceType(BasaltParser::SliceTypeContext *ctx) = 0;

  virtual void enterArrayType(BasaltParser::ArrayTypeContext *ctx) = 0;
  virtual void exitArrayType(BasaltParser::ArrayTypeContext *ctx) = 0;

  virtual void enterActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext *ctx) = 0;
  virtual void exitActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext *ctx) = 0;

  virtual void enterFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext *ctx) = 0;
  virtual void exitFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext *ctx) = 0;

  virtual void enterExpression(BasaltParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(BasaltParser::ExpressionContext *ctx) = 0;

  virtual void enterTerminalExpression(BasaltParser::TerminalExpressionContext *ctx) = 0;
  virtual void exitTerminalExpression(BasaltParser::TerminalExpressionContext *ctx) = 0;

  virtual void enterInfixOperator(BasaltParser::InfixOperatorContext *ctx) = 0;
  virtual void exitInfixOperator(BasaltParser::InfixOperatorContext *ctx) = 0;

  virtual void enterDotMemberAccess(BasaltParser::DotMemberAccessContext *ctx) = 0;
  virtual void exitDotMemberAccess(BasaltParser::DotMemberAccessContext *ctx) = 0;

  virtual void enterPrefixOperator(BasaltParser::PrefixOperatorContext *ctx) = 0;
  virtual void exitPrefixOperator(BasaltParser::PrefixOperatorContext *ctx) = 0;

  virtual void enterSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext *ctx) = 0;
  virtual void exitSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext *ctx) = 0;

  virtual void enterArrayLiteral(BasaltParser::ArrayLiteralContext *ctx) = 0;
  virtual void exitArrayLiteral(BasaltParser::ArrayLiteralContext *ctx) = 0;

  virtual void enterParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext *ctx) = 0;
  virtual void exitParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext *ctx) = 0;

  virtual void enterInstructionBlock(BasaltParser::InstructionBlockContext *ctx) = 0;
  virtual void exitInstructionBlock(BasaltParser::InstructionBlockContext *ctx) = 0;

  virtual void enterMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext *ctx) = 0;
  virtual void exitMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext *ctx) = 0;

  virtual void enterAssignment(BasaltParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(BasaltParser::AssignmentContext *ctx) = 0;

  virtual void enterStatement(BasaltParser::StatementContext *ctx) = 0;
  virtual void exitStatement(BasaltParser::StatementContext *ctx) = 0;

  virtual void enterReturnStatement(BasaltParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(BasaltParser::ReturnStatementContext *ctx) = 0;

  virtual void enterBreakStatement(BasaltParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(BasaltParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(BasaltParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(BasaltParser::ContinueStatementContext *ctx) = 0;

  virtual void enterIfStatement(BasaltParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(BasaltParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileLoop(BasaltParser::WhileLoopContext *ctx) = 0;
  virtual void exitWhileLoop(BasaltParser::WhileLoopContext *ctx) = 0;

  virtual void enterUntilLoop(BasaltParser::UntilLoopContext *ctx) = 0;
  virtual void exitUntilLoop(BasaltParser::UntilLoopContext *ctx) = 0;

  virtual void enterSwitchStatement(BasaltParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(BasaltParser::SwitchStatementContext *ctx) = 0;

  virtual void enterSwitchCase(BasaltParser::SwitchCaseContext *ctx) = 0;
  virtual void exitSwitchCase(BasaltParser::SwitchCaseContext *ctx) = 0;


};

