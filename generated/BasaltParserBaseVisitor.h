
// Generated from BasaltParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "BasaltParserVisitor.h"


/**
 * This class provides an empty implementation of BasaltParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BasaltParserBaseVisitor : public BasaltParserVisitor {
public:

  virtual antlrcpp::Any visitProgram(BasaltParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefinition(BasaltParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrow(BasaltParser::ArrowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerDereference(BasaltParser::PointerDereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerSymbol(BasaltParser::PointerSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSliceSymbol(BasaltParser::SliceSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddressOf(BasaltParser::AddressOfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSquareBracketsClose(BasaltParser::SquareBracketsCloseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesysOpen(BasaltParser::ParenthesysOpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesysClose(BasaltParser::ParenthesysCloseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComma(BasaltParser::CommaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSemicolon(BasaltParser::SemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColon(BasaltParser::ColonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDot(BasaltParser::DotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(BasaltParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinus(BasaltParser::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStar(BasaltParser::StarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(BasaltParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMod(BasaltParser::ModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPow(BasaltParser::PowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalAnd(BasaltParser::LogicalAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOr(BasaltParser::LogicalOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalXor(BasaltParser::LogicalXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalNot(BasaltParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalEqual(BasaltParser::LogicalEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalNotEqual(BasaltParser::LogicalNotEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalGt(BasaltParser::LogicalGtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalLt(BasaltParser::LogicalLtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalGe(BasaltParser::LogicalGeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalLe(BasaltParser::LogicalLeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInc(BasaltParser::IncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec(BasaltParser::DecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(BasaltParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddeq(BasaltParser::AddeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubeq(BasaltParser::SubeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMuleq(BasaltParser::MuleqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiveq(BasaltParser::DiveqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModeq(BasaltParser::ModeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPoweq(BasaltParser::PoweqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiamondOpen(BasaltParser::DiamondOpenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiamondClose(BasaltParser::DiamondCloseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarKeyword(BasaltParser::VarKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstKeyword(BasaltParser::ConstKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructKeyword(BasaltParser::StructKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionKeyword(BasaltParser::UnionKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncKeyword(BasaltParser::FuncKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnKeyword(BasaltParser::ReturnKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakKeyword(BasaltParser::BreakKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueKeyword(BasaltParser::ContinueKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfKeyword(BasaltParser::IfKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseKeyword(BasaltParser::ElseKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileKeyword(BasaltParser::WhileKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilKeyword(BasaltParser::UntilKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchKeyword(BasaltParser::SwitchKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultKeyword(BasaltParser::DefaultKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(BasaltParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(BasaltParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveType(BasaltParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntLiteral(BasaltParser::IntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(BasaltParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolLiteral(BasaltParser::BoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharLiteral(BasaltParser::CharLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(BasaltParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullKeyword(BasaltParser::NullKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(BasaltParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDeclaration(BasaltParser::ConstDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructDefinition(BasaltParser::StructDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructField(BasaltParser::StructFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionDefinition(BasaltParser::UnionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(BasaltParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(BasaltParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallStatement(BasaltParser::FunctionCallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSignature(BasaltParser::TypeSignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCustomType(BasaltParser::CustomTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerType(BasaltParser::PointerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSliceType(BasaltParser::SliceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayType(BasaltParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(BasaltParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerminalExpression(BasaltParser::TerminalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfixOperator(BasaltParser::InfixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDotMemberAccess(BasaltParser::DotMemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixOperator(BasaltParser::PrefixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayLiteral(BasaltParser::ArrayLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstructionBlock(BasaltParser::InstructionBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(BasaltParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(BasaltParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(BasaltParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(BasaltParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStatement(BasaltParser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(BasaltParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileLoop(BasaltParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilLoop(BasaltParser::UntilLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStatement(BasaltParser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchCase(BasaltParser::SwitchCaseContext *ctx) override {
    return visitChildren(ctx);
  }


};

