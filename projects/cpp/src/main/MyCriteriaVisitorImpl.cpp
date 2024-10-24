#include "MyCriteriaVisitorImpl.h"

std::any MyCriteriaVisitorImpl::visitFuncCall(MyCriteriaParser::FuncCallContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitNull(MyCriteriaParser::NullContext *context) {
    return {};
}

std::any MyCriteriaVisitorImpl::visitComparison(MyCriteriaParser::ComparisonContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitBool(MyCriteriaParser::BoolContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitMulDiv(MyCriteriaParser::MulDivContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitAddSub(MyCriteriaParser::AddSubContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitObjectAccess(MyCriteriaParser::ObjectAccessContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitInfixFuncCall(MyCriteriaParser::InfixFuncCallContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitNotExpr(MyCriteriaParser::NotExprContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitParenExpr(MyCriteriaParser::ParenExprContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitAndOr(MyCriteriaParser::AndOrContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitInt(MyCriteriaParser::IntContext *context) {
    return std::any();
}

std::any MyCriteriaVisitorImpl::visitObjectAccessParser(MyCriteriaParser::ObjectAccessParserContext *context) {
    return std::any();
}