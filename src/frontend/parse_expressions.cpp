
#include "toolchain/parser.hpp"
#include "language/statements.hpp"
#include <cassert>

antlrcpp::Any ConcreteBasaltParserVisitor::visitExpression(BasaltParser::ExpressionContext *context) {
    assert (context->children.size() == 1);
    return visit(context->children[0]);
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitTerminalExpression(BasaltParser::TerminalExpressionContext *context) {
    assert (context->children.size() == 1);
    return visit(context->children[0]);
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitInfixOperator(BasaltParser::InfixOperatorContext *context) {
    assert (context->children.size() == 3);
    assert (visit(context->children[0]).is<Expression>());
    assert (visit(context->children[1]).is<BasaltSymbol>());
    assert (visit(context->children[2]).is<Expression>());
    std::string operator_text = context->children[1]->getText();
    Expression left_operand = visit(context->children[0]).as<Expression>();
    Expression right_operand = visit(context->children[2]).as<Expression>();
    return Expression { BinaryOperator {  operator_text, left_operand, right_operand  } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDotMemberAccess(BasaltParser::DotMemberAccessContext *context) {
    assert (context->children.size() == 3);
    assert (visit(context->children[0]).is<Expression>());
    assert (visit(context->children[1]).is<BasaltSymbol>());
    assert (visit(context->children[2]).is<Expression>());
    Expression left_operand = visit(context->children[0]).as<Expression>();
    Expression right_operand = visit(context->children[2]).as<Expression>();
    return Expression { BinaryOperator {  ".", left_operand, right_operand  } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPrefixOperator(BasaltParser::PrefixOperatorContext *context) {
    assert (context->children.size() == 2);
    assert (visit(context->children[0]).is<BasaltSymbol>());
    assert (visit(context->children[1]).is<Expression>());
    std::string operator_text = context->children[0]->getText();
    Expression operand = visit(context->children[1]).as<Expression>();
    return Expression { UnaryOperator { operator_text, operand  } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitSquareBracketsAccess(BasaltParser::SquareBracketsAccessContext *context) {
    assert (context->children.size() == 3);
    assert (visit(context->children[0]).is<Expression>());
    assert (visit(context->children[1]).is<BasaltSymbol>());
    assert (visit(context->children[2]).is<Expression>());
    Expression arraylike_expression = visit(context->children[0]).as<Expression>();
    Expression index_expression = visit(context->children[2]).as<Expression>();
    return Expression { BinaryOperator { "[square-brackets-access]", arraylike_expression, index_expression  } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitParenthesysDelimitedExpression(BasaltParser::ParenthesysDelimitedExpressionContext *context) {
    assert (context->children.size() == 3);
    assert (visit(context->children[0]).is<BasaltSymbol>());
    assert (visit(context->children[1]).is<Expression>());
    assert (visit(context->children[2]).is<BasaltSymbol>());
    Expression expression = visit(context->children[1]).as<Expression>();
    expression.wrap_in_parenthesis();
    return expression;
}
