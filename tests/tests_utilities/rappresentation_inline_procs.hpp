
#pragma once
#include <gtest/gtest.h>
#include "../../include/toolchain/rappresentation.hpp"
#include "../../include/language/syntax.hpp"
#include "../../include/language/definitions.hpp"

inline StructDefinition make_struct_definition(const std::string& struct_name){
    return StructDefinition { struct_name };
}

inline FunctionDefinition make_function_definition(const std::string& func_name){
    return FunctionDefinition { func_name };
}