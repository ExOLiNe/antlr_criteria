#include <iostream>
#include "lib.h"

ParseResult parse(std::string& programCode) {
    antlr4::ANTLRInputStream input(programCode);
    MyCriteriaLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    MyCriteriaParser parser(&tokens);
    auto tree = parser.expr();
    MyCriteriaVisitorImpl visitor;
    std::cout << tree->toStringTree(&parser) << std::endl;
    return ParseResult {
        .app = []() { std::cout << "Hello" << std::endl; },
        .tree = std::unique_ptr<Tree>(tree)
    };
}