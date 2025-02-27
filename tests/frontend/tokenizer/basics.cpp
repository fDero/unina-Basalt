
#include <gtest/gtest.h>
#include "frontend/tokenizer.hpp"
#include "errors/internal_errors.hpp"
#include "errors/parsing_errors.hpp"
#include "../../tests_utilities/tokenizer_inline_procs.hpp"

TEST(Frontend, Tokenize_Integer_Literals) {
    auto [tokens_text, inline_input] = make_testable_input({"16", "811", "9", "01", "10"});
    Tokenizer tokenizer = Tokenizer(std::istringstream(inline_input));
    std::vector<Token> tokens = tokenizer.tokenize().tokens;
    ASSERT_EQ(tokens_text.size(), tokens.size());
    for (size_t i = 0; i < tokens.size(); i++) {
        EXPECT_EQ(tokens_text[i], tokens[i].sourcetext);
        EXPECT_EQ(tokens[i].type, Token::Type::integer_literal);
    }
}

TEST(Frontend, Tokenize_Floating_Literals) {
    auto [tokens_text, inline_input] = make_testable_input({"16.0", "81.100", "9.", "0.1", "00.1"});
    Tokenizer tokenizer = Tokenizer(std::istringstream(inline_input));
    std::vector<Token> tokens = tokenizer.tokenize().tokens;
    ASSERT_EQ(tokens_text.size(), tokens.size());
    for (size_t i = 0; i < tokens.size(); i++) {
        EXPECT_EQ(tokens_text[i], tokens[i].sourcetext);
        EXPECT_EQ(tokens[i].type, Token::Type::floating_literal);
    }
}

TEST(Frontend, Tokenize_Boolean_Literals) {
    auto [tokens_text, inline_input] = make_testable_input({"true", "false"});
    Tokenizer tokenizer = Tokenizer(std::istringstream(inline_input));
    std::vector<Token> tokens = tokenizer.tokenize().tokens;
    ASSERT_EQ(tokens_text.size(), tokens.size());
    for (size_t i = 0; i < tokens.size(); i++) {
        EXPECT_EQ(tokens_text[i], tokens[i].sourcetext);
        EXPECT_EQ(tokens[i].type, Token::Type::boolean_literal);
    }
}

TEST(Frontend, Tokenize_Char_Literals) {
    auto [tokens_text, inline_input] = make_testable_input({"'x'", "'\t'", "'\\t'", "' '", "'\\''"});
    Tokenizer tokenizer = Tokenizer(std::istringstream(inline_input));
    std::vector<Token> tokens = tokenizer.tokenize().tokens;
    ASSERT_EQ(tokens_text.size(), tokens.size());
    for (size_t i = 0; i < tokens.size(); i++) {
        EXPECT_EQ(tokens_text[i], tokens[i].sourcetext);
        EXPECT_EQ(tokens[i].type, Token::Type::character_literal);
    }
}

TEST(Frontend, Tokenize_String_Literals_doublequotes) {
    auto [tokens_text, inline_input] = make_testable_input({"\"x\"", "\"\t\"", "\"\\t\"", "\" \"", "\"\\\"\""});
    Tokenizer tokenizer = Tokenizer(std::istringstream(inline_input));
    std::vector<Token> tokens = tokenizer.tokenize().tokens;
    ASSERT_EQ(tokens_text.size(), tokens.size());
    for (size_t i = 0; i < tokens.size(); i++) {
        EXPECT_EQ(tokens_text[i], tokens[i].sourcetext);
        EXPECT_EQ(tokens[i].type, Token::Type::string_literal);
    }
}

TEST(Frontend, Tokenize_String_Literals_backticks) {
    auto [tokens_text, inline_input] = make_testable_input({"`x`", "`\t`", "`\\t`", "` `", "`\\``"});
    Tokenizer tokenizer = Tokenizer(std::istringstream(inline_input));
    std::vector<Token> tokens = tokenizer.tokenize().tokens;
    ASSERT_EQ(tokens_text.size(), tokens.size());
    for (size_t i = 0; i < tokens.size(); i++) {
        EXPECT_EQ(tokens_text[i], tokens[i].sourcetext);
        EXPECT_EQ(tokens[i].type, Token::Type::string_literal);
    }
}
