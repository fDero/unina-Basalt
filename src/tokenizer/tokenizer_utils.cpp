
#include "errors/tokenization_errors.hpp"
#include "language/syntax.hpp"
#include "toolchain/tokenizer.hpp"
#include "errors/tokenization_errors.hpp"
#include "errors/commandline_errors.hpp"
#include "errors/internal_errors.hpp"
#include "toolchain/tokenizer.hpp"
#include <iostream>

Tokenizer::Tokenizer(const std::istringstream& inline_input) {
        token_input = std::make_unique<std::istringstream>(inline_input.str());  
}

Tokenizer::Tokenizer(const std::filesystem::path& file_input) {
        token_input = std::make_unique<std::fstream>(file_input.string(), std::ios::in);  
}

[[nodiscard]] antlr4::CommonTokenStream Tokenizer::tokenize(){
    antlr4::ANTLRInputStream input(*token_input);
    BasaltLexer lexer(&input);
    return antlr4::CommonTokenStream(&lexer);
}