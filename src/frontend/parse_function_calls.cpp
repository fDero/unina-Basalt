
#include "toolchain/parser.hpp"
#include "language/statements.hpp"
#include <cassert>

antlrcpp::Any ConcreteBasaltParserVisitor::visitFunctionCallStatement(BasaltParser::FunctionCallStatementContext *context) {
    assert(context->children.size() == 2);
    antlrcpp::Any function_call = visit(context->children[0]);
    assert(visit(context->children[1]).is<BasaltSymbol>() && visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON);
    assert(function_call.is<Expression>());
    assert(function_call.as<Expression>().is<FunctionCall>());
    return (Statement) FunctionCall { function_call.as<Expression>().get<FunctionCall>() };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFunctionCall(BasaltParser::FunctionCallContext *context) {
    std::vector<TypeSignature> instanciated_generics;
    std::vector<Expression> arguments;
    std::string function_name;
    if (context->children.size() == 2) {
        antlrcpp::Any function_name_identifier = visit(context->children[0]);
        assert(function_name_identifier.is<Identifier>());
        antlrcpp::Any arguments_source = visit(context->children[1]);
        assert(arguments_source.is<std::vector<Expression>>());
        function_name = function_name_identifier.as<Identifier>().name;
        arguments = arguments_source.as<std::vector<Expression>>();
    }
    else {
        assert(context->children.size() == 3);
        antlrcpp::Any function_name_identifier = visit(context->children[0]);
        assert(function_name_identifier.is<Identifier>());
        antlrcpp::Any instanciated_generics_source = visit(context->children[1]);
        assert(instanciated_generics_source.is<std::vector<TypeSignature>>());
        antlrcpp::Any arguments_source = visit(context->children[2]);
        assert(arguments_source.is<std::vector<Expression>>());
        function_name = function_name_identifier.as<Identifier>().name;
        instanciated_generics = instanciated_generics_source.as<std::vector<TypeSignature>>();
        arguments = arguments_source.as<std::vector<Expression>>();
    }
    return Expression { FunctionCall { function_name, arguments, instanciated_generics } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFunctionReturnTypeSection(BasaltParser::FunctionReturnTypeSectionContext *context) {
    assert(context->children.size() == 2);
    assert(visit(context->children[0]).is<BasaltSymbol>() && visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_OPEN);
    antlrcpp::Any out = visit(context->children[1]);
    assert(out.is<Expression>());
    return out.as<Expression>();
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitActualFunctionCallArgumentsSection(BasaltParser::ActualFunctionCallArgumentsSectionContext *context) {
    assert(context->children.size() >= 2);
    assert(visit(context->children[0]).is<BasaltSymbol>() && visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_OPEN);
    std::vector<Expression> args;
    if (context->children.size() == 2) {
        assert(visit(context->children[1]).is<BasaltSymbol>() && visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::PARENTHESYS_CLOSE);
    }
    else {
        for (size_t index = 1; index < context->children.size() - 1; index += 2) {
            antlrcpp::Any argument = visit(context->children[index]);
            assert(argument.is<Expression>());
            args.push_back(argument.as<Expression>());
            assert(visit(context->children[index + 1]).is<BasaltSymbol>() && visit(context->children[index + 1]).as<BasaltSymbol>() == BasaltSymbol::COMMA);
        }
    }
    return args;
}