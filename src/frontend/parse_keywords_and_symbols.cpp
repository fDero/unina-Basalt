
#include "toolchain/parser.hpp"

antlrcpp::Any ConcreteBasaltParserVisitor::visitVarKeyword(BasaltParser::VarKeywordContext *context) {
    return BasaltKeyword::VAR;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitConstKeyword(BasaltParser::ConstKeywordContext *context) {
    return BasaltKeyword::CONST;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitStructKeyword(BasaltParser::StructKeywordContext *context) {
    return BasaltKeyword::STRUCT;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitUnionKeyword(BasaltParser::UnionKeywordContext *context) {
    return BasaltKeyword::UNION;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitFuncKeyword(BasaltParser::FuncKeywordContext *context) {
    return BasaltKeyword::FUNC;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitReturnKeyword(BasaltParser::ReturnKeywordContext *context) {
    return BasaltKeyword::RETURN;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitBreakKeyword(BasaltParser::BreakKeywordContext *context) {
    return BasaltKeyword::BREAK;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitContinueKeyword(BasaltParser::ContinueKeywordContext *context) {
    return BasaltKeyword::CONTINUE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitIfKeyword(BasaltParser::IfKeywordContext *context) {
    return BasaltKeyword::IF;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitElseKeyword(BasaltParser::ElseKeywordContext *context) {
    return BasaltKeyword::ELSE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitWhileKeyword(BasaltParser::WhileKeywordContext *context) {
    return BasaltKeyword::WHILE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitUntilKeyword(BasaltParser::UntilKeywordContext *context) {
    return BasaltKeyword::UNTIL;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitSwitchKeyword(BasaltParser::SwitchKeywordContext *context) {
    return BasaltKeyword::SWITCH;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDefaultKeyword(BasaltParser::DefaultKeywordContext *context) {
    return BasaltKeyword::DEFAULT;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitNullKeyword(BasaltParser::NullKeywordContext *context) {
    return BasaltKeyword::NULLKEYWORD;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitArrow(BasaltParser::ArrowContext *context) {
    return BasaltSymbol::ARROW;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPointerDereference(BasaltParser::PointerDereferenceContext *context) {
    return BasaltSymbol::POINTER_DEREFERENCE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPointerSymbol(BasaltParser::PointerSymbolContext *context) {
    return BasaltSymbol::POINTER_SYMBOL;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitSliceSymbol(BasaltParser::SliceSymbolContext *context) {
    return BasaltSymbol::SLICE_SYMBOL;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitAddressOf(BasaltParser::AddressOfContext *context) {
    return BasaltSymbol::ADDRESS_OF;
}
antlrcpp::Any ConcreteBasaltParserVisitor::visitSquareBracketsOpen(BasaltParser::SquareBracketsOpenContext *context) {
    return BasaltSymbol::SQUARE_BRACKETS_OPEN;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitSquareBracketsClose(BasaltParser::SquareBracketsCloseContext *context) {
    return BasaltSymbol::SQUARE_BRACKETS_CLOSE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitParenthesysOpen(BasaltParser::ParenthesysOpenContext *context) {
    return BasaltSymbol::PARENTHESYS_OPEN;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitParenthesysClose(BasaltParser::ParenthesysCloseContext *context) {
    return BasaltSymbol::PARENTHESYS_CLOSE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitCurlyBracketsOpen(BasaltParser::CurlyBracketsOpenContext *context) {
    return BasaltSymbol::CURLY_BRACKETS_OPEN;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitCurlyBracketsClose(BasaltParser::CurlyBracketsCloseContext *context) {
    return BasaltSymbol::CURLY_BRACKETS_CLOSE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitComma(BasaltParser::CommaContext *context) {
    return BasaltSymbol::COMMA;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitSemicolon(BasaltParser::SemicolonContext *context) {
    return BasaltSymbol::SEMICOLON;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitColon(BasaltParser::ColonContext *context) {
    return BasaltSymbol::COLON;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDot(BasaltParser::DotContext *context) {
    return BasaltSymbol::DOT;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPlus(BasaltParser::PlusContext *context) {
    return BasaltSymbol::PLUS;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitMinus(BasaltParser::MinusContext *context) {
    return BasaltSymbol::MINUS;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitStar(BasaltParser::StarContext *context) {
    return BasaltSymbol::STAR;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDiv(BasaltParser::DivContext *context) {
    return BasaltSymbol::DIV;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitMod(BasaltParser::ModContext *context) {
    return BasaltSymbol::MOD;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPow(BasaltParser::PowContext *context) {
    return BasaltSymbol::POW;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalAnd(BasaltParser::LogicalAndContext *context) {
    return BasaltSymbol::AND;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalOr(BasaltParser::LogicalOrContext *context) {
    return BasaltSymbol::OR;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalXor(BasaltParser::LogicalXorContext *context) {
    return BasaltSymbol::XOR;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalNot(BasaltParser::LogicalNotContext *context) {
    return BasaltSymbol::NOT;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalEqual(BasaltParser::LogicalEqualContext *context) {
    return BasaltSymbol::EQUAL;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalNotEqual(BasaltParser::LogicalNotEqualContext *context) {
    return BasaltSymbol::NOTEQUAL;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalGt(BasaltParser::LogicalGtContext *context) {
    return BasaltSymbol::GT;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalLt(BasaltParser::LogicalLtContext *context) {
    return BasaltSymbol::LT;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalGe(BasaltParser::LogicalGeContext *context) {
    return BasaltSymbol::GE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitLogicalLe(BasaltParser::LogicalLeContext *context) {
    return BasaltSymbol::LE;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitInc(BasaltParser::IncContext *context) {
    return BasaltSymbol::INC;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDec(BasaltParser::DecContext *context) {
    return BasaltSymbol::DEC;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitAssign(BasaltParser::AssignContext *context) {
    return BasaltSymbol::ASSIGN;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitAddeq(BasaltParser::AddeqContext *context) {
    return BasaltSymbol::ADDEQ;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitSubeq(BasaltParser::SubeqContext *context) {
    return BasaltSymbol::SUBEQ;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitMuleq(BasaltParser::MuleqContext *context) {
    return BasaltSymbol::MULEQ;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDiveq(BasaltParser::DiveqContext *context) {
    return BasaltSymbol::DIVEQ;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitModeq(BasaltParser::ModeqContext *context) {
    return BasaltSymbol::MODEQ;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitPoweq(BasaltParser::PoweqContext *context) {
    return BasaltSymbol::POWEQ;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDiamondOpen(BasaltParser::DiamondOpenContext *context) {
    return BasaltSymbol::DIAMOND_OPEN;
}

antlrcpp::Any ConcreteBasaltParserVisitor::visitDiamondClose(BasaltParser::DiamondCloseContext *context) {
    return BasaltSymbol::DIAMOND_CLOSE;
}
