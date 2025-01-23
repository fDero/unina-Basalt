
#pragma once
#include "toolchain/tokenizer.hpp"
#include "toolchain/rappresentation.hpp"
#include "parser_visitor.hpp"
#include "errors/parsing_errors.hpp"
#include "language/statements.hpp"
#include "language/definitions.hpp"
#include "language/functions.hpp"
#include "language/expressions.hpp"
#include <string>
#include <vector>
#include <fstream>
#include <optional>
#include <stack>
#include <regex>

enum class BasaltKeyword { 
    VAR, CONST, STRUCT, UNION, FUNC, RETURN, BREAK, CONTINUE, 
    IF, ELSE, WHILE, UNTIL, SWITCH, DEFAULT, NULLKEYWORD 
};

enum class BasaltSymbol { 
    ARROW, POINTER_DEREFERENCE, POINTER_SYMBOL, SLICE_SYMBOL, ADDRESS_OF, SQUARE_BRACKETS_OPEN, 
    SQUARE_BRACKETS_CLOSE, PARENTHESYS_OPEN, PARENTHESYS_CLOSE, CURLY_BRACKETS_OPEN, CURLY_BRACKETS_CLOSE, 
    COMMA, SEMICOLON, COLON, DOT, PLUS, MINUS, STAR, DIV, MOD, POW, AND, OR, XOR, NOT, EQUAL, NOTEQUAL, GT, LT, GE, LE, 
    INC, DEC, ASSIGN, ADDEQ, SUBEQ, MULEQ, DIVEQ, MODEQ, POWEQ, DIAMOND_OPEN, DIAMOND_CLOSE 
};

typedef std::string IdentifierText;
typedef std::string TypeNameText;
typedef std::string IntLiteralText;
typedef std::string FloatLiteralText;
typedef std::string BoolLiteralText;
typedef std::string CharLiteralText;
typedef std::string StringLiteralText;

class Parser {

    private:
        FileRappresentation file_rappresentation;

    public:
        Parser(antlr4::CommonTokenStream& tokens);

        [[nodiscard]] FileRappresentation parse_everything();
};