#include <iostream>
#include "toolchain/parser.hpp"

int main(int , const char **) {
    
    antlr4::ANTLRInputStream input("func f() { }");
    BasaltLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    BasaltParser parser(&tokens);
    antlr4::tree::ParseTree& tree = *parser.program();

    ConcreteBasaltParserVisitor visitor;
    visitor.visit(&tree);

    return 0;
}
