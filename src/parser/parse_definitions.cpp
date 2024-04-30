
#include "toolchain/parser.hpp"
#include "language/statements.hpp"
#include <cassert>

antlrcpp::Any ConcreteBasaltParserVisitor::visitDefinition(BasaltParser::DefinitionContext *context) {
    assert (context->children.size() == 1);
    return visit(context->children[0]);
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitVariableDeclaration(BasaltParser::VariableDeclarationContext *context) {
    assert(context->children.size() >= 5);
    assert(context->children.size() <= 7);
    assert(visit(context->children[0]).is<BasaltKeyword>() && visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::VAR);
    assert(visit(context->children[1]).is<Identifier>());
    Identifier identifier = visit(context->children[1]).as<Identifier>();
    assert(visit(context->children[2]).is<BasaltSymbol>() && visit(context->children[2]).as<BasaltSymbol>() == BasaltSymbol::COLON);
    assert(visit(context->children[3]).is<TypeSignature>());
    TypeSignature type_signature = visit(context->children[3]).as<TypeSignature>();
    std::optional<Expression> initial_value = std::nullopt;
    if (context->children.size() == 5) {
        assert(visit(context->children[4]).is<BasaltSymbol>() && visit(context->children[4]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON);
        return VariableDeclaration { identifier.name, type_signature, initial_value };
    }
    else {
        assert(context->children.size() == 7);
        assert(visit(context->children[4]).is<BasaltSymbol>() && visit(context->children[4]).as<BasaltSymbol>() == BasaltSymbol::ASSIGN);
        assert(visit(context->children[5]).is<Expression>());
        initial_value = visit(context->children[5]).as<Expression>();
        assert(visit(context->children[6]).is<BasaltSymbol>() && visit(context->children[6]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON);
        return VariableDeclaration { identifier.name, type_signature, initial_value };
    }
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitConstDeclaration(BasaltParser::ConstDeclarationContext *context) {
    assert(context->children.size() == 7);
    assert(visit(context->children[0]).is<BasaltKeyword>() && visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::CONST);
    assert(visit(context->children[1]).is<Identifier>());
    Identifier identifier = visit(context->children[1]).as<Identifier>();
    assert(visit(context->children[2]).is<BasaltSymbol>() && visit(context->children[2]).as<BasaltSymbol>() == BasaltSymbol::COLON);
    assert(visit(context->children[3]).is<TypeSignature>());
    TypeSignature type_signature = visit(context->children[3]).as<TypeSignature>();
    assert(visit(context->children[4]).is<BasaltSymbol>() && visit(context->children[4]).as<BasaltSymbol>() == BasaltSymbol::ASSIGN);
    assert(visit(context->children[5]).is<Expression>());
    Expression value = visit(context->children[5]).as<Expression>();
    assert(visit(context->children[6]).is<BasaltSymbol>() && visit(context->children[6]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON);
    return ConstDeclaration { identifier.name, type_signature, value };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitStructDefinition(BasaltParser::StructDefinitionContext *context) {
    assert(context->children.size() >= 4);
    assert(visit(context->children[0]).is<BasaltKeyword>() && visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::STRUCT);
    std::string struct_name = context->children[1]->getText();
    antlr4::tree::TerminalNode* terminal_node = dynamic_cast<antlr4::tree::TerminalNode*>(context->children[1]);
    antlr4::Token* token = terminal_node->getSymbol();
    StructDefinition struct_definition { token->getText() };
    assert(visit(context->children[2]).is<BasaltSymbol>() && visit(context->children[2]).as<BasaltSymbol>() == BasaltSymbol::CURLY_BRACKETS_OPEN);
    antlrcpp::Any next_child = next_child = visit(context->children[3]);
    size_t offset = 0;
    if (next_child.is<std::vector<std::string>>()){
        struct_definition.template_generics_names = next_child.as<std::vector<std::string>>();
        offset = 1;
    }
  next_child = visit(context->children[3+offset]);
    while (next_child.is<StructDefinition::Field>()) {
        struct_definition.fields.push_back(next_child.as<StructDefinition::Field>());
        size_t index = struct_definition.fields.size();
        next_child = visit(context->children[index+3+offset]);
    }
    while (next_child.is<StructDefinition::Field>());
    assert (next_child.is<BasaltSymbol>() && next_child.as<BasaltSymbol>() == BasaltSymbol::CURLY_BRACKETS_CLOSE);
    return struct_definition;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitStructField(BasaltParser::StructFieldContext *context) {
    assert(context->children.size() == 4);
    assert(visit(context->children[0]).is<Identifier>());
    Identifier identifier = visit(context->children[0]).as<Identifier>();
    assert(visit(context->children[1]).is<BasaltSymbol>() && visit(context->children[1]).as<BasaltSymbol>() == BasaltSymbol::COLON);
    assert(visit(context->children[2]).is<TypeSignature>());
    TypeSignature type_signature = visit(context->children[3]).as<TypeSignature>();
    assert(visit(context->children[3]).is<BasaltSymbol>() && visit(context->children[3]).as<BasaltSymbol>() == BasaltSymbol::SEMICOLON);
    return StructDefinition::Field{ identifier.name, type_signature };
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitUnionDefinition(BasaltParser::UnionDefinitionContext *context) {
    assert(context->children.size() >= 4);
    assert(visit(context->children[0]).is<BasaltKeyword>() && visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::UNION);
    antlr4::tree::TerminalNode* terminal_node = dynamic_cast<antlr4::tree::TerminalNode*>(context->children[1]);
    antlr4::Token* token = terminal_node->getSymbol();
    UnionDefinition union_definition { *token };
    antlrcpp::Any next_child = visit(context->children[2]);
    size_t offset = 0;
    if (next_child.is<std::vector<std::string>>()){
        union_definition.template_generics_names = next_child.as<std::vector<std::string>>();
        assert(visit(context->children[3]).is<BasaltSymbol>() && visit(context->children[3]).as<BasaltSymbol>() == BasaltSymbol::CURLY_BRACKETS_OPEN);
        offset = 1;
    }
    else {
        assert(visit(context->children[2]).is<BasaltSymbol>() && visit(context->children[2]).as<BasaltSymbol>() == BasaltSymbol::CURLY_BRACKETS_OPEN);
        offset = 0;
    }
    next_child = visit(context->children[3+offset]);
    while (next_child.is<TypeSignature>()) {
        union_definition.types.push_back(next_child.as<TypeSignature>());
        size_t index = union_definition.types.size();
        next_child = visit(context->children[index+3+offset]);
    }
    assert (next_child.is<BasaltSymbol>() && next_child.as<BasaltSymbol>() == BasaltSymbol::CURLY_BRACKETS_CLOSE);
    return union_definition;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFunctionDefinition(BasaltParser::FunctionDefinitionContext *context) {
    assert(context->children.size() >= 4);
    assert(visit(context->children[0]).is<BasaltKeyword>() && visit(context->children[0]).as<BasaltKeyword>() == BasaltKeyword::FUNC);
    antlr4::tree::TerminalNode* terminal_node = dynamic_cast<antlr4::tree::TerminalNode*>(context->children[1]);
    antlr4::Token* token = terminal_node->getSymbol();
    FunctionDefinition func_def { *token };
    antlrcpp::Any next_child = visit(context->children[2]);
    size_t offset = 0;
    if (next_child.is<std::vector<std::string>>()){
        func_def.template_generics_names = next_child.as<std::vector<std::string>>();
        offset++;
        next_child = visit(context->children[2+offset]);
    }
    assert(next_child.is<std::vector<FunctionDefinition::Argument>>());
    func_def.arguments = next_child.as<std::vector<FunctionDefinition::Argument>>();
    offset++;
    next_child = visit(context->children[2+offset]);
    if (next_child.is<TypeSignature>()){
        func_def.return_type = next_child.as<TypeSignature>();
        offset++;
        next_child = visit(context->children[2+offset]);
    }
    assert(next_child.is<std::vector<Statement>>());
    func_def.code = next_child.as<std::vector<Statement>>();
    return func_def;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFunctionDefinitionArgumentsSection(BasaltParser::FunctionDefinitionArgumentsSectionContext *context) {
    assert(context->children.size() >= 2);
    assert(context->children.size() <= 3);
    return (context->children.size() == 3)
        ? visit(context->children[1]).as<std::vector<FunctionDefinition::Argument>>() 
        : std::vector<FunctionDefinition::Argument>{};
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFunctionDefinitionArgumentsList(BasaltParser::FunctionDefinitionArgumentsListContext *context) {
    std::vector<FunctionDefinition::Argument> arguments;
    size_t index = 0;
    do {
        assert(visit(context->children[index++]).is<Identifier>());
        Identifier identifier = visit(context->children[index-1]).as<Identifier>();
        assert(visit(context->children[index]).is<BasaltSymbol>() && visit(context->children[index++]).as<BasaltSymbol>() == BasaltSymbol::COLON);
        assert(visit(context->children[index]).is<TypeSignature>());
        TypeSignature type_signature = visit(context->children[index++]).as<TypeSignature>();
        arguments.push_back(FunctionDefinition::Argument{ identifier.name, type_signature });
    } while(
        visit(context->children[index]).is<BasaltSymbol>() && 
        visit(context->children[index++]).as<BasaltSymbol>() == BasaltSymbol::COMMA
    );
    return arguments;
}
