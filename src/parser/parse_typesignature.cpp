
#include "toolchain/parser.hpp"
#include "language/statements.hpp"
#include <cassert>

antlrcpp::Any ConcreteBasaltParserVisitor::visitTypeSignature(BasaltParser::TypeSignatureContext *context) {
    assert(context->children.size() == 1);
    antlrcpp::Any type = visit(context->children[0]);
    assert(type.is<TypeSignature>());
    return type.as<TypeSignature>();
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitTypeName(BasaltParser::TypeNameContext *context) {
    assert(context->children.size() == 1);
    antlrcpp::Any type_name_as_string = visit(context->children[0]);
    assert(type_name_as_string.is<std::string>());
    std::string type_name = type_name_as_string.as<std::string>();
    return type_name;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPrimitiveType(BasaltParser::PrimitiveTypeContext *context) {
    assert(context->children.size() == 1);
    antlrcpp::Any type_name_as_string = visit(context->children[0]);
    assert(type_name_as_string.is<std::string>());
    std::string type_name = type_name_as_string.as<std::string>();
    return TypeSignature { PrimitiveType { type_name } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitCustomType(BasaltParser::CustomTypeContext *context) {
    assert(context->children.size() >= 1);
    assert(context->children.size() <= 2);
    antlrcpp::Any type = visit(context->children[0]);
    antlrcpp::Any generics = (context->children.size() == 2)
        ? visit(context->children[1])
        : nullptr ;
    assert(type.is<std::string>());
    std::string type_name = type.as<std::string>();
    std::vector<TypeSignature> generic_types = (generics.is<std::vector<TypeSignature>>())
        ? generics.as<std::vector<TypeSignature>>()
        : std::vector<TypeSignature> {};
    return TypeSignature { CustomType { type_name, generic_types } } ;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPointerType(BasaltParser::PointerTypeContext *context) {
    assert(context->children.size() == 2);
    assert(visit(context->children[0]).is<BasaltSymbol>() && visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::POINTER_SYMBOL);
    antlrcpp::Any type = visit(context->children[1]);
    assert(type.is<TypeSignature>());
    return TypeSignature { PointerType { type.as<TypeSignature>() } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitSliceType(BasaltParser::SliceTypeContext *context) {
    assert(context->children.size() == 2);
    assert(visit(context->children[0]).is<BasaltSymbol>() && visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::SLICE_SYMBOL);
    antlrcpp::Any type = visit(context->children[1]);
    assert(type.is<TypeSignature>());
    return TypeSignature { SliceType { type.as<TypeSignature>() } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitArrayType(BasaltParser::ArrayTypeContext *context) {
    assert(context->children.size() == 4);
    assert(visit(context->children[0]).is<BasaltSymbol>() && visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::SQUARE_BRACKETS_OPEN);
    antlrcpp::Any length_literal = visit(context->children[1]);
    assert(length_literal.is<IntLiteral>());
    size_t length = length_literal.as<IntLiteral>().value;
    assert(visit(context->children[2]).is<BasaltSymbol>() && visit(context->children[2]).as<BasaltSymbol>() == BasaltSymbol::SQUARE_BRACKETS_CLOSE);
    antlrcpp::Any type = visit(context->children[3]);
    assert(type.is<TypeSignature>());
    return TypeSignature { ArrayType { length, type.as<TypeSignature>() } };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitActualTypeParametersSection(BasaltParser::ActualTypeParametersSectionContext *context) {
    assert(context->children.size() >= 3);
    assert(visit(context->children[0]).is<BasaltSymbol>() && visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::DIAMOND_OPEN);
    const size_t last = context->children.size() - 1;
    assert(visit(context->children[last]).is<BasaltSymbol>() && visit(context->children[last]).as<BasaltSymbol>() == BasaltSymbol::DIAMOND_CLOSE);
    std::vector<TypeSignature> types;
    for (size_t index = 1; index < last; index++){
        antlrcpp::Any type_name = visit(context->children[index]);
        assert(type_name.is<TypeSignature>());
        types.push_back(type_name.as<TypeSignature>());
    }
    return types;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFormalTypeParametersSection(BasaltParser::FormalTypeParametersSectionContext *context) {
    assert(context->children.size() >= 3);
    assert(visit(context->children[0]).is<BasaltSymbol>() && visit(context->children[0]).as<BasaltSymbol>() == BasaltSymbol::DIAMOND_OPEN);
    const size_t last = context->children.size() - 1;
    assert(visit(context->children[last]).is<BasaltSymbol>() && visit(context->children[last]).as<BasaltSymbol>() == BasaltSymbol::DIAMOND_CLOSE);
    std::vector<std::string> type_names;
    for (size_t index = 1; index < last; index++){
        antlrcpp::Any type_name = visit(context->children[index]);
        assert(type_name.is<std::string>());
        type_names.push_back(type_name.as<std::string>());
    }
    return type_names;
}
