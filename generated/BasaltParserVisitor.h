
// Generated from BasaltParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "BasaltParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BasaltParser.
 */
class  BasaltParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BasaltParser.
   */
    virtual antlrcpp::Any visitProgram(BasaltParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitDefinition(BasaltParser::DefinitionContext *context) = 0;

    virtual antlrcpp::Any visitArrow(BasaltParser::ArrowContext *context) = 0;

    virtual antlrcpp::Any visitPointerDereference(BasaltParser::PointerDereferenceContext *context) = 0;

    virtual antlrcpp::Any visitPointerSymbol(BasaltParser::PointerSymbolContext *context) = 0;

    virtual antlrcpp::Any visitSliceSymbol(BasaltParser::SliceSymbolContext *context) = 0;

    virtual antlrcpp::Any visitAddressOf(BasaltParser::AddressOfContext *context) = 0;

    virtual antlrcpp::Any visitSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext *context) = 0;

    virtual antlrcpp::Any visitSquareBracketsClose(BasaltParser::SquareBracketsCloseContext *context) = 0;

    virtual antlrcpp::Any visitParenthesysOpen(BasaltParser::ParenthesysOpenContext *context) = 0;

    virtual antlrcpp::Any visitParenthesysClose(BasaltParser::ParenthesysCloseContext *context) = 0;

    virtual antlrcpp::Any visitCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext *context) = 0;

    virtual antlrcpp::Any visitCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext *context) = 0;

    virtual antlrcpp::Any visitComma(BasaltParser::CommaContext *context) = 0;

    virtual antlrcpp::Any visitSemicolon(BasaltParser::SemicolonContext *context) = 0;

    virtual antlrcpp::Any visitColon(BasaltParser::ColonContext *context) = 0;

    virtual antlrcpp::Any visitDot(BasaltParser::DotContext *context) = 0;

    virtual antlrcpp::Any visitPlus(BasaltParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitMinus(BasaltParser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitStar(BasaltParser::StarContext *context) = 0;

    virtual antlrcpp::Any visitDiv(BasaltParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitMod(BasaltParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitPow(BasaltParser::PowContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAnd(BasaltParser::LogicalAndContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOr(BasaltParser::LogicalOrContext *context) = 0;

    virtual antlrcpp::Any visitLogicalXor(BasaltParser::LogicalXorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalNot(BasaltParser::LogicalNotContext *context) = 0;

    virtual antlrcpp::Any visitLogicalEqual(BasaltParser::LogicalEqualContext *context) = 0;

    virtual antlrcpp::Any visitLogicalNotEqual(BasaltParser::LogicalNotEqualContext *context) = 0;

    virtual antlrcpp::Any visitLogicalGt(BasaltParser::LogicalGtContext *context) = 0;

    virtual antlrcpp::Any visitLogicalLt(BasaltParser::LogicalLtContext *context) = 0;

    virtual antlrcpp::Any visitLogicalGe(BasaltParser::LogicalGeContext *context) = 0;

    virtual antlrcpp::Any visitLogicalLe(BasaltParser::LogicalLeContext *context) = 0;

    virtual antlrcpp::Any visitInc(BasaltParser::IncContext *context) = 0;

    virtual antlrcpp::Any visitDec(BasaltParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitAssign(BasaltParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitAddeq(BasaltParser::AddeqContext *context) = 0;

    virtual antlrcpp::Any visitSubeq(BasaltParser::SubeqContext *context) = 0;

    virtual antlrcpp::Any visitMuleq(BasaltParser::MuleqContext *context) = 0;

    virtual antlrcpp::Any visitDiveq(BasaltParser::DiveqContext *context) = 0;

    virtual antlrcpp::Any visitModeq(BasaltParser::ModeqContext *context) = 0;

    virtual antlrcpp::Any visitPoweq(BasaltParser::PoweqContext *context) = 0;

    virtual antlrcpp::Any visitDiamondOpen(BasaltParser::DiamondOpenContext *context) = 0;

    virtual antlrcpp::Any visitDiamondClose(BasaltParser::DiamondCloseContext *context) = 0;

    virtual antlrcpp::Any visitVarKeyword(BasaltParser::VarKeywordContext *context) = 0;

    virtual antlrcpp::Any visitConstKeyword(BasaltParser::ConstKeywordContext *context) = 0;

    virtual antlrcpp::Any visitStructKeyword(BasaltParser::StructKeywordContext *context) = 0;

    virtual antlrcpp::Any visitUnionKeyword(BasaltParser::UnionKeywordContext *context) = 0;

    virtual antlrcpp::Any visitFuncKeyword(BasaltParser::FuncKeywordContext *context) = 0;

    virtual antlrcpp::Any visitReturnKeyword(BasaltParser::ReturnKeywordContext *context) = 0;

    virtual antlrcpp::Any visitBreakKeyword(BasaltParser::BreakKeywordContext *context) = 0;

    virtual antlrcpp::Any visitContinueKeyword(BasaltParser::ContinueKeywordContext *context) = 0;

    virtual antlrcpp::Any visitIfKeyword(BasaltParser::IfKeywordContext *context) = 0;

    virtual antlrcpp::Any visitElseKeyword(BasaltParser::ElseKeywordContext *context) = 0;

    virtual antlrcpp::Any visitWhileKeyword(BasaltParser::WhileKeywordContext *context) = 0;

    virtual antlrcpp::Any visitUntilKeyword(BasaltParser::UntilKeywordContext *context) = 0;

    virtual antlrcpp::Any visitSwitchKeyword(BasaltParser::SwitchKeywordContext *context) = 0;

    virtual antlrcpp::Any visitDefaultKeyword(BasaltParser::DefaultKeywordContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(BasaltParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(BasaltParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveType(BasaltParser::PrimitiveTypeContext *context) = 0;

    virtual antlrcpp::Any visitIntLiteral(BasaltParser::IntLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(BasaltParser::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBoolLiteral(BasaltParser::BoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitCharLiteral(BasaltParser::CharLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(BasaltParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitNullKeyword(BasaltParser::NullKeywordContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(BasaltParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstDeclaration(BasaltParser::ConstDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStructDefinition(BasaltParser::StructDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitStructField(BasaltParser::StructFieldContext *context) = 0;

    virtual antlrcpp::Any visitUnionDefinition(BasaltParser::UnionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(BasaltParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(BasaltParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallStatement(BasaltParser::FunctionCallStatementContext *context) = 0;

    virtual antlrcpp::Any visitActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext *context) = 0;

    virtual antlrcpp::Any visitTypeSignature(BasaltParser::TypeSignatureContext *context) = 0;

    virtual antlrcpp::Any visitCustomType(BasaltParser::CustomTypeContext *context) = 0;

    virtual antlrcpp::Any visitPointerType(BasaltParser::PointerTypeContext *context) = 0;

    virtual antlrcpp::Any visitSliceType(BasaltParser::SliceTypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(BasaltParser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext *context) = 0;

    virtual antlrcpp::Any visitFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext *context) = 0;

    virtual antlrcpp::Any visitExpression(BasaltParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTerminalExpression(BasaltParser::TerminalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInfixOperator(BasaltParser::InfixOperatorContext *context) = 0;

    virtual antlrcpp::Any visitDotMemberAccess(BasaltParser::DotMemberAccessContext *context) = 0;

    virtual antlrcpp::Any visitPrefixOperator(BasaltParser::PrefixOperatorContext *context) = 0;

    virtual antlrcpp::Any visitSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext *context) = 0;

    virtual antlrcpp::Any visitArrayLiteral(BasaltParser::ArrayLiteralContext *context) = 0;

    virtual antlrcpp::Any visitParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInstructionBlock(BasaltParser::InstructionBlockContext *context) = 0;

    virtual antlrcpp::Any visitMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(BasaltParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitStatement(BasaltParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(BasaltParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(BasaltParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitContinueStatement(BasaltParser::ContinueStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(BasaltParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileLoop(BasaltParser::WhileLoopContext *context) = 0;

    virtual antlrcpp::Any visitUntilLoop(BasaltParser::UntilLoopContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(BasaltParser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchCase(BasaltParser::SwitchCaseContext *context) = 0;


};

