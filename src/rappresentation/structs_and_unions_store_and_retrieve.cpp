
#include "toolchain/rappresentation.hpp"
#include "language/definitions.hpp"
#include "language/functions.hpp"
#include "errors/parsing_errors.hpp"
#include "language/syntax.hpp"
#include <iostream>

void ensure_struct_doesnt_already_exists(
    const std::string& struct_tag_name,
    const StructDefinition& struct_def,
    const std::map<std::string, TypeDefinition>& type_definitions_register
){
    if (type_definitions_register.find(struct_tag_name) != type_definitions_register.end()){
        throw std::runtime_error (
            "such user defined type already exists in the given scope"
        );
    }
}

void ensure_union_doesnt_already_exists(
    const std::string& union_tag_name,
    const UnionDefinition& union_def,
    const std::map<std::string, TypeDefinition>& type_definitions_register
){
    if (type_definitions_register.find(union_tag_name) != type_definitions_register.end()){
        throw std::runtime_error (
            "such user defined type already exists in the given scope"
        );
    }
}

void TypeDefinitionsRegister::store(const StructDefinition& struct_def){
    const std::string struct_tag_name = struct_def.generate_match_pattern();
    ensure_struct_doesnt_already_exists(struct_tag_name, struct_def, struct_definitions);
    struct_definitions.insert(std::make_pair(struct_tag_name, struct_def));
}

void TypeDefinitionsRegister::store(const UnionDefinition& union_def){
    const std::string struct_tag_name = union_def.generate_match_pattern();
    ensure_union_doesnt_already_exists(struct_tag_name, union_def, struct_definitions);
    struct_definitions.insert(std::make_pair(struct_tag_name, union_def));
}

[[nodiscard]] const TypeDefinition& TypeDefinitionsRegister::retrieve(const TypeSignature& type_signature) const {
    auto search_outcome = struct_definitions.find(type_signature.to_string());
    if (search_outcome != struct_definitions.end()) {
        return search_outcome->second;
    }
    search_outcome = struct_definitions.find(type_signature.to_match_string());
    if (search_outcome != struct_definitions.end()) {
        return search_outcome->second;
    }
    throw std::runtime_error("NO STRUCT FOUND: " + type_signature.to_string() + " " + type_signature.to_match_string());
}

[[nodiscard]] std::string StructDefinition::generate_struct_id() const {
    return filename + "/" + std::to_string(line_number) + "/" +
        std::to_string(char_pos) + "/" + std::to_string(tok_num) + "/" + struct_name;
}

[[nodiscard]] std::string UnionDefinition::generate_union_id() const {
    return filename + "/" + std::to_string(line_number) + "/" +
        std::to_string(char_pos) + "/" + std::to_string(tok_num) + "/" + union_name;
}


[[nodiscard]] std::string UnionDefinition::generate_match_pattern() const {
    std::string pattern_tag_name = union_name;
    int number_of_generics = template_generics_names.size();
    if (number_of_generics > 0) {
        pattern_tag_name += "<";
        for (int i = 0; i < number_of_generics; i++) { 
            pattern_tag_name += "?,";
        }
        pattern_tag_name.back() = '>';
    }
    return pattern_tag_name;
}

[[nodiscard]] std::string StructDefinition::generate_match_pattern() const {
    std::string pattern_tag_name = struct_name;
    int number_of_generics = template_generics_names.size();
    if (number_of_generics > 0) {
        pattern_tag_name += "<";
        for (int i = 0; i < number_of_generics; i++) { 
            pattern_tag_name += "?,";
        }
        pattern_tag_name.back() = '>';
    }
    return pattern_tag_name;
}