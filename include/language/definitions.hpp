
#pragma once
#include "toolchain/tokenizer.hpp"
#include "language/typesystem.hpp"
#include "language/statements.hpp"
#include "language/expressions.hpp"
#include "language/syntax.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <variant>

struct FunctionDefinition {
    
    std::string filename;
    unsigned long line_number;
    unsigned int tok_num;
    unsigned int char_pos;

    struct Argument {
        std::string arg_name;
        TypeSignature arg_type;
    };

    std::string function_name;
    std::optional<TypeSignature> return_type;
    std::vector<std::string> template_generics_names;
    std::vector<Argument> arguments;
    std::vector<Statement> code;

    FunctionDefinition(const Token& func_token){
        filename = func_token.getTokenSource()->getSourceName();
        line_number = func_token.getLine();
        tok_num = func_token.getTokenIndex();
        char_pos = func_token.getCharPositionInLine();
        function_name = func_token.getText();
    }

    FunctionDefinition(const std::string& name){
        filename = "unknown";
        line_number = 0;
        tok_num = 0;
        char_pos = 0;
        function_name = name;
    }
};


struct StructDefinition {

    std::string filename;
    unsigned long line_number;
    unsigned int tok_num;
    unsigned int char_pos;

    struct Field {
        std::string field_name;
        TypeSignature field_type;
    };

    std::string struct_name;
    std::vector<Field> fields;
    std::vector<std::string> template_generics_names;

    StructDefinition(const Token& struct_token){
        filename = struct_token.getTokenSource()->getSourceName();
        line_number = struct_token.getLine();
        tok_num = struct_token.getTokenIndex();
        char_pos = struct_token.getCharPositionInLine();
        struct_name = struct_token.getText();
    }

    StructDefinition(const std::string& name){
        filename = "unknown";
        line_number = 0;
        tok_num = 0;
        char_pos = 0;
        struct_name = name;
    }

    [[nodiscard]] std::string generate_struct_id() const;
    [[nodiscard]] std::string generate_match_pattern() const;
    void instanciate_generics(const CustomType& concrete_type);
};

struct UnionDefinition {

    std::string filename;
    unsigned long line_number;
    unsigned int tok_num;
    unsigned int char_pos;


    std::string union_name;
    std::vector<TypeSignature> types;
    std::vector<std::string> template_generics_names;

    UnionDefinition(const Token& union_token){
        filename = union_token.getTokenSource()->getSourceName();
        line_number = union_token.getLine();
        tok_num = union_token.getTokenIndex();
        char_pos = union_token.getCharPositionInLine();
        union_name = union_token.getText();
    }

    [[nodiscard]] std::string generate_union_id() const;
    [[nodiscard]] std::string generate_match_pattern() const;
    void instanciate_generics(const CustomType& concrete_type);
};

struct TypeDefinition : public std::variant<StructDefinition, UnionDefinition> {
    using std::variant<StructDefinition, UnionDefinition>::variant;
    using std::variant<StructDefinition, UnionDefinition>::operator=;
    using std::variant<StructDefinition, UnionDefinition>::index;
    
    template <typename T> [[nodiscard]] bool is() const {
        return std::holds_alternative<T>(*this);
    }

    template <typename T> [[nodiscard]] const T& get() const {
        return std::get<T>(*this);
    }

    template <typename T> [[nodiscard]] T& get() {
        return std::get<T>(*this);
    }
};