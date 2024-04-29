
#include "toolchain/parser.hpp"
#include "language/statements.hpp"
#include <cassert>

antlrcpp::Any ConcreteBasaltParserVisitor::visitBreakStatement(BasaltParser::BreakStatementContext *context) {
    assert ( context->children.size() == 2 );
    assert ( visit(context->children[0]).is<BasaltKeyword>());
    assert ( visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::BREAK );
    assert ( visit(context->children[1]).is<BasaltSymbol>());
    assert ( visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON );
    return (Statement) Break {};
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitContinueStatement(BasaltParser::ContinueStatementContext *context) {
    assert ( context->children.size() == 2 );
    assert ( visit(context->children[0]).is<BasaltKeyword>());
    assert ( visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::CONTINUE );
    assert ( visit(context->children[1]).is<BasaltSymbol>());
    assert ( visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON );
    return (Statement) Continue {};
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitReturnStatement(BasaltParser::ReturnStatementContext *context) {
    assert ( context->children.size() <= 3 );
    assert ( context->children.size() >= 2 );
    assert ( visit(context->children[0]).is<BasaltKeyword>());
    assert ( visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::RETURN );
    if ( context->children.size() == 3 ) {
        assert ( visit(context->children[1]).is<Expression>());
        assert ( visit(context->children[2]).is<BasaltSymbol>());
        assert ( visit(context->children[2]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON );
        return Return { visit(context->children[1]).as<Expression>() };
    }
    else {
        assert ( visit(context->children[1]).is<BasaltSymbol>());
        assert ( visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON );
        return (Statement) Return { std::nullopt };
    }
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitIfStatement(BasaltParser::IfStatementContext *context) {
    assert( context->children.size() >= 5 );
    assert ( visit(context->children[0]).is<BasaltKeyword>());
    assert ( visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::IF );
    assert ( visit(context->children[1]).is<BasaltSymbol>());
    assert ( visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_OPEN );
    assert ( visit(context->children[2]).is<Expression>());
    const Expression& condition = visit(context->children[2]).as<Expression>();
    assert ( visit(context->children[3]).is<BasaltSymbol>());
    assert ( visit(context->children[3]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_CLOSE );
    assert ( visit(context->children[4]).is<std::vector<Statement>>());
    const std::vector<Statement>& then_brench = visit(context->children[4]).as<std::vector<Statement>>();
    if ( context->children.size() == 7 ) {
        assert ( visit(context->children[5]).is<BasaltKeyword>());
        assert ( visit(context->children[5]).as<BasaltKeyword>() == BasaltKeyword::ELSE );
        assert ( visit(context->children[6]).is<std::vector<Statement>>());
        const std::vector<Statement>& else_brench = visit(context->children[6]).as<std::vector<Statement>>();
        return Conditional { condition, then_brench, else_brench };
    }
    else {
        assert( context->children.size() == 5 );
        return (Statement) Conditional { condition, then_brench, {} };
    }
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitWhileLoop(BasaltParser::WhileLoopContext *context) {
    assert( context->children.size() == 5 );
    assert ( visit(context->children[0]).is<BasaltKeyword>());
    assert ( visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::WHILE );
    assert ( visit(context->children[1]).is<BasaltSymbol>());
    assert ( visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_OPEN );
    assert ( visit(context->children[2]).is<Expression>());
    const Expression& condition = visit(context->children[2]).as<Expression>();
    assert ( visit(context->children[3]).is<BasaltSymbol>());
    assert ( visit(context->children[3]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_CLOSE );
    assert ( visit(context->children[4]).is<std::vector<Statement>>());
    const std::vector<Statement>& code = visit(context->children[4]).as<std::vector<Statement>>();
    return (Statement) WhileLoop { condition, code };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitUntilLoop(BasaltParser::UntilLoopContext *context) {
    assert( context->children.size() == 5 );
    assert ( visit(context->children[0]).is<BasaltKeyword>());
    assert ( visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::WHILE );
    assert ( visit(context->children[1]).is<BasaltSymbol>());
    assert ( visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_OPEN );
    assert ( visit(context->children[2]).is<Expression>());
    const Expression& condition = visit(context->children[2]).as<Expression>();
    assert ( visit(context->children[3]).is<BasaltSymbol>());
    assert ( visit(context->children[3]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_CLOSE );
    assert ( visit(context->children[4]).is<std::vector<Statement>>());
    const std::vector<Statement>& code = visit(context->children[4]).as<std::vector<Statement>>();
    return (Statement) UntilLoop { condition, code };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitInstructionBlock(BasaltParser::InstructionBlockContext *context) {
    assert( context->children.size() == 1 );
    antlrcpp::Any code = visit(context->children[0]);
    if (code.is<Statement>()) {
        return std::vector<Statement> { code.as<Statement>() };
    }
    else {
        assert (code.is<std::vector<Statement>>());
        return code.as<std::vector<Statement>>();
    }
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitMultilineScopedInstructionBlock(BasaltParser::MultilineScopedInstructionBlockContext *context) {
    assert( context->children.size() >= 2 );
    assert ( visit(context->children[0]).is<BasaltSymbol>());
    assert ( visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::CURLY_BRACKETS_OPEN );
    std::vector<Statement> statements;
    while (statements.size() < context->children.size() - 2) {
        antlrcpp::Any statement = visit(context->children[statements.size() - 2]);
        assert (statement.is<Statement>());
        statements.push_back(statement.as<Statement>());
    }
    size_t last = context->children.size() - 1;
    assert ( visit(context->children[last]).is<BasaltSymbol>());
    assert ( visit(context->children[last]).as<BasaltSymbol>() == BasaltSymbol::CURLY_BRACKETS_CLOSE );
    return statements;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitStatement(BasaltParser::StatementContext *context) {
    assert( context->children.size() == 1 );
    return visit(context->children[0]);
}