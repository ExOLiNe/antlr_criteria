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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, IMPORT=15, SLASH=16, 
		DOT=17, COMMA=18, SEMICOLON=19, SQR_L=20, SQR_R=21, IN=22, BOOL=23, EXCL=24, 
		NULL_T=25, S_Q=26, D_Q=27, BUCK=28, EQUALS=29, STR_LITERAL=30, INT=31, 
		STR=32, WS=33;
	public static final int
		RULE_app = 0, RULE_statements = 1, RULE_statement = 2, RULE_expr = 3, 
		RULE_test_expr = 4, RULE_importStatement = 5, RULE_identifierDefinitions = 6, 
		RULE_identifierDefinition = 7, RULE_identifierAccess = 8, RULE_jsonPointerInner = 9, 
		RULE_jsonPointer = 10, RULE_objectAccessParser = 11, RULE_strOrNum = 12, 
		RULE_numb = 13, RULE_inArrayParser = 14;
	private static String[] makeRuleNames() {
		return new String[] {
			"app", "statements", "statement", "expr", "test_expr", "importStatement", 
			"identifierDefinitions", "identifierDefinition", "identifierAccess", 
			"jsonPointerInner", "jsonPointer", "objectAccessParser", "strOrNum", 
			"numb", "inArrayParser"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
			"'=='", "'!='", "'&&'", "'||'", "'object'", "'import'", "'/'", "'.'", 
			"','", "';'", "'['", "']'", "'in'", null, "'!'", "'null'", "'''", "'\"'", 
			"'$'", "'='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "IMPORT", "SLASH", "DOT", "COMMA", "SEMICOLON", "SQR_L", 
			"SQR_R", "IN", "BOOL", "EXCL", "NULL_T", "S_Q", "D_Q", "BUCK", "EQUALS", 
			"STR_LITERAL", "INT", "STR", "WS"
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
			setState(33);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(30);
					statement();
					}
					} 
				}
				setState(35);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(36);
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
			setState(39); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(38);
				statement();
				}
				}
				setState(41); 
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
			setState(49);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IMPORT:
				enterOuterAlt(_localctx, 1);
				{
				setState(43);
				importStatement();
				setState(44);
				match(SEMICOLON);
				}
				break;
			case BUCK:
				enterOuterAlt(_localctx, 2);
				{
				setState(46);
				identifierDefinition();
				setState(47);
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
		public TerminalNode STR() { return getToken(MyCriteriaParser.STR, 0); }
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
		public TerminalNode STR() { return getToken(MyCriteriaParser.STR, 0); }
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
			setState(79);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				_localctx = new IdAccessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(52);
				identifierAccess();
				}
				break;
			case 2:
				{
				_localctx = new InArrayContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(53);
				inArrayParser();
				}
				break;
			case 3:
				{
				_localctx = new FuncCallContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				{
				setState(54);
				match(STR);
				setState(55);
				match(T__3);
				setState(61);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(56);
						expr(0);
						setState(57);
						match(COMMA);
						}
						} 
					}
					setState(63);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				}
				setState(65);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 7843364880L) != 0)) {
					{
					setState(64);
					expr(0);
					}
				}

				setState(67);
				match(T__4);
				}
				}
				break;
			case 4:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(68);
				match(EXCL);
				setState(69);
				expr(7);
				}
				break;
			case 5:
				{
				_localctx = new ParenExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(70);
				match(T__3);
				setState(71);
				expr(0);
				setState(72);
				match(T__4);
				}
				break;
			case 6:
				{
				_localctx = new BoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(74);
				match(BOOL);
				}
				break;
			case 7:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(75);
				numb();
				}
				break;
			case 8:
				{
				_localctx = new ObjectAccessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(76);
				objectAccessParser();
				}
				break;
			case 9:
				{
				_localctx = new StrLiteralContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(77);
				match(STR_LITERAL);
				}
				break;
			case 10:
				{
				_localctx = new NullContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(78);
				match(NULL_T);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(101);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(99);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
					case 1:
						{
						_localctx = new MulDivContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(81);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(82);
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
						setState(83);
						expr(15);
						}
						break;
					case 2:
						{
						_localctx = new AddSubContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(84);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(85);
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
						setState(86);
						expr(14);
						}
						break;
					case 3:
						{
						_localctx = new InfixFuncCallContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(87);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(88);
						match(STR);
						setState(89);
						expr(12);
						}
						break;
					case 4:
						{
						_localctx = new ComparisonContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(90);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(91);
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
						setState(92);
						expr(11);
						}
						break;
					case 5:
						{
						_localctx = new AndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(93);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(94);
						match(T__11);
						setState(95);
						expr(10);
						}
						break;
					case 6:
						{
						_localctx = new OrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(96);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(97);
						match(T__12);
						setState(98);
						expr(9);
						}
						break;
					}
					} 
				}
				setState(103);
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
	public static class Test_exprContext extends ParserRuleContext {
		public Token op;
		public InArrayParserContext inArrayParser() {
			return getRuleContext(InArrayParserContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode SLASH() { return getToken(MyCriteriaParser.SLASH, 0); }
		public TerminalNode STR() { return getToken(MyCriteriaParser.STR, 0); }
		public List<TerminalNode> COMMA() { return getTokens(MyCriteriaParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MyCriteriaParser.COMMA, i);
		}
		public TerminalNode EXCL() { return getToken(MyCriteriaParser.EXCL, 0); }
		public TerminalNode BOOL() { return getToken(MyCriteriaParser.BOOL, 0); }
		public TerminalNode INT() { return getToken(MyCriteriaParser.INT, 0); }
		public ObjectAccessParserContext objectAccessParser() {
			return getRuleContext(ObjectAccessParserContext.class,0);
		}
		public TerminalNode STR_LITERAL() { return getToken(MyCriteriaParser.STR_LITERAL, 0); }
		public TerminalNode NULL_T() { return getToken(MyCriteriaParser.NULL_T, 0); }
		public Test_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_test_expr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterTest_expr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitTest_expr(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitTest_expr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final Test_exprContext test_expr() throws RecognitionException {
		Test_exprContext _localctx = new Test_exprContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_test_expr);
		int _la;
		try {
			int _alt;
			setState(154);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(104);
				inArrayParser();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(105);
				expr(0);
				setState(106);
				((Test_exprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__0 || _la==SLASH) ) {
					((Test_exprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(107);
				expr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(109);
				expr(0);
				setState(110);
				((Test_exprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__1 || _la==T__2) ) {
					((Test_exprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(111);
				expr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				{
				setState(113);
				match(STR);
				setState(114);
				match(T__3);
				setState(120);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(115);
						expr(0);
						setState(116);
						match(COMMA);
						}
						} 
					}
					setState(122);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				}
				setState(124);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 7843364880L) != 0)) {
					{
					setState(123);
					expr(0);
					}
				}

				setState(126);
				match(T__4);
				}
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(127);
				expr(0);
				setState(128);
				match(STR);
				setState(129);
				expr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(131);
				expr(0);
				setState(132);
				((Test_exprContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 4032L) != 0)) ) {
					((Test_exprContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(133);
				expr(0);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(135);
				expr(0);
				setState(136);
				match(T__11);
				setState(137);
				expr(0);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(139);
				expr(0);
				setState(140);
				match(T__12);
				setState(141);
				expr(0);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(143);
				match(EXCL);
				setState(144);
				expr(0);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(145);
				match(T__3);
				setState(146);
				expr(0);
				setState(147);
				match(T__4);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(149);
				match(BOOL);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(150);
				match(INT);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(151);
				objectAccessParser();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(152);
				match(STR_LITERAL);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(153);
				match(NULL_T);
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

	@SuppressWarnings("CheckReturnValue")
	public static class ImportStatementContext extends ParserRuleContext {
		public TerminalNode IMPORT() { return getToken(MyCriteriaParser.IMPORT, 0); }
		public TerminalNode STR() { return getToken(MyCriteriaParser.STR, 0); }
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
		enterRule(_localctx, 10, RULE_importStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(156);
			match(IMPORT);
			setState(157);
			match(STR);
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
		enterRule(_localctx, 12, RULE_identifierDefinitions);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(159);
				identifierDefinition();
				setState(160);
				match(SEMICOLON);
				}
				}
				setState(164); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==BUCK );
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
		public TerminalNode STR() { return getToken(MyCriteriaParser.STR, 0); }
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
		enterRule(_localctx, 14, RULE_identifierDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			match(BUCK);
			setState(167);
			match(STR);
			setState(168);
			match(EQUALS);
			setState(169);
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
	public static class IdentifierAccessContext extends ParserRuleContext {
		public TerminalNode BUCK() { return getToken(MyCriteriaParser.BUCK, 0); }
		public TerminalNode STR() { return getToken(MyCriteriaParser.STR, 0); }
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
		enterRule(_localctx, 16, RULE_identifierAccess);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(171);
			match(BUCK);
			setState(172);
			match(STR);
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
	public static class JsonPointerInnerContext extends ParserRuleContext {
		public List<TerminalNode> STR() { return getTokens(MyCriteriaParser.STR); }
		public TerminalNode STR(int i) {
			return getToken(MyCriteriaParser.STR, i);
		}
		public List<TerminalNode> SLASH() { return getTokens(MyCriteriaParser.SLASH); }
		public TerminalNode SLASH(int i) {
			return getToken(MyCriteriaParser.SLASH, i);
		}
		public JsonPointerInnerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_jsonPointerInner; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterJsonPointerInner(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitJsonPointerInner(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitJsonPointerInner(this);
			else return visitor.visitChildren(this);
		}
	}

	public final JsonPointerInnerContext jsonPointerInner() throws RecognitionException {
		JsonPointerInnerContext _localctx = new JsonPointerInnerContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_jsonPointerInner);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(175);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SLASH) {
				{
				setState(174);
				match(SLASH);
				}
			}

			setState(177);
			match(STR);
			setState(182);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(178);
					match(SLASH);
					setState(179);
					match(STR);
					}
					} 
				}
				setState(184);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			setState(186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SLASH) {
				{
				setState(185);
				match(SLASH);
				}
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
	public static class JsonPointerContext extends ParserRuleContext {
		public List<TerminalNode> S_Q() { return getTokens(MyCriteriaParser.S_Q); }
		public TerminalNode S_Q(int i) {
			return getToken(MyCriteriaParser.S_Q, i);
		}
		public JsonPointerInnerContext jsonPointerInner() {
			return getRuleContext(JsonPointerInnerContext.class,0);
		}
		public List<TerminalNode> D_Q() { return getTokens(MyCriteriaParser.D_Q); }
		public TerminalNode D_Q(int i) {
			return getToken(MyCriteriaParser.D_Q, i);
		}
		public TerminalNode STR_LITERAL() { return getToken(MyCriteriaParser.STR_LITERAL, 0); }
		public JsonPointerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_jsonPointer; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).enterJsonPointer(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MyCriteriaListener ) ((MyCriteriaListener)listener).exitJsonPointer(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof MyCriteriaVisitor ) return ((MyCriteriaVisitor<? extends T>)visitor).visitJsonPointer(this);
			else return visitor.visitChildren(this);
		}
	}

	public final JsonPointerContext jsonPointer() throws RecognitionException {
		JsonPointerContext _localctx = new JsonPointerContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_jsonPointer);
		try {
			setState(197);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case S_Q:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(188);
				match(S_Q);
				setState(189);
				jsonPointerInner();
				setState(190);
				match(S_Q);
				}
				}
				break;
			case D_Q:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(192);
				match(D_Q);
				setState(193);
				jsonPointerInner();
				setState(194);
				match(D_Q);
				}
				}
				break;
			case STR_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(196);
				match(STR_LITERAL);
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
	public static class ObjectAccessParserContext extends ParserRuleContext {
		public TerminalNode SQR_R() { return getToken(MyCriteriaParser.SQR_R, 0); }
		public List<TerminalNode> SQR_L() { return getTokens(MyCriteriaParser.SQR_L); }
		public TerminalNode SQR_L(int i) {
			return getToken(MyCriteriaParser.SQR_L, i);
		}
		public List<JsonPointerContext> jsonPointer() {
			return getRuleContexts(JsonPointerContext.class);
		}
		public JsonPointerContext jsonPointer(int i) {
			return getRuleContext(JsonPointerContext.class,i);
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
		enterRule(_localctx, 22, RULE_objectAccessParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			match(T__13);
			setState(201); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(200);
				match(SQR_L);
				}
				}
				setState(203); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==SQR_L );
			setState(206); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(205);
				jsonPointer();
				}
				}
				setState(208); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 1275068416L) != 0) );
			setState(210);
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
		enterRule(_localctx, 24, RULE_strOrNum);
		try {
			setState(214);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STR_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(212);
				match(STR_LITERAL);
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(213);
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
		enterRule(_localctx, 26, RULE_numb);
		try {
			setState(220);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(216);
				match(INT);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(217);
				match(INT);
				setState(218);
				match(DOT);
				setState(219);
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
		enterRule(_localctx, 28, RULE_inArrayParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			objectAccessParser();
			setState(226);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IN:
				{
				setState(223);
				match(IN);
				}
				break;
			case EXCL:
				{
				setState(224);
				match(EXCL);
				setState(225);
				match(IN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(228);
			match(SQR_L);
			setState(229);
			strOrNum();
			setState(234);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(230);
				match(COMMA);
				setState(231);
				strOrNum();
				}
				}
				setState(236);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(237);
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
			return precpred(_ctx, 14);
		case 1:
			return precpred(_ctx, 13);
		case 2:
			return precpred(_ctx, 11);
		case 3:
			return precpred(_ctx, 10);
		case 4:
			return precpred(_ctx, 9);
		case 5:
			return precpred(_ctx, 8);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001!\u00f0\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0001\u0000\u0005\u0000"+
		" \b\u0000\n\u0000\f\u0000#\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0004\u0001(\b\u0001\u000b\u0001\f\u0001)\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u00022\b\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0005\u0003<\b\u0003\n\u0003\f\u0003?\t\u0003\u0001"+
		"\u0003\u0003\u0003B\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0003\u0003P\b\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003d\b"+
		"\u0003\n\u0003\f\u0003g\t\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004w\b"+
		"\u0004\n\u0004\f\u0004z\t\u0004\u0001\u0004\u0003\u0004}\b\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u009b\b\u0004\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0004"+
		"\u0006\u00a3\b\u0006\u000b\u0006\f\u0006\u00a4\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0003"+
		"\t\u00b0\b\t\u0001\t\u0001\t\u0001\t\u0005\t\u00b5\b\t\n\t\f\t\u00b8\t"+
		"\t\u0001\t\u0003\t\u00bb\b\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0003\n\u00c6\b\n\u0001\u000b\u0001\u000b\u0004"+
		"\u000b\u00ca\b\u000b\u000b\u000b\f\u000b\u00cb\u0001\u000b\u0004\u000b"+
		"\u00cf\b\u000b\u000b\u000b\f\u000b\u00d0\u0001\u000b\u0001\u000b\u0001"+
		"\f\u0001\f\u0003\f\u00d7\b\f\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00dd"+
		"\b\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u00e3"+
		"\b\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u00e9"+
		"\b\u000e\n\u000e\f\u000e\u00ec\t\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0000\u0001\u0006\u000f\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012"+
		"\u0014\u0016\u0018\u001a\u001c\u0000\u0003\u0002\u0000\u0001\u0001\u0010"+
		"\u0010\u0001\u0000\u0002\u0003\u0001\u0000\u0006\u000b\u0110\u0000!\u0001"+
		"\u0000\u0000\u0000\u0002\'\u0001\u0000\u0000\u0000\u00041\u0001\u0000"+
		"\u0000\u0000\u0006O\u0001\u0000\u0000\u0000\b\u009a\u0001\u0000\u0000"+
		"\u0000\n\u009c\u0001\u0000\u0000\u0000\f\u00a2\u0001\u0000\u0000\u0000"+
		"\u000e\u00a6\u0001\u0000\u0000\u0000\u0010\u00ab\u0001\u0000\u0000\u0000"+
		"\u0012\u00af\u0001\u0000\u0000\u0000\u0014\u00c5\u0001\u0000\u0000\u0000"+
		"\u0016\u00c7\u0001\u0000\u0000\u0000\u0018\u00d6\u0001\u0000\u0000\u0000"+
		"\u001a\u00dc\u0001\u0000\u0000\u0000\u001c\u00de\u0001\u0000\u0000\u0000"+
		"\u001e \u0003\u0004\u0002\u0000\u001f\u001e\u0001\u0000\u0000\u0000 #"+
		"\u0001\u0000\u0000\u0000!\u001f\u0001\u0000\u0000\u0000!\"\u0001\u0000"+
		"\u0000\u0000\"$\u0001\u0000\u0000\u0000#!\u0001\u0000\u0000\u0000$%\u0003"+
		"\u0006\u0003\u0000%\u0001\u0001\u0000\u0000\u0000&(\u0003\u0004\u0002"+
		"\u0000\'&\u0001\u0000\u0000\u0000()\u0001\u0000\u0000\u0000)\'\u0001\u0000"+
		"\u0000\u0000)*\u0001\u0000\u0000\u0000*\u0003\u0001\u0000\u0000\u0000"+
		"+,\u0003\n\u0005\u0000,-\u0005\u0013\u0000\u0000-2\u0001\u0000\u0000\u0000"+
		"./\u0003\u000e\u0007\u0000/0\u0005\u0013\u0000\u000002\u0001\u0000\u0000"+
		"\u00001+\u0001\u0000\u0000\u00001.\u0001\u0000\u0000\u00002\u0005\u0001"+
		"\u0000\u0000\u000034\u0006\u0003\uffff\uffff\u00004P\u0003\u0010\b\u0000"+
		"5P\u0003\u001c\u000e\u000067\u0005 \u0000\u00007=\u0005\u0004\u0000\u0000"+
		"89\u0003\u0006\u0003\u00009:\u0005\u0012\u0000\u0000:<\u0001\u0000\u0000"+
		"\u0000;8\u0001\u0000\u0000\u0000<?\u0001\u0000\u0000\u0000=;\u0001\u0000"+
		"\u0000\u0000=>\u0001\u0000\u0000\u0000>A\u0001\u0000\u0000\u0000?=\u0001"+
		"\u0000\u0000\u0000@B\u0003\u0006\u0003\u0000A@\u0001\u0000\u0000\u0000"+
		"AB\u0001\u0000\u0000\u0000BC\u0001\u0000\u0000\u0000CP\u0005\u0005\u0000"+
		"\u0000DE\u0005\u0018\u0000\u0000EP\u0003\u0006\u0003\u0007FG\u0005\u0004"+
		"\u0000\u0000GH\u0003\u0006\u0003\u0000HI\u0005\u0005\u0000\u0000IP\u0001"+
		"\u0000\u0000\u0000JP\u0005\u0017\u0000\u0000KP\u0003\u001a\r\u0000LP\u0003"+
		"\u0016\u000b\u0000MP\u0005\u001e\u0000\u0000NP\u0005\u0019\u0000\u0000"+
		"O3\u0001\u0000\u0000\u0000O5\u0001\u0000\u0000\u0000O6\u0001\u0000\u0000"+
		"\u0000OD\u0001\u0000\u0000\u0000OF\u0001\u0000\u0000\u0000OJ\u0001\u0000"+
		"\u0000\u0000OK\u0001\u0000\u0000\u0000OL\u0001\u0000\u0000\u0000OM\u0001"+
		"\u0000\u0000\u0000ON\u0001\u0000\u0000\u0000Pe\u0001\u0000\u0000\u0000"+
		"QR\n\u000e\u0000\u0000RS\u0007\u0000\u0000\u0000Sd\u0003\u0006\u0003\u000f"+
		"TU\n\r\u0000\u0000UV\u0007\u0001\u0000\u0000Vd\u0003\u0006\u0003\u000e"+
		"WX\n\u000b\u0000\u0000XY\u0005 \u0000\u0000Yd\u0003\u0006\u0003\fZ[\n"+
		"\n\u0000\u0000[\\\u0007\u0002\u0000\u0000\\d\u0003\u0006\u0003\u000b]"+
		"^\n\t\u0000\u0000^_\u0005\f\u0000\u0000_d\u0003\u0006\u0003\n`a\n\b\u0000"+
		"\u0000ab\u0005\r\u0000\u0000bd\u0003\u0006\u0003\tcQ\u0001\u0000\u0000"+
		"\u0000cT\u0001\u0000\u0000\u0000cW\u0001\u0000\u0000\u0000cZ\u0001\u0000"+
		"\u0000\u0000c]\u0001\u0000\u0000\u0000c`\u0001\u0000\u0000\u0000dg\u0001"+
		"\u0000\u0000\u0000ec\u0001\u0000\u0000\u0000ef\u0001\u0000\u0000\u0000"+
		"f\u0007\u0001\u0000\u0000\u0000ge\u0001\u0000\u0000\u0000h\u009b\u0003"+
		"\u001c\u000e\u0000ij\u0003\u0006\u0003\u0000jk\u0007\u0000\u0000\u0000"+
		"kl\u0003\u0006\u0003\u0000l\u009b\u0001\u0000\u0000\u0000mn\u0003\u0006"+
		"\u0003\u0000no\u0007\u0001\u0000\u0000op\u0003\u0006\u0003\u0000p\u009b"+
		"\u0001\u0000\u0000\u0000qr\u0005 \u0000\u0000rx\u0005\u0004\u0000\u0000"+
		"st\u0003\u0006\u0003\u0000tu\u0005\u0012\u0000\u0000uw\u0001\u0000\u0000"+
		"\u0000vs\u0001\u0000\u0000\u0000wz\u0001\u0000\u0000\u0000xv\u0001\u0000"+
		"\u0000\u0000xy\u0001\u0000\u0000\u0000y|\u0001\u0000\u0000\u0000zx\u0001"+
		"\u0000\u0000\u0000{}\u0003\u0006\u0003\u0000|{\u0001\u0000\u0000\u0000"+
		"|}\u0001\u0000\u0000\u0000}~\u0001\u0000\u0000\u0000~\u009b\u0005\u0005"+
		"\u0000\u0000\u007f\u0080\u0003\u0006\u0003\u0000\u0080\u0081\u0005 \u0000"+
		"\u0000\u0081\u0082\u0003\u0006\u0003\u0000\u0082\u009b\u0001\u0000\u0000"+
		"\u0000\u0083\u0084\u0003\u0006\u0003\u0000\u0084\u0085\u0007\u0002\u0000"+
		"\u0000\u0085\u0086\u0003\u0006\u0003\u0000\u0086\u009b\u0001\u0000\u0000"+
		"\u0000\u0087\u0088\u0003\u0006\u0003\u0000\u0088\u0089\u0005\f\u0000\u0000"+
		"\u0089\u008a\u0003\u0006\u0003\u0000\u008a\u009b\u0001\u0000\u0000\u0000"+
		"\u008b\u008c\u0003\u0006\u0003\u0000\u008c\u008d\u0005\r\u0000\u0000\u008d"+
		"\u008e\u0003\u0006\u0003\u0000\u008e\u009b\u0001\u0000\u0000\u0000\u008f"+
		"\u0090\u0005\u0018\u0000\u0000\u0090\u009b\u0003\u0006\u0003\u0000\u0091"+
		"\u0092\u0005\u0004\u0000\u0000\u0092\u0093\u0003\u0006\u0003\u0000\u0093"+
		"\u0094\u0005\u0005\u0000\u0000\u0094\u009b\u0001\u0000\u0000\u0000\u0095"+
		"\u009b\u0005\u0017\u0000\u0000\u0096\u009b\u0005\u001f\u0000\u0000\u0097"+
		"\u009b\u0003\u0016\u000b\u0000\u0098\u009b\u0005\u001e\u0000\u0000\u0099"+
		"\u009b\u0005\u0019\u0000\u0000\u009ah\u0001\u0000\u0000\u0000\u009ai\u0001"+
		"\u0000\u0000\u0000\u009am\u0001\u0000\u0000\u0000\u009aq\u0001\u0000\u0000"+
		"\u0000\u009a\u007f\u0001\u0000\u0000\u0000\u009a\u0083\u0001\u0000\u0000"+
		"\u0000\u009a\u0087\u0001\u0000\u0000\u0000\u009a\u008b\u0001\u0000\u0000"+
		"\u0000\u009a\u008f\u0001\u0000\u0000\u0000\u009a\u0091\u0001\u0000\u0000"+
		"\u0000\u009a\u0095\u0001\u0000\u0000\u0000\u009a\u0096\u0001\u0000\u0000"+
		"\u0000\u009a\u0097\u0001\u0000\u0000\u0000\u009a\u0098\u0001\u0000\u0000"+
		"\u0000\u009a\u0099\u0001\u0000\u0000\u0000\u009b\t\u0001\u0000\u0000\u0000"+
		"\u009c\u009d\u0005\u000f\u0000\u0000\u009d\u009e\u0005 \u0000\u0000\u009e"+
		"\u000b\u0001\u0000\u0000\u0000\u009f\u00a0\u0003\u000e\u0007\u0000\u00a0"+
		"\u00a1\u0005\u0013\u0000\u0000\u00a1\u00a3\u0001\u0000\u0000\u0000\u00a2"+
		"\u009f\u0001\u0000\u0000\u0000\u00a3\u00a4\u0001\u0000\u0000\u0000\u00a4"+
		"\u00a2\u0001\u0000\u0000\u0000\u00a4\u00a5\u0001\u0000\u0000\u0000\u00a5"+
		"\r\u0001\u0000\u0000\u0000\u00a6\u00a7\u0005\u001c\u0000\u0000\u00a7\u00a8"+
		"\u0005 \u0000\u0000\u00a8\u00a9\u0005\u001d\u0000\u0000\u00a9\u00aa\u0003"+
		"\u0006\u0003\u0000\u00aa\u000f\u0001\u0000\u0000\u0000\u00ab\u00ac\u0005"+
		"\u001c\u0000\u0000\u00ac\u00ad\u0005 \u0000\u0000\u00ad\u0011\u0001\u0000"+
		"\u0000\u0000\u00ae\u00b0\u0005\u0010\u0000\u0000\u00af\u00ae\u0001\u0000"+
		"\u0000\u0000\u00af\u00b0\u0001\u0000\u0000\u0000\u00b0\u00b1\u0001\u0000"+
		"\u0000\u0000\u00b1\u00b6\u0005 \u0000\u0000\u00b2\u00b3\u0005\u0010\u0000"+
		"\u0000\u00b3\u00b5\u0005 \u0000\u0000\u00b4\u00b2\u0001\u0000\u0000\u0000"+
		"\u00b5\u00b8\u0001\u0000\u0000\u0000\u00b6\u00b4\u0001\u0000\u0000\u0000"+
		"\u00b6\u00b7\u0001\u0000\u0000\u0000\u00b7\u00ba\u0001\u0000\u0000\u0000"+
		"\u00b8\u00b6\u0001\u0000\u0000\u0000\u00b9\u00bb\u0005\u0010\u0000\u0000"+
		"\u00ba\u00b9\u0001\u0000\u0000\u0000\u00ba\u00bb\u0001\u0000\u0000\u0000"+
		"\u00bb\u0013\u0001\u0000\u0000\u0000\u00bc\u00bd\u0005\u001a\u0000\u0000"+
		"\u00bd\u00be\u0003\u0012\t\u0000\u00be\u00bf\u0005\u001a\u0000\u0000\u00bf"+
		"\u00c6\u0001\u0000\u0000\u0000\u00c0\u00c1\u0005\u001b\u0000\u0000\u00c1"+
		"\u00c2\u0003\u0012\t\u0000\u00c2\u00c3\u0005\u001b\u0000\u0000\u00c3\u00c6"+
		"\u0001\u0000\u0000\u0000\u00c4\u00c6\u0005\u001e\u0000\u0000\u00c5\u00bc"+
		"\u0001\u0000\u0000\u0000\u00c5\u00c0\u0001\u0000\u0000\u0000\u00c5\u00c4"+
		"\u0001\u0000\u0000\u0000\u00c6\u0015\u0001\u0000\u0000\u0000\u00c7\u00c9"+
		"\u0005\u000e\u0000\u0000\u00c8\u00ca\u0005\u0014\u0000\u0000\u00c9\u00c8"+
		"\u0001\u0000\u0000\u0000\u00ca\u00cb\u0001\u0000\u0000\u0000\u00cb\u00c9"+
		"\u0001\u0000\u0000\u0000\u00cb\u00cc\u0001\u0000\u0000\u0000\u00cc\u00ce"+
		"\u0001\u0000\u0000\u0000\u00cd\u00cf\u0003\u0014\n\u0000\u00ce\u00cd\u0001"+
		"\u0000\u0000\u0000\u00cf\u00d0\u0001\u0000\u0000\u0000\u00d0\u00ce\u0001"+
		"\u0000\u0000\u0000\u00d0\u00d1\u0001\u0000\u0000\u0000\u00d1\u00d2\u0001"+
		"\u0000\u0000\u0000\u00d2\u00d3\u0005\u0015\u0000\u0000\u00d3\u0017\u0001"+
		"\u0000\u0000\u0000\u00d4\u00d7\u0005\u001e\u0000\u0000\u00d5\u00d7\u0003"+
		"\u001a\r\u0000\u00d6\u00d4\u0001\u0000\u0000\u0000\u00d6\u00d5\u0001\u0000"+
		"\u0000\u0000\u00d7\u0019\u0001\u0000\u0000\u0000\u00d8\u00dd\u0005\u001f"+
		"\u0000\u0000\u00d9\u00da\u0005\u001f\u0000\u0000\u00da\u00db\u0005\u0011"+
		"\u0000\u0000\u00db\u00dd\u0005\u001f\u0000\u0000\u00dc\u00d8\u0001\u0000"+
		"\u0000\u0000\u00dc\u00d9\u0001\u0000\u0000\u0000\u00dd\u001b\u0001\u0000"+
		"\u0000\u0000\u00de\u00e2\u0003\u0016\u000b\u0000\u00df\u00e3\u0005\u0016"+
		"\u0000\u0000\u00e0\u00e1\u0005\u0018\u0000\u0000\u00e1\u00e3\u0005\u0016"+
		"\u0000\u0000\u00e2\u00df\u0001\u0000\u0000\u0000\u00e2\u00e0\u0001\u0000"+
		"\u0000\u0000\u00e3\u00e4\u0001\u0000\u0000\u0000\u00e4\u00e5\u0005\u0014"+
		"\u0000\u0000\u00e5\u00ea\u0003\u0018\f\u0000\u00e6\u00e7\u0005\u0012\u0000"+
		"\u0000\u00e7\u00e9\u0003\u0018\f\u0000\u00e8\u00e6\u0001\u0000\u0000\u0000"+
		"\u00e9\u00ec\u0001\u0000\u0000\u0000\u00ea\u00e8\u0001\u0000\u0000\u0000"+
		"\u00ea\u00eb\u0001\u0000\u0000\u0000\u00eb\u00ed\u0001\u0000\u0000\u0000"+
		"\u00ec\u00ea\u0001\u0000\u0000\u0000\u00ed\u00ee\u0005\u0015\u0000\u0000"+
		"\u00ee\u001d\u0001\u0000\u0000\u0000\u0016!)1=AOcex|\u009a\u00a4\u00af"+
		"\u00b6\u00ba\u00c5\u00cb\u00d0\u00d6\u00dc\u00e2\u00ea";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}