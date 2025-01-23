
#include "antlr4-runtime.h"
#include "BasaltLexer.h"
#include "BasaltParser.h"
#include "BasaltParserVisitor.h"

class ConcreteBasaltParserVisitor : public BasaltParserVisitor {
public:

    // GLOBAL SCOPE

    virtual antlrcpp::Any visitProgram(BasaltParser::ProgramContext *context) override;




    // DEFINITIONS

    virtual antlrcpp::Any visitDefinition(BasaltParser::DefinitionContext *context) override;

    virtual antlrcpp::Any visitVariableDeclaration(BasaltParser::VariableDeclarationContext *context) override;

    virtual antlrcpp::Any visitConstDeclaration(BasaltParser::ConstDeclarationContext *context) override;

    virtual antlrcpp::Any visitStructDefinition(BasaltParser::StructDefinitionContext *context) override;

    virtual antlrcpp::Any visitStructField(BasaltParser::StructFieldContext *context) override;

    virtual antlrcpp::Any visitUnionDefinition(BasaltParser::UnionDefinitionContext *context) override;

    virtual antlrcpp::Any visitFunctionDefinition(BasaltParser::FunctionDefinitionContext *context) override;

    virtual antlrcpp::Any visitFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext *context) override;

    virtual antlrcpp::Any visitFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext *context) override;





    // LITERALS & IDENTIFIERS  

    virtual antlrcpp::Any visitIdentifier(BasaltParser::IdentifierContext *context) override;

    virtual antlrcpp::Any visitIntLiteral(BasaltParser::IntLiteralContext *context) override;

    virtual antlrcpp::Any visitFloatLiteral(BasaltParser::FloatLiteralContext *context) override;

    virtual antlrcpp::Any visitBoolLiteral(BasaltParser::BoolLiteralContext *context) override;

    virtual antlrcpp::Any visitCharLiteral(BasaltParser::CharLiteralContext *context) override;

    virtual antlrcpp::Any visitStringLiteral(BasaltParser::StringLiteralContext *context) override;

    virtual antlrcpp::Any visitArrayLiteral(BasaltParser::ArrayLiteralContext *context) override;




    // EXPRESSIONS

    virtual antlrcpp::Any visitExpression(BasaltParser::ExpressionContext *context) override;

    virtual antlrcpp::Any visitTerminalExpression(BasaltParser::TerminalExpressionContext *context) override;

    virtual antlrcpp::Any visitInfixOperator(BasaltParser::InfixOperatorContext *context) override;

    virtual antlrcpp::Any visitDotMemberAccess(BasaltParser::DotMemberAccessContext *context) override;

    virtual antlrcpp::Any visitPrefixOperator(BasaltParser::PrefixOperatorContext *context) override;

    virtual antlrcpp::Any visitSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext *context) override;

    virtual antlrcpp::Any visitParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext *context) override;




    // FUNCTION CALLS

    virtual antlrcpp::Any visitFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext *context) override;

    virtual antlrcpp::Any visitFunctionCall(BasaltParser::FunctionCallContext *context) override;

    virtual antlrcpp::Any visitActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext *context) override;




    // STATEMENTS
    
    virtual antlrcpp::Any visitMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext *context) override;

    virtual antlrcpp::Any visitStatement(BasaltParser::StatementContext *context) override;

    virtual antlrcpp::Any visitReturnStatement(BasaltParser::ReturnStatementContext *context) override;

    virtual antlrcpp::Any visitBreakStatement(BasaltParser::BreakStatementContext *context) override;

    virtual antlrcpp::Any visitContinueStatement(BasaltParser::ContinueStatementContext *context) override;

    virtual antlrcpp::Any visitInstructionBlock(BasaltParser::InstructionBlockContext *context) override;

    virtual antlrcpp::Any visitIfStatement(BasaltParser::IfStatementContext *context) override;

    virtual antlrcpp::Any visitWhileLoop(BasaltParser::WhileLoopContext *context) override;

    virtual antlrcpp::Any visitUntilLoop(BasaltParser::UntilLoopContext *context) override;

    virtual antlrcpp::Any visitAssignment(BasaltParser::AssignmentContext *context) override;

    virtual antlrcpp::Any visitFunctionCallStatement(BasaltParser::FunctionCallStatementContext *context) override;

    // TODO
    virtual antlrcpp::Any visitSwitchStatement(BasaltParser::SwitchStatementContext *context) override {
        throw std::runtime_error("Not implemented");
    } 

    // TODO
    virtual antlrcpp::Any visitSwitchCase(BasaltParser::SwitchCaseContext *context) override { 
        throw std::runtime_error("Not implemented"); 
    }





    // TYPES

    virtual antlrcpp::Any visitTypeName(BasaltParser::TypeNameContext *context) override;

    virtual antlrcpp::Any visitPrimitiveType(BasaltParser::PrimitiveTypeContext *context) override;

    virtual antlrcpp::Any visitTypeSignature(BasaltParser::TypeSignatureContext *context) override;

    virtual antlrcpp::Any visitCustomType(BasaltParser::CustomTypeContext *context) override;

    virtual antlrcpp::Any visitPointerType(BasaltParser::PointerTypeContext *context) override;

    virtual antlrcpp::Any visitSliceType(BasaltParser::SliceTypeContext *context) override;

    virtual antlrcpp::Any visitArrayType(BasaltParser::ArrayTypeContext *context) override;

    virtual antlrcpp::Any visitActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext *context) override;

    virtual antlrcpp::Any visitFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext *context) override;


    

    // KEYWPORDS AND SYMBOLS

    virtual antlrcpp::Any visitArrow(BasaltParser::ArrowContext *context) override;

    virtual antlrcpp::Any visitPointerDereference(BasaltParser::PointerDereferenceContext *context) override;

    virtual antlrcpp::Any visitPointerSymbol(BasaltParser::PointerSymbolContext *context) override;

    virtual antlrcpp::Any visitSliceSymbol(BasaltParser::SliceSymbolContext *context) override;

    virtual antlrcpp::Any visitAddressOf(BasaltParser::AddressOfContext *context) override;

    virtual antlrcpp::Any visitSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext *context) override;

    virtual antlrcpp::Any visitSquareBracketsClose(BasaltParser::SquareBracketsCloseContext *context) override;

    virtual antlrcpp::Any visitParenthesysOpen(BasaltParser::ParenthesysOpenContext *context) override;

    virtual antlrcpp::Any visitParenthesysClose(BasaltParser::ParenthesysCloseContext *context) override;

    virtual antlrcpp::Any visitCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext *context) override;

    virtual antlrcpp::Any visitCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext *context) override;

    virtual antlrcpp::Any visitComma(BasaltParser::CommaContext *context) override;

    virtual antlrcpp::Any visitSemicolon(BasaltParser::SemicolonContext *context) override;

    virtual antlrcpp::Any visitColon(BasaltParser::ColonContext *context) override;

    virtual antlrcpp::Any visitDot(BasaltParser::DotContext *context) override;

    virtual antlrcpp::Any visitPlus(BasaltParser::PlusContext *context) override;

    virtual antlrcpp::Any visitMinus(BasaltParser::MinusContext *context) override;

    virtual antlrcpp::Any visitStar(BasaltParser::StarContext *context) override;

    virtual antlrcpp::Any visitDiv(BasaltParser::DivContext *context) override;

    virtual antlrcpp::Any visitMod(BasaltParser::ModContext *context) override;

    virtual antlrcpp::Any visitPow(BasaltParser::PowContext *context) override;

    virtual antlrcpp::Any visitLogicalAnd(BasaltParser::LogicalAndContext *context) override;

    virtual antlrcpp::Any visitLogicalOr(BasaltParser::LogicalOrContext *context) override;

    virtual antlrcpp::Any visitLogicalXor(BasaltParser::LogicalXorContext *context) override;

    virtual antlrcpp::Any visitLogicalNot(BasaltParser::LogicalNotContext *context) override;

    virtual antlrcpp::Any visitLogicalEqual(BasaltParser::LogicalEqualContext *context) override;

    virtual antlrcpp::Any visitLogicalNotEqual(BasaltParser::LogicalNotEqualContext *context) override;

    virtual antlrcpp::Any visitLogicalGt(BasaltParser::LogicalGtContext *context) override;

    virtual antlrcpp::Any visitLogicalLt(BasaltParser::LogicalLtContext *context) override;

    virtual antlrcpp::Any visitLogicalGe(BasaltParser::LogicalGeContext *context) override;

    virtual antlrcpp::Any visitLogicalLe(BasaltParser::LogicalLeContext *context) override;

    virtual antlrcpp::Any visitInc(BasaltParser::IncContext *context) override;

    virtual antlrcpp::Any visitDec(BasaltParser::DecContext *context) override;

    virtual antlrcpp::Any visitAssign(BasaltParser::AssignContext *context) override;

    virtual antlrcpp::Any visitAddeq(BasaltParser::AddeqContext *context) override;

    virtual antlrcpp::Any visitSubeq(BasaltParser::SubeqContext *context) override;

    virtual antlrcpp::Any visitMuleq(BasaltParser::MuleqContext *context) override;

    virtual antlrcpp::Any visitDiveq(BasaltParser::DiveqContext *context) override;

    virtual antlrcpp::Any visitModeq(BasaltParser::ModeqContext *context) override;

    virtual antlrcpp::Any visitPoweq(BasaltParser::PoweqContext *context) override;

    virtual antlrcpp::Any visitDiamondOpen(BasaltParser::DiamondOpenContext *context) override;

    virtual antlrcpp::Any visitDiamondClose(BasaltParser::DiamondCloseContext *context) override;

    virtual antlrcpp::Any visitVarKeyword(BasaltParser::VarKeywordContext *context) override;

    virtual antlrcpp::Any visitConstKeyword(BasaltParser::ConstKeywordContext *context) override;

    virtual antlrcpp::Any visitStructKeyword(BasaltParser::StructKeywordContext *context) override;

    virtual antlrcpp::Any visitUnionKeyword(BasaltParser::UnionKeywordContext *context) override;

    virtual antlrcpp::Any visitFuncKeyword(BasaltParser::FuncKeywordContext *context) override;

    virtual antlrcpp::Any visitReturnKeyword(BasaltParser::ReturnKeywordContext *context) override;

    virtual antlrcpp::Any visitBreakKeyword(BasaltParser::BreakKeywordContext *context) override;

    virtual antlrcpp::Any visitContinueKeyword(BasaltParser::ContinueKeywordContext *context) override;

    virtual antlrcpp::Any visitIfKeyword(BasaltParser::IfKeywordContext *context) override;

    virtual antlrcpp::Any visitElseKeyword(BasaltParser::ElseKeywordContext *context) override;

    virtual antlrcpp::Any visitWhileKeyword(BasaltParser::WhileKeywordContext *context) override;

    virtual antlrcpp::Any visitUntilKeyword(BasaltParser::UntilKeywordContext *context) override;

    virtual antlrcpp::Any visitSwitchKeyword(BasaltParser::SwitchKeywordContext *context) override;

    virtual antlrcpp::Any visitDefaultKeyword(BasaltParser::DefaultKeywordContext *context) override;

    virtual antlrcpp::Any visitNullKeyword(BasaltParser::NullKeywordContext *context) override;
};
