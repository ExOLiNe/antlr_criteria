#pragma once

#include <functional>
#include <memory>
#include <MyCriteriaLexer.h>
#include <MyCriteriaParser.h>
#include <MyCriteriaVisitorImpl.h>

using Tree = MyCriteriaParser::ExprContext;

struct ParseResult {
    std::function<void(void)> app;
    std::unique_ptr<Tree> tree;
};

ParseResult parse(std::string& programCode);