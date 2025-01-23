
#pragma once
#include "antlr4-runtime.h"
#include "BasaltLexer.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <optional>
#include <stack>
#include <regex>

using Token = antlr4::Token;

class Tokenizer {

    private: 
        std::unique_ptr<std::istream> token_input;

    public:
        Tokenizer(const std::istringstream& inline_input);
        Tokenizer(const std::filesystem::path& file_input);
        [[nodiscard]] antlr4::CommonTokenStream tokenize();
};