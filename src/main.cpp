#include <iostream>

#include "antlr4-runtime.h"
#include "BasaltLexer.h"
#include "BasaltParser.h"
#include "BasaltParserBaseVisitor.h"

class MyVisitor : public BasaltParserVisitor {
public:  
    virtual antlrcpp::Any visitProgram(BasaltParser::ProgramContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDefinition(BasaltParser::DefinitionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitVariableDeclaration(BasaltParser::VariableDeclarationContext *ctx) override {
        for (auto child : ctx->children) {
            std::cout << child->getText() << std::endl;
        }
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

    virtual antlrcpp::Any visitFunctionDefinition_arguments_list(BasaltParser::FunctionDefinition_arguments_listContext *ctx) override {
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
        // Return the result
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitTypeSignature(BasaltParser::TypeSignatureContext *ctx) override {
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

    virtual antlrcpp::Any visitInstructionBlock(BasaltParser::InstructionBlockContext *ctx) override {
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


int main(int , const char **) {
  antlr4::ANTLRInputStream input("var x : Int = 9 + 2;");
  BasaltLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  BasaltParser parser(&tokens);
  antlr4::tree::ParseTree& tree = *parser.program();

  MyVisitor visitor;
  visitor.visit(&tree);

  return 0;
}
