#include <fstream>
#include "gtest/gtest.h"
#include <lib.h>

class GrammarTest : public ::testing::Test {
protected:
    void testValidProgram() {
        std::ifstream stream;
        std::ostringstream programPath;
        programPath << TEST_PATH << "/1/app.txt";
        std::cout << programPath.str() << std::endl;
        stream.open(programPath.str());
        std::ostringstream out;
        if (!stream.is_open()) {
            throw std::exception("Program file not found");
        }
        out << stream.rdbuf();
        auto programCode = out.str();
        auto result = parse(programCode);
        result.app();
    }
};

TEST_F(GrammarTest, ProgramTest) {
    testValidProgram();
}