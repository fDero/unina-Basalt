
#include "toolchain/parser.hpp"
#include "language/statements.hpp"
#include <cassert>

antlrcpp::Any ConcreteBasaltParserVisitor::visitProgram(BasaltParser::ProgramContext *context) {
    FileRappresentation fileRappresentation;
    for (const auto& child : context->children){
        antlrcpp::Any def = visit(child);
        if (def.is<StructDefinition>()){
            fileRappresentation.type_defs_register.store(def.as<StructDefinition>());
        }
        else if (def.is<UnionDefinition>()){
            fileRappresentation.type_defs_register.store(def.as<UnionDefinition>());
        }
        else if (def.is<FunctionDefinition>()){
            fileRappresentation.func_defs_register.store(def.as<FunctionDefinition>());
        }
        else {
            throw std::runtime_error("Unexpected rule at global scope level");
        }
    }
    return fileRappresentation;
}

FileRappresentation Parser::parse_everything(){
    return file_rappresentation;
}

Parser::Parser(antlr4::CommonTokenStream& tokens){
    BasaltParser parser(&tokens);
    antlr4::tree::ParseTree& tree = *parser.program();
    ConcreteBasaltParserVisitor visitor;
    antlrcpp::Any file_rappresentation_output = visitor.visit(&tree);
    assert(file_rappresentation_output.is<FileRappresentation>());
    file_rappresentation = file_rappresentation_output.as<FileRappresentation>();
}