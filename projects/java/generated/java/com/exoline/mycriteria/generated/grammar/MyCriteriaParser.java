// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2
package com.exoline.mycriteria.generated.grammar;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class MyCriteriaParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, IMPORT=14, SLASH=15, DOT=16, COMMA=17, 
		SEMICOLON=18, SQR_L=19, SQR_R=20, IN=21, BOOL=22, EXCL=23, NULL_T=24, 
		BUCK=25, EQUALS=26, OBJECT=27, INT=28, IDENTIFIER=29, STR_LITERAL=30, 
		WS=31;
	public static final int
		RULE_app = 0, RULE_statements = 1, RULE_statement = 2, RULE_expr = 3, 
		RULE_objectAccessParser = 4, RULE_identifierAccess = 5, RULE_importStatement = 6, 
		RULE_identifierDefinitions = 7, RULE_identifierDefinition = 8, RULE_strOrNum = 9, 
		RULE_inArrayParser = 10, RULE_numb = 11;
	private static String[] makeRuleNames() {
		return new String[] {
			"app", "statements", "statement", "expr", "objectAccessParser", "identifierAccess", 
			"importStatement", "identifierDefinitions", "identifierDefinition", "strOrNum", 
			"inArrayParser", "numb"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
			"'=='", "'!='", "'&&'", "'||'", "'import'", "'/'", "'.'", "','", "';'", 
			"'['", "']'", "'in'", null, "'!'", "'null'", "'$'", "'='", "'object'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, "IMPORT", "SLASH", "DOT", "COMMA", "SEMICOLON", "SQR_L", 
			"SQR_R", "IN", "BOOL", "EXCL", "NULL_T", "BUCK", "EQUALS", "OBJECT", 
			"INT", "IDENTIFIER", "STR_LITERAL", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "MyCriteria.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public MyCriteriaParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AppContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public AppContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_app; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterApp(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitApp(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitApp(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AppContext app() throws RecognitionException {
		AppContext _localctx = new AppContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_app);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(27);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(24);
					statement();
					}
					} 
				}
				setState(29);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(30);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementsContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterStatements(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitStatements(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitStatements(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementsContext statements() throws RecognitionException {
		StatementsContext _localctx = new StatementsContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statements);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(33); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(32);
				statement();
				}
				}
				setState(35); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==IMPORT || _la==BUCK );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public ImportStatementContext importStatement() {
			return getRuleContext(ImportStatementContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(MyCriteriaParser.SEMICOLON, 0); }
		public IdentifierDefinitionContext identifierDefinition() {
			return getRuleContext(IdentifierDefinitionContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_statement);
		try {
			setState(43);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IMPORT:
				enterOuterAlt(_localctx, 1);
				{
				setState(37);
				importStatement();
				setState(38);
				match(SEMICOLON);
				}
				break;
			case BUCK:
				enterOuterAlt(_localctx, 2);
				{
				setState(40);
				identifierDefinition();
				setState(41);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class NullContext extends ExprContext {
		public TerminalNode NULL_T() { return getToken(MyCriteriaParser.NULL_T, 0); }
		public NullContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterNull(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitNull(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitNull(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class InfixFuncCallNotContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EXCL() { return getToken(MyCriteriaParser.EXCL, 0); }
		public TerminalNode IDENTIFIER() { return getToken(MyCriteriaParser.IDENTIFIER, 0); }
		public InfixFuncCallNotContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterInfixFuncCallNot(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitInfixFuncCallNot(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitInfixFuncCallNot(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ComparisonContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ComparisonContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterComparison(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitComparison(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitComparison(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OrContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public OrContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterOr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitOr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitOr(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MulDivContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode SLASH() { return getToken(MyCriteriaParser.SLASH, 0); }
		public MulDivContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterMulDiv(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitMulDiv(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitMulDiv(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AddSubContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AddSubContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterAddSub(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitAddSub(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitAddSub(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class InfixFuncCallContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode IDENTIFIER() { return getToken(MyCriteriaParser.IDENTIFIER, 0); }
		public InfixFuncCallContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterInfixFuncCall(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitInfixFuncCall(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitInfixFuncCall(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StrLiteralContext extends ExprContext {
		public TerminalNode STR_LITERAL() { return getToken(MyCriteriaParser.STR_LITERAL, 0); }
		public StrLiteralContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterStrLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitStrLiteral(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitStrLiteral(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class IdAccessContext extends ExprContext {
		public IdentifierAccessContext identifierAccess() {
			return getRuleContext(IdentifierAccessContext.class,0);
		}
		public IdAccessContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterIdAccess(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitIdAccess(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitIdAccess(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class InArrayContext extends ExprContext {
		public InArrayParserContext inArrayParser() {
			return getRuleContext(InArrayParserContext.class,0);
		}
		public InArrayContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterInArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitInArray(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitInArray(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FuncCallContext extends ExprContext {
		public TerminalNode IDENTIFIER() { return getToken(MyCriteriaParser.IDENTIFIER, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(MyCriteriaParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MyCriteriaParser.COMMA, i);
		}
		public FuncCallContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterFuncCall(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitFuncCall(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitFuncCall(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class NumberContext extends ExprContext {
		public NumbContext numb() {
			return getRuleContext(NumbContext.class,0);
		}
		public NumberContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterNumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitNumber(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitNumber(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class BoolContext extends ExprContext {
		public TerminalNode BOOL() { return getToken(MyCriteriaParser.BOOL, 0); }
		public BoolContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterBool(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitBool(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitBool(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AndContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AndContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterAnd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitAnd(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitAnd(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ObjectAccessContext extends ExprContext {
		public ObjectAccessParserContext objectAccessParser() {
			return getRuleContext(ObjectAccessParserContext.class,0);
		}
		public ObjectAccessContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterObjectAccess(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitObjectAccess(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitObjectAccess(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class NotExprContext extends ExprContext {
		public TerminalNode EXCL() { return getToken(MyCriteriaParser.EXCL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public NotExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterNotExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitNotExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitNotExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ParenExprContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParenExprContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterParenExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitParenExpr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitParenExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				_localctx = new InArrayContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(46);
				inArrayParser();
				}
				break;
			case 2:
				{
				_localctx = new FuncCallContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				{
				setState(47);
				match(IDENTIFIER);
				setState(48);
				match(T__3);
				setState(54);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(49);
						expr(0);
						setState(50);
						match(COMMA);
						}
						} 
					}
					setState(56);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				}
				setState(58);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2076180496L) != 0)) {
					{
					setState(57);
					expr(0);
					}
				}

				setState(60);
				match(T__4);
				}
				}
				break;
			case 3:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(61);
				match(EXCL);
				setState(62);
				expr(8);
				}
				break;
			case 4:
				{
				_localctx = new ParenExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(63);
				match(T__3);
				setState(64);
				expr(0);
				setState(65);
				match(T__4);
				}
				break;
			case 5:
				{
				_localctx = new BoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(67);
				match(BOOL);
				}
				break;
			case 6:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(68);
				numb();
				}
				break;
			case 7:
				{
				_localctx = new NullContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(69);
				match(NULL_T);
				}
				break;
			case 8:
				{
				_localctx = new StrLiteralContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(70);
				match(STR_LITERAL);
				}
				break;
			case 9:
				{
				_localctx = new IdAccessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(71);
				identifierAccess();
				}
				break;
			case 10:
				{
				_localctx = new ObjectAccessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(72);
				objectAccessParser();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(99);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(97);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
					case 1:
						{
						_localctx = new MulDivContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(75);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(76);
						((MulDivContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__0 || _la==SLASH) ) {
							((MulDivContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(77);
						expr(17);
						}
						break;
					case 2:
						{
						_localctx = new AddSubContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(78);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(79);
						((AddSubContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==T__1 || _la==T__2) ) {
							((AddSubContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(80);
						expr(16);
						}
						break;
					case 3:
						{
						_localctx = new InfixFuncCallContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(81);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(82);
						match(IDENTIFIER);
						setState(83);
						expr(14);
						}
						break;
					case 4:
						{
						_localctx = new InfixFuncCallNotContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(84);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(85);
						match(EXCL);
						setState(86);
						match(IDENTIFIER);
						setState(87);
						expr(13);
						}
						break;
					case 5:
						{
						_localctx = new ComparisonContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(88);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(89);
						((ComparisonContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 4032L) != 0)) ) {
							((ComparisonContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(90);
						expr(12);
						}
						break;
					case 6:
						{
						_localctx = new AndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(91);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(92);
						match(T__11);
						setState(93);
						expr(11);
						}
						break;
					case 7:
						{
						_localctx = new OrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(94);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(95);
						match(T__12);
						setState(96);
						expr(10);
						}
						break;
					}
					} 
				}
				setState(101);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectAccessParserContext extends ParserRuleContext {
		public TerminalNode OBJECT() { return getToken(MyCriteriaParser.OBJECT, 0); }
		public TerminalNode SQR_R() { return getToken(MyCriteriaParser.SQR_R, 0); }
		public List<TerminalNode> SQR_L() { return getTokens(MyCriteriaParser.SQR_L); }
		public TerminalNode SQR_L(int i) {
			return getToken(MyCriteriaParser.SQR_L, i);
		}
		public List<TerminalNode> STR_LITERAL() { return getTokens(MyCriteriaParser.STR_LITERAL); }
		public TerminalNode STR_LITERAL(int i) {
			return getToken(MyCriteriaParser.STR_LITERAL, i);
		}
		public ObjectAccessParserContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectAccessParser; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterObjectAccessParser(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitObjectAccessParser(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitObjectAccessParser(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ObjectAccessParserContext objectAccessParser() throws RecognitionException {
		ObjectAccessParserContext _localctx = new ObjectAccessParserContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_objectAccessParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(102);
			match(OBJECT);
			setState(104); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(103);
				match(SQR_L);
				}
				}
				setState(106); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==SQR_L );
			setState(109); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(108);
				match(STR_LITERAL);
				}
				}
				setState(111); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==STR_LITERAL );
			setState(113);
			match(SQR_R);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierAccessContext extends ParserRuleContext {
		public TerminalNode BUCK() { return getToken(MyCriteriaParser.BUCK, 0); }
		public TerminalNode IDENTIFIER() { return getToken(MyCriteriaParser.IDENTIFIER, 0); }
		public IdentifierAccessContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierAccess; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterIdentifierAccess(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitIdentifierAccess(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitIdentifierAccess(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IdentifierAccessContext identifierAccess() throws RecognitionException {
		IdentifierAccessContext _localctx = new IdentifierAccessContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_identifierAccess);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(BUCK);
			setState(116);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImportStatementContext extends ParserRuleContext {
		public TerminalNode IMPORT() { return getToken(MyCriteriaParser.IMPORT, 0); }
		public TerminalNode IDENTIFIER() { return getToken(MyCriteriaParser.IDENTIFIER, 0); }
		public ImportStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importStatement; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterImportStatement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitImportStatement(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitImportStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ImportStatementContext importStatement() throws RecognitionException {
		ImportStatementContext _localctx = new ImportStatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_importStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			match(IMPORT);
			setState(119);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierDefinitionsContext extends ParserRuleContext {
		public List<IdentifierDefinitionContext> identifierDefinition() {
			return getRuleContexts(IdentifierDefinitionContext.class);
		}
		public IdentifierDefinitionContext identifierDefinition(int i) {
			return getRuleContext(IdentifierDefinitionContext.class,i);
		}
		public List<TerminalNode> SEMICOLON() { return getTokens(MyCriteriaParser.SEMICOLON); }
		public TerminalNode SEMICOLON(int i) {
			return getToken(MyCriteriaParser.SEMICOLON, i);
		}
		public IdentifierDefinitionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierDefinitions; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterIdentifierDefinitions(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitIdentifierDefinitions(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitIdentifierDefinitions(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IdentifierDefinitionsContext identifierDefinitions() throws RecognitionException {
		IdentifierDefinitionsContext _localctx = new IdentifierDefinitionsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_identifierDefinitions);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==BUCK) {
				{
				{
				setState(121);
				identifierDefinition();
				setState(122);
				match(SEMICOLON);
				}
				}
				setState(128);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierDefinitionContext extends ParserRuleContext {
		public TerminalNode BUCK() { return getToken(MyCriteriaParser.BUCK, 0); }
		public TerminalNode IDENTIFIER() { return getToken(MyCriteriaParser.IDENTIFIER, 0); }
		public TerminalNode EQUALS() { return getToken(MyCriteriaParser.EQUALS, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public IdentifierDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterIdentifierDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitIdentifierDefinition(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitIdentifierDefinition(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IdentifierDefinitionContext identifierDefinition() throws RecognitionException {
		IdentifierDefinitionContext _localctx = new IdentifierDefinitionContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_identifierDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(129);
			match(BUCK);
			setState(130);
			match(IDENTIFIER);
			setState(131);
			match(EQUALS);
			setState(132);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StrOrNumContext extends ParserRuleContext {
		public TerminalNode STR_LITERAL() { return getToken(MyCriteriaParser.STR_LITERAL, 0); }
		public NumbContext numb() {
			return getRuleContext(NumbContext.class,0);
		}
		public StrOrNumContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_strOrNum; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterStrOrNum(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitStrOrNum(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitStrOrNum(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StrOrNumContext strOrNum() throws RecognitionException {
		StrOrNumContext _localctx = new StrOrNumContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_strOrNum);
		try {
			setState(136);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STR_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(134);
				match(STR_LITERAL);
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(135);
				numb();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class InArrayParserContext extends ParserRuleContext {
		public ObjectAccessParserContext objectAccessParser() {
			return getRuleContext(ObjectAccessParserContext.class,0);
		}
		public TerminalNode SQR_L() { return getToken(MyCriteriaParser.SQR_L, 0); }
		public List<StrOrNumContext> strOrNum() {
			return getRuleContexts(StrOrNumContext.class);
		}
		public StrOrNumContext strOrNum(int i) {
			return getRuleContext(StrOrNumContext.class,i);
		}
		public TerminalNode SQR_R() { return getToken(MyCriteriaParser.SQR_R, 0); }
		public TerminalNode IN() { return getToken(MyCriteriaParser.IN, 0); }
		public TerminalNode EXCL() { return getToken(MyCriteriaParser.EXCL, 0); }
		public List<TerminalNode> COMMA() { return getTokens(MyCriteriaParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MyCriteriaParser.COMMA, i);
		}
		public InArrayParserContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inArrayParser; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterInArrayParser(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitInArrayParser(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitInArrayParser(this);
			else return visitor.visitChildren(this);
		}
	}

	public final InArrayParserContext inArrayParser() throws RecognitionException {
		InArrayParserContext _localctx = new InArrayParserContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_inArrayParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			objectAccessParser();
			setState(142);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IN:
				{
				setState(139);
				match(IN);
				}
				break;
			case EXCL:
				{
				setState(140);
				match(EXCL);
				setState(141);
				match(IN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(144);
			match(SQR_L);
			setState(145);
			strOrNum();
			setState(150);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(146);
				match(COMMA);
				setState(147);
				strOrNum();
				}
				}
				setState(152);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(153);
			match(SQR_R);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumbContext extends ParserRuleContext {
		public List<TerminalNode> INT() { return getTokens(MyCriteriaParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(MyCriteriaParser.INT, i);
		}
		public TerminalNode DOT() { return getToken(MyCriteriaParser.DOT, 0); }
		public NumbContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numb; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterNumb(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitNumb(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitNumb(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumbContext numb() throws RecognitionException {
		NumbContext _localctx = new NumbContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_numb);
		try {
			setState(159);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(155);
				match(INT);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(156);
				match(INT);
				setState(157);
				match(DOT);
				setState(158);
				match(INT);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 3:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 16);
		case 1:
			return precpred(_ctx, 15);
		case 2:
			return precpred(_ctx, 13);
		case 3:
			return precpred(_ctx, 12);
		case 4:
			return precpred(_ctx, 11);
		case 5:
			return precpred(_ctx, 10);
		case 6:
			return precpred(_ctx, 9);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u001f\u00a2\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0001\u0000\u0005\u0000\u001a\b\u0000\n\u0000\f\u0000\u001d\t\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0001\u0004\u0001\"\b\u0001\u000b\u0001\f\u0001"+
		"#\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0003\u0002,\b\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u00035\b\u0003\n\u0003\f\u0003"+
		"8\t\u0003\u0001\u0003\u0003\u0003;\b\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0003\u0003J\b"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003b\b"+
		"\u0003\n\u0003\f\u0003e\t\u0003\u0001\u0004\u0001\u0004\u0004\u0004i\b"+
		"\u0004\u000b\u0004\f\u0004j\u0001\u0004\u0004\u0004n\b\u0004\u000b\u0004"+
		"\f\u0004o\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0005\u0007}\b\u0007\n\u0007\f\u0007\u0080\t\u0007\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\t\u0001\t\u0003\t\u0089\b\t\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0003\n\u008f\b\n\u0001\n\u0001\n\u0001\n\u0001\n\u0005\n\u0095"+
		"\b\n\n\n\f\n\u0098\t\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0003\u000b\u00a0\b\u000b\u0001\u000b\u0000\u0001\u0006\f"+
		"\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0000\u0003"+
		"\u0002\u0000\u0001\u0001\u000f\u000f\u0001\u0000\u0002\u0003\u0001\u0000"+
		"\u0006\u000b\u00b1\u0000\u001b\u0001\u0000\u0000\u0000\u0002!\u0001\u0000"+
		"\u0000\u0000\u0004+\u0001\u0000\u0000\u0000\u0006I\u0001\u0000\u0000\u0000"+
		"\bf\u0001\u0000\u0000\u0000\ns\u0001\u0000\u0000\u0000\fv\u0001\u0000"+
		"\u0000\u0000\u000e~\u0001\u0000\u0000\u0000\u0010\u0081\u0001\u0000\u0000"+
		"\u0000\u0012\u0088\u0001\u0000\u0000\u0000\u0014\u008a\u0001\u0000\u0000"+
		"\u0000\u0016\u009f\u0001\u0000\u0000\u0000\u0018\u001a\u0003\u0004\u0002"+
		"\u0000\u0019\u0018\u0001\u0000\u0000\u0000\u001a\u001d\u0001\u0000\u0000"+
		"\u0000\u001b\u0019\u0001\u0000\u0000\u0000\u001b\u001c\u0001\u0000\u0000"+
		"\u0000\u001c\u001e\u0001\u0000\u0000\u0000\u001d\u001b\u0001\u0000\u0000"+
		"\u0000\u001e\u001f\u0003\u0006\u0003\u0000\u001f\u0001\u0001\u0000\u0000"+
		"\u0000 \"\u0003\u0004\u0002\u0000! \u0001\u0000\u0000\u0000\"#\u0001\u0000"+
		"\u0000\u0000#!\u0001\u0000\u0000\u0000#$\u0001\u0000\u0000\u0000$\u0003"+
		"\u0001\u0000\u0000\u0000%&\u0003\f\u0006\u0000&\'\u0005\u0012\u0000\u0000"+
		"\',\u0001\u0000\u0000\u0000()\u0003\u0010\b\u0000)*\u0005\u0012\u0000"+
		"\u0000*,\u0001\u0000\u0000\u0000+%\u0001\u0000\u0000\u0000+(\u0001\u0000"+
		"\u0000\u0000,\u0005\u0001\u0000\u0000\u0000-.\u0006\u0003\uffff\uffff"+
		"\u0000.J\u0003\u0014\n\u0000/0\u0005\u001d\u0000\u000006\u0005\u0004\u0000"+
		"\u000012\u0003\u0006\u0003\u000023\u0005\u0011\u0000\u000035\u0001\u0000"+
		"\u0000\u000041\u0001\u0000\u0000\u000058\u0001\u0000\u0000\u000064\u0001"+
		"\u0000\u0000\u000067\u0001\u0000\u0000\u00007:\u0001\u0000\u0000\u0000"+
		"86\u0001\u0000\u0000\u00009;\u0003\u0006\u0003\u0000:9\u0001\u0000\u0000"+
		"\u0000:;\u0001\u0000\u0000\u0000;<\u0001\u0000\u0000\u0000<J\u0005\u0005"+
		"\u0000\u0000=>\u0005\u0017\u0000\u0000>J\u0003\u0006\u0003\b?@\u0005\u0004"+
		"\u0000\u0000@A\u0003\u0006\u0003\u0000AB\u0005\u0005\u0000\u0000BJ\u0001"+
		"\u0000\u0000\u0000CJ\u0005\u0016\u0000\u0000DJ\u0003\u0016\u000b\u0000"+
		"EJ\u0005\u0018\u0000\u0000FJ\u0005\u001e\u0000\u0000GJ\u0003\n\u0005\u0000"+
		"HJ\u0003\b\u0004\u0000I-\u0001\u0000\u0000\u0000I/\u0001\u0000\u0000\u0000"+
		"I=\u0001\u0000\u0000\u0000I?\u0001\u0000\u0000\u0000IC\u0001\u0000\u0000"+
		"\u0000ID\u0001\u0000\u0000\u0000IE\u0001\u0000\u0000\u0000IF\u0001\u0000"+
		"\u0000\u0000IG\u0001\u0000\u0000\u0000IH\u0001\u0000\u0000\u0000Jc\u0001"+
		"\u0000\u0000\u0000KL\n\u0010\u0000\u0000LM\u0007\u0000\u0000\u0000Mb\u0003"+
		"\u0006\u0003\u0011NO\n\u000f\u0000\u0000OP\u0007\u0001\u0000\u0000Pb\u0003"+
		"\u0006\u0003\u0010QR\n\r\u0000\u0000RS\u0005\u001d\u0000\u0000Sb\u0003"+
		"\u0006\u0003\u000eTU\n\f\u0000\u0000UV\u0005\u0017\u0000\u0000VW\u0005"+
		"\u001d\u0000\u0000Wb\u0003\u0006\u0003\rXY\n\u000b\u0000\u0000YZ\u0007"+
		"\u0002\u0000\u0000Zb\u0003\u0006\u0003\f[\\\n\n\u0000\u0000\\]\u0005\f"+
		"\u0000\u0000]b\u0003\u0006\u0003\u000b^_\n\t\u0000\u0000_`\u0005\r\u0000"+
		"\u0000`b\u0003\u0006\u0003\naK\u0001\u0000\u0000\u0000aN\u0001\u0000\u0000"+
		"\u0000aQ\u0001\u0000\u0000\u0000aT\u0001\u0000\u0000\u0000aX\u0001\u0000"+
		"\u0000\u0000a[\u0001\u0000\u0000\u0000a^\u0001\u0000\u0000\u0000be\u0001"+
		"\u0000\u0000\u0000ca\u0001\u0000\u0000\u0000cd\u0001\u0000\u0000\u0000"+
		"d\u0007\u0001\u0000\u0000\u0000ec\u0001\u0000\u0000\u0000fh\u0005\u001b"+
		"\u0000\u0000gi\u0005\u0013\u0000\u0000hg\u0001\u0000\u0000\u0000ij\u0001"+
		"\u0000\u0000\u0000jh\u0001\u0000\u0000\u0000jk\u0001\u0000\u0000\u0000"+
		"km\u0001\u0000\u0000\u0000ln\u0005\u001e\u0000\u0000ml\u0001\u0000\u0000"+
		"\u0000no\u0001\u0000\u0000\u0000om\u0001\u0000\u0000\u0000op\u0001\u0000"+
		"\u0000\u0000pq\u0001\u0000\u0000\u0000qr\u0005\u0014\u0000\u0000r\t\u0001"+
		"\u0000\u0000\u0000st\u0005\u0019\u0000\u0000tu\u0005\u001d\u0000\u0000"+
		"u\u000b\u0001\u0000\u0000\u0000vw\u0005\u000e\u0000\u0000wx\u0005\u001d"+
		"\u0000\u0000x\r\u0001\u0000\u0000\u0000yz\u0003\u0010\b\u0000z{\u0005"+
		"\u0012\u0000\u0000{}\u0001\u0000\u0000\u0000|y\u0001\u0000\u0000\u0000"+
		"}\u0080\u0001\u0000\u0000\u0000~|\u0001\u0000\u0000\u0000~\u007f\u0001"+
		"\u0000\u0000\u0000\u007f\u000f\u0001\u0000\u0000\u0000\u0080~\u0001\u0000"+
		"\u0000\u0000\u0081\u0082\u0005\u0019\u0000\u0000\u0082\u0083\u0005\u001d"+
		"\u0000\u0000\u0083\u0084\u0005\u001a\u0000\u0000\u0084\u0085\u0003\u0006"+
		"\u0003\u0000\u0085\u0011\u0001\u0000\u0000\u0000\u0086\u0089\u0005\u001e"+
		"\u0000\u0000\u0087\u0089\u0003\u0016\u000b\u0000\u0088\u0086\u0001\u0000"+
		"\u0000\u0000\u0088\u0087\u0001\u0000\u0000\u0000\u0089\u0013\u0001\u0000"+
		"\u0000\u0000\u008a\u008e\u0003\b\u0004\u0000\u008b\u008f\u0005\u0015\u0000"+
		"\u0000\u008c\u008d\u0005\u0017\u0000\u0000\u008d\u008f\u0005\u0015\u0000"+
		"\u0000\u008e\u008b\u0001\u0000\u0000\u0000\u008e\u008c\u0001\u0000\u0000"+
		"\u0000\u008f\u0090\u0001\u0000\u0000\u0000\u0090\u0091\u0005\u0013\u0000"+
		"\u0000\u0091\u0096\u0003\u0012\t\u0000\u0092\u0093\u0005\u0011\u0000\u0000"+
		"\u0093\u0095\u0003\u0012\t\u0000\u0094\u0092\u0001\u0000\u0000\u0000\u0095"+
		"\u0098\u0001\u0000\u0000\u0000\u0096\u0094\u0001\u0000\u0000\u0000\u0096"+
		"\u0097\u0001\u0000\u0000\u0000\u0097\u0099\u0001\u0000\u0000\u0000\u0098"+
		"\u0096\u0001\u0000\u0000\u0000\u0099\u009a\u0005\u0014\u0000\u0000\u009a"+
		"\u0015\u0001\u0000\u0000\u0000\u009b\u00a0\u0005\u001c\u0000\u0000\u009c"+
		"\u009d\u0005\u001c\u0000\u0000\u009d\u009e\u0005\u0010\u0000\u0000\u009e"+
		"\u00a0\u0005\u001c\u0000\u0000\u009f\u009b\u0001\u0000\u0000\u0000\u009f"+
		"\u009c\u0001\u0000\u0000\u0000\u00a0\u0017\u0001\u0000\u0000\u0000\u000f"+
		"\u001b#+6:Iacjo~\u0088\u008e\u0096\u009f";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}