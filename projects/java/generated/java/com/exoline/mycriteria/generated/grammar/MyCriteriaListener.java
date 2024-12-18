// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2
package com.exoline.mycriteria.generated.grammar;
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MyCriteriaParser}.
 */
public interface MyCriteriaListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#app}.
	 * @param ctx the parse tree
	 */
	void enterApp(MyCriteriaParser.AppContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#app}.
	 * @param ctx the parse tree
	 */
	void exitApp(MyCriteriaParser.AppContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#statements}.
	 * @param ctx the parse tree
	 */
	void enterStatements(MyCriteriaParser.StatementsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#statements}.
	 * @param ctx the parse tree
	 */
	void exitStatements(MyCriteriaParser.StatementsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(MyCriteriaParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(MyCriteriaParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Null}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterNull(MyCriteriaParser.NullContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Null}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitNull(MyCriteriaParser.NullContext ctx);
	/**
	 * Enter a parse tree produced by the {@code InfixFuncCallNot}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterInfixFuncCallNot(MyCriteriaParser.InfixFuncCallNotContext ctx);
	/**
	 * Exit a parse tree produced by the {@code InfixFuncCallNot}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitInfixFuncCallNot(MyCriteriaParser.InfixFuncCallNotContext ctx);
	/**
	 * Enter a parse tree produced by the {@code comparison}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterComparison(MyCriteriaParser.ComparisonContext ctx);
	/**
	 * Exit a parse tree produced by the {@code comparison}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitComparison(MyCriteriaParser.ComparisonContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Or}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterOr(MyCriteriaParser.OrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Or}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitOr(MyCriteriaParser.OrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MulDiv}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterMulDiv(MyCriteriaParser.MulDivContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MulDiv}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitMulDiv(MyCriteriaParser.MulDivContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AddSub}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterAddSub(MyCriteriaParser.AddSubContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AddSub}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitAddSub(MyCriteriaParser.AddSubContext ctx);
	/**
	 * Enter a parse tree produced by the {@code InfixFuncCall}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterInfixFuncCall(MyCriteriaParser.InfixFuncCallContext ctx);
	/**
	 * Exit a parse tree produced by the {@code InfixFuncCall}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitInfixFuncCall(MyCriteriaParser.InfixFuncCallContext ctx);
	/**
	 * Enter a parse tree produced by the {@code StrLiteral}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterStrLiteral(MyCriteriaParser.StrLiteralContext ctx);
	/**
	 * Exit a parse tree produced by the {@code StrLiteral}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitStrLiteral(MyCriteriaParser.StrLiteralContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IdAccess}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterIdAccess(MyCriteriaParser.IdAccessContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IdAccess}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitIdAccess(MyCriteriaParser.IdAccessContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Array}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterArray(MyCriteriaParser.ArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Array}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitArray(MyCriteriaParser.ArrayContext ctx);
	/**
	 * Enter a parse tree produced by the {@code FuncCall}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterFuncCall(MyCriteriaParser.FuncCallContext ctx);
	/**
	 * Exit a parse tree produced by the {@code FuncCall}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitFuncCall(MyCriteriaParser.FuncCallContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Number}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterNumber(MyCriteriaParser.NumberContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Number}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitNumber(MyCriteriaParser.NumberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Bool}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterBool(MyCriteriaParser.BoolContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Bool}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitBool(MyCriteriaParser.BoolContext ctx);
	/**
	 * Enter a parse tree produced by the {@code And}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterAnd(MyCriteriaParser.AndContext ctx);
	/**
	 * Exit a parse tree produced by the {@code And}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitAnd(MyCriteriaParser.AndContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ObjectAccess}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterObjectAccess(MyCriteriaParser.ObjectAccessContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ObjectAccess}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitObjectAccess(MyCriteriaParser.ObjectAccessContext ctx);
	/**
	 * Enter a parse tree produced by the {@code NotExpr}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterNotExpr(MyCriteriaParser.NotExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code NotExpr}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitNotExpr(MyCriteriaParser.NotExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ParenExpr}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterParenExpr(MyCriteriaParser.ParenExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ParenExpr}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitParenExpr(MyCriteriaParser.ParenExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#objectAccessParser}.
	 * @param ctx the parse tree
	 */
	void enterObjectAccessParser(MyCriteriaParser.ObjectAccessParserContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#objectAccessParser}.
	 * @param ctx the parse tree
	 */
	void exitObjectAccessParser(MyCriteriaParser.ObjectAccessParserContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#importStatement}.
	 * @param ctx the parse tree
	 */
	void enterImportStatement(MyCriteriaParser.ImportStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#importStatement}.
	 * @param ctx the parse tree
	 */
	void exitImportStatement(MyCriteriaParser.ImportStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#identifierDefinitions}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierDefinitions(MyCriteriaParser.IdentifierDefinitionsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#identifierDefinitions}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierDefinitions(MyCriteriaParser.IdentifierDefinitionsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#identifierDefinition}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierDefinition(MyCriteriaParser.IdentifierDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#identifierDefinition}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierDefinition(MyCriteriaParser.IdentifierDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#strOrNum}.
	 * @param ctx the parse tree
	 */
	void enterStrOrNum(MyCriteriaParser.StrOrNumContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#strOrNum}.
	 * @param ctx the parse tree
	 */
	void exitStrOrNum(MyCriteriaParser.StrOrNumContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCriteriaParser#numb}.
	 * @param ctx the parse tree
	 */
	void enterNumb(MyCriteriaParser.NumbContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCriteriaParser#numb}.
	 * @param ctx the parse tree
	 */
	void exitNumb(MyCriteriaParser.NumbContext ctx);
}