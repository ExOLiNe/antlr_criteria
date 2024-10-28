// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2
package com.exoline.mycriteria.generated.grammar;
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link MyCriteriaParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface MyCriteriaVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#app}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitApp(MyCriteriaParser.AppContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#statements}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatements(MyCriteriaParser.StatementsContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(MyCriteriaParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Null}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNull(MyCriteriaParser.NullContext ctx);
	/**
	 * Visit a parse tree produced by the {@code InfixFuncCallNot}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInfixFuncCallNot(MyCriteriaParser.InfixFuncCallNotContext ctx);
	/**
	 * Visit a parse tree produced by the {@code comparison}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitComparison(MyCriteriaParser.ComparisonContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Or}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOr(MyCriteriaParser.OrContext ctx);
	/**
	 * Visit a parse tree produced by the {@code MulDiv}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMulDiv(MyCriteriaParser.MulDivContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AddSub}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAddSub(MyCriteriaParser.AddSubContext ctx);
	/**
	 * Visit a parse tree produced by the {@code InfixFuncCall}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInfixFuncCall(MyCriteriaParser.InfixFuncCallContext ctx);
	/**
	 * Visit a parse tree produced by the {@code StrLiteral}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrLiteral(MyCriteriaParser.StrLiteralContext ctx);
	/**
	 * Visit a parse tree produced by the {@code IdAccess}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIdAccess(MyCriteriaParser.IdAccessContext ctx);
	/**
	 * Visit a parse tree produced by the {@code InArray}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInArray(MyCriteriaParser.InArrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code FuncCall}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFuncCall(MyCriteriaParser.FuncCallContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Number}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumber(MyCriteriaParser.NumberContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Bool}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBool(MyCriteriaParser.BoolContext ctx);
	/**
	 * Visit a parse tree produced by the {@code And}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAnd(MyCriteriaParser.AndContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ObjectAccess}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitObjectAccess(MyCriteriaParser.ObjectAccessContext ctx);
	/**
	 * Visit a parse tree produced by the {@code NotExpr}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNotExpr(MyCriteriaParser.NotExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ParenExpr}
	 * labeled alternative in {@link MyCriteriaParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParenExpr(MyCriteriaParser.ParenExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#objectAccessParser}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitObjectAccessParser(MyCriteriaParser.ObjectAccessParserContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#identifierAccess}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIdentifierAccess(MyCriteriaParser.IdentifierAccessContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#importStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitImportStatement(MyCriteriaParser.ImportStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#identifierDefinitions}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIdentifierDefinitions(MyCriteriaParser.IdentifierDefinitionsContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#identifierDefinition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIdentifierDefinition(MyCriteriaParser.IdentifierDefinitionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#strOrNum}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrOrNum(MyCriteriaParser.StrOrNumContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#inArrayParser}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInArrayParser(MyCriteriaParser.InArrayParserContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCriteriaParser#numb}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumb(MyCriteriaParser.NumbContext ctx);
}