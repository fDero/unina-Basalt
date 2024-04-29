
#include "toolchain/parser.hpp"
#include "language/statements.hpp"
#include <cassert>

antlrcpp::Any ConcreteBasaltParserVisitor::visitIntLiteral(BasaltParser::IntLiteralContext *context) {
    assert( context->children.size() == 1);
    assert ( visit(context->children[0]).is<IntLiteralText>());
    IntLiteralText literal = visit(context->children[0]).as<IntLiteralText>();
    return IntLiteral { std::stoi(literal) };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFloatLiteral(BasaltParser::FloatLiteralContext *context) {
    assert( context->children.size() == 1);
    assert ( visit(context->children[0]).is<FloatLiteralText>());
    FloatLiteralText literal = visit(context->children[0]).as<FloatLiteralText>();
    return FloatLiteral { std::stod(literal) };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitBoolLiteral(BasaltParser::BoolLiteralContext *context) {
    assert( context->children.size() == 1);
    assert ( visit(context->children[0]).is<BoolLiteralText>());
    BoolLiteralText literal = visit(context->children[0]).as<BoolLiteralText>();
    return BoolLiteral { literal == "true" };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitCharLiteral(BasaltParser::CharLiteralContext *context) {
    assert( context->children.size() == 1);
    assert ( visit(context->children[0]).is<CharLiteralText>());
    assert ( visit(context->children[0]).as<CharLiteralText>().size() == 3);
    CharLiteralText literal = visit(context->children[0]).as<CharLiteralText>();
    return CharLiteral { literal[1] };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitStringLiteral(BasaltParser::StringLiteralContext *context) {
    assert( context->children.size() == 1);
    assert ( visit(context->children[0]).is<StringLiteralText>());
    StringLiteralText literal = visit(context->children[0]).as<StringLiteralText>();
    return StringLiteral { literal };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitIdentifier(BasaltParser::IdentifierContext *context) {
    assert( context->children.size() == 1);
    assert ( visit(context->children[0]).is<IdentifierText>());
    IdentifierText literal = visit(context->children[0]).as<IdentifierText>();
    return Identifier { literal };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitArrayLiteral(BasaltParser::ArrayLiteralContext *context) {
    assert( context->children.size() == 1);
    assert ( visit(context->children[0]).is<IdentifierText>());
    IdentifierText literal = visit(context->children[0]).as<IdentifierText>();
    return Identifier { literal };
}
