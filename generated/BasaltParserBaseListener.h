
// Generated from BasaltParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "BasaltParserListener.h"


/**
 * This class provides an empty implementation of BasaltParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BasaltParserBaseListener : public BasaltParserListener {
public:

  virtual void enterProgram(BasaltParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(BasaltParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDefinition(BasaltParser::DefinitionContext * /*ctx*/) override { }
  virtual void exitDefinition(BasaltParser::DefinitionContext * /*ctx*/) override { }

  virtual void enterArrow(BasaltParser::ArrowContext * /*ctx*/) override { }
  virtual void exitArrow(BasaltParser::ArrowContext * /*ctx*/) override { }

  virtual void enterPointerDereference(BasaltParser::PointerDereferenceContext * /*ctx*/) override { }
  virtual void exitPointerDereference(BasaltParser::PointerDereferenceContext * /*ctx*/) override { }

  virtual void enterPointerSymbol(BasaltParser::PointerSymbolContext * /*ctx*/) override { }
  virtual void exitPointerSymbol(BasaltParser::PointerSymbolContext * /*ctx*/) override { }

  virtual void enterSliceSymbol(BasaltParser::SliceSymbolContext * /*ctx*/) override { }
  virtual void exitSliceSymbol(BasaltParser::SliceSymbolContext * /*ctx*/) override { }

  virtual void enterAddressOf(BasaltParser::AddressOfContext * /*ctx*/) override { }
  virtual void exitAddressOf(BasaltParser::AddressOfContext * /*ctx*/) override { }

  virtual void enterSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext * /*ctx*/) override { }
  virtual void exitSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext * /*ctx*/) override { }

  virtual void enterSquareBracketsClose(BasaltParser::SquareBracketsCloseContext * /*ctx*/) override { }
  virtual void exitSquareBracketsClose(BasaltParser::SquareBracketsCloseContext * /*ctx*/) override { }

  virtual void enterParenthesysOpen(BasaltParser::ParenthesysOpenContext * /*ctx*/) override { }
  virtual void exitParenthesysOpen(BasaltParser::ParenthesysOpenContext * /*ctx*/) override { }

  virtual void enterParenthesysClose(BasaltParser::ParenthesysCloseContext * /*ctx*/) override { }
  virtual void exitParenthesysClose(BasaltParser::ParenthesysCloseContext * /*ctx*/) override { }

  virtual void enterCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext * /*ctx*/) override { }
  virtual void exitCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext * /*ctx*/) override { }

  virtual void enterCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext * /*ctx*/) override { }
  virtual void exitCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext * /*ctx*/) override { }

  virtual void enterComma(BasaltParser::CommaContext * /*ctx*/) override { }
  virtual void exitComma(BasaltParser::CommaContext * /*ctx*/) override { }

  virtual void enterSemicolon(BasaltParser::SemicolonContext * /*ctx*/) override { }
  virtual void exitSemicolon(BasaltParser::SemicolonContext * /*ctx*/) override { }

  virtual void enterColon(BasaltParser::ColonContext * /*ctx*/) override { }
  virtual void exitColon(BasaltParser::ColonContext * /*ctx*/) override { }

  virtual void enterDot(BasaltParser::DotContext * /*ctx*/) override { }
  virtual void exitDot(BasaltParser::DotContext * /*ctx*/) override { }

  virtual void enterPlus(BasaltParser::PlusContext * /*ctx*/) override { }
  virtual void exitPlus(BasaltParser::PlusContext * /*ctx*/) override { }

  virtual void enterMinus(BasaltParser::MinusContext * /*ctx*/) override { }
  virtual void exitMinus(BasaltParser::MinusContext * /*ctx*/) override { }

  virtual void enterStar(BasaltParser::StarContext * /*ctx*/) override { }
  virtual void exitStar(BasaltParser::StarContext * /*ctx*/) override { }

  virtual void enterDiv(BasaltParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(BasaltParser::DivContext * /*ctx*/) override { }

  virtual void enterMod(BasaltParser::ModContext * /*ctx*/) override { }
  virtual void exitMod(BasaltParser::ModContext * /*ctx*/) override { }

  virtual void enterPow(BasaltParser::PowContext * /*ctx*/) override { }
  virtual void exitPow(BasaltParser::PowContext * /*ctx*/) override { }

  virtual void enterLogicalAnd(BasaltParser::LogicalAndContext * /*ctx*/) override { }
  virtual void exitLogicalAnd(BasaltParser::LogicalAndContext * /*ctx*/) override { }

  virtual void enterLogicalOr(BasaltParser::LogicalOrContext * /*ctx*/) override { }
  virtual void exitLogicalOr(BasaltParser::LogicalOrContext * /*ctx*/) override { }

  virtual void enterLogicalXor(BasaltParser::LogicalXorContext * /*ctx*/) override { }
  virtual void exitLogicalXor(BasaltParser::LogicalXorContext * /*ctx*/) override { }

  virtual void enterLogicalNot(BasaltParser::LogicalNotContext * /*ctx*/) override { }
  virtual void exitLogicalNot(BasaltParser::LogicalNotContext * /*ctx*/) override { }

  virtual void enterLogicalEqual(BasaltParser::LogicalEqualContext * /*ctx*/) override { }
  virtual void exitLogicalEqual(BasaltParser::LogicalEqualContext * /*ctx*/) override { }

  virtual void enterLogicalNotEqual(BasaltParser::LogicalNotEqualContext * /*ctx*/) override { }
  virtual void exitLogicalNotEqual(BasaltParser::LogicalNotEqualContext * /*ctx*/) override { }

  virtual void enterLogicalGt(BasaltParser::LogicalGtContext * /*ctx*/) override { }
  virtual void exitLogicalGt(BasaltParser::LogicalGtContext * /*ctx*/) override { }

  virtual void enterLogicalLt(BasaltParser::LogicalLtContext * /*ctx*/) override { }
  virtual void exitLogicalLt(BasaltParser::LogicalLtContext * /*ctx*/) override { }

  virtual void enterLogicalGe(BasaltParser::LogicalGeContext * /*ctx*/) override { }
  virtual void exitLogicalGe(BasaltParser::LogicalGeContext * /*ctx*/) override { }

  virtual void enterLogicalLe(BasaltParser::LogicalLeContext * /*ctx*/) override { }
  virtual void exitLogicalLe(BasaltParser::LogicalLeContext * /*ctx*/) override { }

  virtual void enterInc(BasaltParser::IncContext * /*ctx*/) override { }
  virtual void exitInc(BasaltParser::IncContext * /*ctx*/) override { }

  virtual void enterDec(BasaltParser::DecContext * /*ctx*/) override { }
  virtual void exitDec(BasaltParser::DecContext * /*ctx*/) override { }

  virtual void enterAssign(BasaltParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(BasaltParser::AssignContext * /*ctx*/) override { }

  virtual void enterAddeq(BasaltParser::AddeqContext * /*ctx*/) override { }
  virtual void exitAddeq(BasaltParser::AddeqContext * /*ctx*/) override { }

  virtual void enterSubeq(BasaltParser::SubeqContext * /*ctx*/) override { }
  virtual void exitSubeq(BasaltParser::SubeqContext * /*ctx*/) override { }

  virtual void enterMuleq(BasaltParser::MuleqContext * /*ctx*/) override { }
  virtual void exitMuleq(BasaltParser::MuleqContext * /*ctx*/) override { }

  virtual void enterDiveq(BasaltParser::DiveqContext * /*ctx*/) override { }
  virtual void exitDiveq(BasaltParser::DiveqContext * /*ctx*/) override { }

  virtual void enterModeq(BasaltParser::ModeqContext * /*ctx*/) override { }
  virtual void exitModeq(BasaltParser::ModeqContext * /*ctx*/) override { }

  virtual void enterPoweq(BasaltParser::PoweqContext * /*ctx*/) override { }
  virtual void exitPoweq(BasaltParser::PoweqContext * /*ctx*/) override { }

  virtual void enterDiamondOpen(BasaltParser::DiamondOpenContext * /*ctx*/) override { }
  virtual void exitDiamondOpen(BasaltParser::DiamondOpenContext * /*ctx*/) override { }

  virtual void enterDiamondClose(BasaltParser::DiamondCloseContext * /*ctx*/) override { }
  virtual void exitDiamondClose(BasaltParser::DiamondCloseContext * /*ctx*/) override { }

  virtual void enterVarKeyword(BasaltParser::VarKeywordContext * /*ctx*/) override { }
  virtual void exitVarKeyword(BasaltParser::VarKeywordContext * /*ctx*/) override { }

  virtual void enterConstKeyword(BasaltParser::ConstKeywordContext * /*ctx*/) override { }
  virtual void exitConstKeyword(BasaltParser::ConstKeywordContext * /*ctx*/) override { }

  virtual void enterStructKeyword(BasaltParser::StructKeywordContext * /*ctx*/) override { }
  virtual void exitStructKeyword(BasaltParser::StructKeywordContext * /*ctx*/) override { }

  virtual void enterUnionKeyword(BasaltParser::UnionKeywordContext * /*ctx*/) override { }
  virtual void exitUnionKeyword(BasaltParser::UnionKeywordContext * /*ctx*/) override { }

  virtual void enterFuncKeyword(BasaltParser::FuncKeywordContext * /*ctx*/) override { }
  virtual void exitFuncKeyword(BasaltParser::FuncKeywordContext * /*ctx*/) override { }

  virtual void enterReturnKeyword(BasaltParser::ReturnKeywordContext * /*ctx*/) override { }
  virtual void exitReturnKeyword(BasaltParser::ReturnKeywordContext * /*ctx*/) override { }

  virtual void enterBreakKeyword(BasaltParser::BreakKeywordContext * /*ctx*/) override { }
  virtual void exitBreakKeyword(BasaltParser::BreakKeywordContext * /*ctx*/) override { }

  virtual void enterContinueKeyword(BasaltParser::ContinueKeywordContext * /*ctx*/) override { }
  virtual void exitContinueKeyword(BasaltParser::ContinueKeywordContext * /*ctx*/) override { }

  virtual void enterIfKeyword(BasaltParser::IfKeywordContext * /*ctx*/) override { }
  virtual void exitIfKeyword(BasaltParser::IfKeywordContext * /*ctx*/) override { }

  virtual void enterElseKeyword(BasaltParser::ElseKeywordContext * /*ctx*/) override { }
  virtual void exitElseKeyword(BasaltParser::ElseKeywordContext * /*ctx*/) override { }

  virtual void enterWhileKeyword(BasaltParser::WhileKeywordContext * /*ctx*/) override { }
  virtual void exitWhileKeyword(BasaltParser::WhileKeywordContext * /*ctx*/) override { }

  virtual void enterUntilKeyword(BasaltParser::UntilKeywordContext * /*ctx*/) override { }
  virtual void exitUntilKeyword(BasaltParser::UntilKeywordContext * /*ctx*/) override { }

  virtual void enterSwitchKeyword(BasaltParser::SwitchKeywordContext * /*ctx*/) override { }
  virtual void exitSwitchKeyword(BasaltParser::SwitchKeywordContext * /*ctx*/) override { }

  virtual void enterDefaultKeyword(BasaltParser::DefaultKeywordContext * /*ctx*/) override { }
  virtual void exitDefaultKeyword(BasaltParser::DefaultKeywordContext * /*ctx*/) override { }

  virtual void enterIdentifier(BasaltParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(BasaltParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterTypeName(BasaltParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(BasaltParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(BasaltParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(BasaltParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterIntLiteral(BasaltParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(BasaltParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(BasaltParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(BasaltParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(BasaltParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(BasaltParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(BasaltParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(BasaltParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(BasaltParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(BasaltParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterNullKeyword(BasaltParser::NullKeywordContext * /*ctx*/) override { }
  virtual void exitNullKeyword(BasaltParser::NullKeywordContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(BasaltParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(BasaltParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterConstDeclaration(BasaltParser::ConstDeclarationContext * /*ctx*/) override { }
  virtual void exitConstDeclaration(BasaltParser::ConstDeclarationContext * /*ctx*/) override { }

  virtual void enterStructDefinition(BasaltParser::StructDefinitionContext * /*ctx*/) override { }
  virtual void exitStructDefinition(BasaltParser::StructDefinitionContext * /*ctx*/) override { }

  virtual void enterStructField(BasaltParser::StructFieldContext * /*ctx*/) override { }
  virtual void exitStructField(BasaltParser::StructFieldContext * /*ctx*/) override { }

  virtual void enterUnionDefinition(BasaltParser::UnionDefinitionContext * /*ctx*/) override { }
  virtual void exitUnionDefinition(BasaltParser::UnionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(BasaltParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(BasaltParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext * /*ctx*/) override { }

  virtual void enterFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext * /*ctx*/) override { }
  virtual void exitFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext * /*ctx*/) override { }

  virtual void enterFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext * /*ctx*/) override { }
  virtual void exitFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(BasaltParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(BasaltParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterFunctionCallStatement(BasaltParser::FunctionCallStatementContext * /*ctx*/) override { }
  virtual void exitFunctionCallStatement(BasaltParser::FunctionCallStatementContext * /*ctx*/) override { }

  virtual void enterActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext * /*ctx*/) override { }
  virtual void exitActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext * /*ctx*/) override { }

  virtual void enterTypeSignature(BasaltParser::TypeSignatureContext * /*ctx*/) override { }
  virtual void exitTypeSignature(BasaltParser::TypeSignatureContext * /*ctx*/) override { }

  virtual void enterCustomType(BasaltParser::CustomTypeContext * /*ctx*/) override { }
  virtual void exitCustomType(BasaltParser::CustomTypeContext * /*ctx*/) override { }

  virtual void enterPointerType(BasaltParser::PointerTypeContext * /*ctx*/) override { }
  virtual void exitPointerType(BasaltParser::PointerTypeContext * /*ctx*/) override { }

  virtual void enterSliceType(BasaltParser::SliceTypeContext * /*ctx*/) override { }
  virtual void exitSliceType(BasaltParser::SliceTypeContext * /*ctx*/) override { }

  virtual void enterArrayType(BasaltParser::ArrayTypeContext * /*ctx*/) override { }
  virtual void exitArrayType(BasaltParser::ArrayTypeContext * /*ctx*/) override { }

  virtual void enterActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext * /*ctx*/) override { }
  virtual void exitActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext * /*ctx*/) override { }

  virtual void enterFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext * /*ctx*/) override { }
  virtual void exitFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext * /*ctx*/) override { }

  virtual void enterExpression(BasaltParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(BasaltParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterTerminalExpression(BasaltParser::TerminalExpressionContext * /*ctx*/) override { }
  virtual void exitTerminalExpression(BasaltParser::TerminalExpressionContext * /*ctx*/) override { }

  virtual void enterInfixOperator(BasaltParser::InfixOperatorContext * /*ctx*/) override { }
  virtual void exitInfixOperator(BasaltParser::InfixOperatorContext * /*ctx*/) override { }

  virtual void enterDotMemberAccess(BasaltParser::DotMemberAccessContext * /*ctx*/) override { }
  virtual void exitDotMemberAccess(BasaltParser::DotMemberAccessContext * /*ctx*/) override { }

  virtual void enterPrefixOperator(BasaltParser::PrefixOperatorContext * /*ctx*/) override { }
  virtual void exitPrefixOperator(BasaltParser::PrefixOperatorContext * /*ctx*/) override { }

  virtual void enterSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext * /*ctx*/) override { }
  virtual void exitSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext * /*ctx*/) override { }

  virtual void enterArrayLiteral(BasaltParser::ArrayLiteralContext * /*ctx*/) override { }
  virtual void exitArrayLiteral(BasaltParser::ArrayLiteralContext * /*ctx*/) override { }

  virtual void enterParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext * /*ctx*/) override { }

  virtual void enterInstructionBlock(BasaltParser::InstructionBlockContext * /*ctx*/) override { }
  virtual void exitInstructionBlock(BasaltParser::InstructionBlockContext * /*ctx*/) override { }

  virtual void enterMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext * /*ctx*/) override { }
  virtual void exitMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext * /*ctx*/) override { }

  virtual void enterAssignment(BasaltParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(BasaltParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterStatement(BasaltParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(BasaltParser::StatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(BasaltParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(BasaltParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(BasaltParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(BasaltParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(BasaltParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(BasaltParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(BasaltParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(BasaltParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileLoop(BasaltParser::WhileLoopContext * /*ctx*/) override { }
  virtual void exitWhileLoop(BasaltParser::WhileLoopContext * /*ctx*/) override { }

  virtual void enterUntilLoop(BasaltParser::UntilLoopContext * /*ctx*/) override { }
  virtual void exitUntilLoop(BasaltParser::UntilLoopContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(BasaltParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(BasaltParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterSwitchCase(BasaltParser::SwitchCaseContext * /*ctx*/) override { }
  virtual void exitSwitchCase(BasaltParser::SwitchCaseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

