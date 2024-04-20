
#pragma once
#include "toolchain/tokenizer.hpp"
#include <string>
#include <exception>

struct CommandLineError : public std::exception {
    
    std::string error_message;
    
    CommandLineError(const std::string& message) 
        : error_message(message){ }
    
    const char* what() const noexcept override {
        return error_message.c_str();
    }
};

struct TokenizationError : public std::exception {
    std::string error_message;
    std::string sourcetext;
    std::string filename;
    unsigned long line_number;
    unsigned int tok_number;
    unsigned int char_pos;

    TokenizationError(
        const std::string& message,
        const std::string& source,
        const std::string& file,
        unsigned long line,
        unsigned int token,
        unsigned int position
    )
        : error_message(message), sourcetext(source)
        , filename(file), line_number(line)
        , tok_number(token), char_pos(position) 
    {}

    const char* what() const noexcept override {
        return error_message.c_str();
    }
};

struct ParsingError : public std::exception {
    std::string error_message;
    std::string sourcetext;
    std::string filename;
    unsigned long line_number;
    unsigned int tok_number;
    unsigned int char_pos;

    ParsingError(
        const std::string& message,
        const std::string& source,
        const std::string& file,
        unsigned long line,
        unsigned int token,
        unsigned int position
    )
        : error_message(message), sourcetext(source)
        , filename(file), line_number(line)
        , tok_number(token), char_pos(position) 
    {}

    ParsingError(const std::string& message, const Token& token)
        : error_message(message), sourcetext(token.getText())
        , filename(token.getTokenSource()->getSourceName()), line_number(token.getLine())
        , tok_number(token.getTokenIndex()), char_pos(token.getCharPositionInLine()) 
    {}
    
    const char* what() const noexcept override {
        return error_message.c_str();
    }
};

struct InternalError : public std::exception {
    
    std::string error_message;

    InternalError(const std::string& message)
        : error_message(message) {}

    const char* what() const noexcept override {
        return error_message.c_str();
    }
};