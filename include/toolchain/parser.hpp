
#pragma once
#include "toolchain/tokenizer.hpp"
#include "toolchain/rappresentation.hpp"
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

class Parser {

    public:
        Parser(const antlr4::CommonTokenStream& tokens) {}

        [[nodiscard]] FileRappresentation parse_everything() { return FileRappresentation{}; };
};