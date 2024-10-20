#include <iostream>
#include "generated/MyCriteriaLexer.h"
#include "generated/MyCriteriaParser.h"
using namespace std;
using namespace antlr4;
int main(int argc, const char* argv[]) {
    std::cout << "Hello!" << std::endl;
    std::ifstream stream;
    stream.open("../../../../app.txt");
    std::cout << "Hello!" << std::endl;

    ANTLRInputStream input(stream);
    std::cout << "Hello!" << std::endl;
    MyCriteriaLexer lexer(&input);
    std::cout << "Hello!" << std::endl;
    CommonTokenStream tokens(&lexer);
    std::cout << "Hello!" << std::endl;
    MyCriteriaParser parser(&tokens);
    std::cout << "Hello!" << std::endl;
    auto tree = parser.expr();
    std::cout << "Hello!" << std::endl;
    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}