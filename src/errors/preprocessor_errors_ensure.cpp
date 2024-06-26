
#include "errors/internal_errors.hpp"
#include "toolchain/rappresentation.hpp"
#include <unordered_set>

void ensure_type_not_already_visited_hence_no_cyclic_dependency(
    const std::string& target_tag_name, 
    const std::unordered_set<std::string>& visited_definitions
){
    auto search_outcome = std::find(visited_definitions.begin(), visited_definitions.end(), target_tag_name);
    if (search_outcome != visited_definitions.end()){
        throw std::runtime_error ("Cyclic dependency!!");
    }
}

void ensure_no_multiple_definition_of_the_same_function(
    const std::pair<std::unordered_map<std::string, FunctionDefinition>::iterator, bool>& 
        function_definition_insertion_outcome
){
    if (!(function_definition_insertion_outcome.second)){
        throw std::runtime_error ("Multiple definition of the same function in different files\n");
    }
}

void ensure_no_multiple_definition_of_the_same_struct(
    const std::pair<std::map<std::string, TypeDefinition>::iterator, bool>& 
        struct_definition_insertion_outcome
){
    if (!(struct_definition_insertion_outcome.second)){
        throw std::runtime_error ("Multiple definition of the same function in different files\n");
    }
}