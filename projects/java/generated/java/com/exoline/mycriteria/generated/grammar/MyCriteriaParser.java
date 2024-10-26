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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, SLASH=15, DOT=16, COMMA=17, 
		SQR_L=18, SQR_R=19, IN=20, BOOL=21, EXCL=22, INT=23, STR_LITERAL=24, STR=25, 
		NULL_T=26, WS=27;
	public static final int
		RULE_app = 0, RULE_expr = 1, RULE_test_expr = 2, RULE_objectAccessParser = 3, 
		RULE_strOrNum = 4, RULE_numb = 5, RULE_inArrayParser = 6;
	private static String[] makeRuleNames() {
		return new String[] {
			"app", "expr", "test_expr", "objectAccessParser", "strOrNum", "numb", 
			"inArrayParser"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
			"'=='", "'!='", "'&&'", "'||'", "'object'", "'/'", "'.'", "','", "'['", 
			"']'", "'in'", null, "'!'", null, null, null, "'null'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "SLASH", "DOT", "COMMA", "SQR_L", "SQR_R", "IN", "BOOL", 
			"EXCL", "INT", "STR_LITERAL", "STR", "NULL_T", "WS"
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
			enterOuterAlt(_localctx, 1);
			{
			setState(14);
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
		int _startState = 2;
		enterRecursionRule(_localctx, 2, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(43);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				_localctx = new InArrayContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(17);
				inArrayParser();
				}
				break;
			case 2:
				{
				_localctx = new FuncCallContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				{
				setState(18);
				match(STR);
				setState(19);
				match(T__3);
				setState(25);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(20);
						expr(0);
						setState(21);
						match(COMMA);
						}
						} 
					}
					setState(27);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
				}
				setState(29);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 132136976L) != 0)) {
					{
					setState(28);
					expr(0);
					}
				}

				setState(31);
				match(T__4);
				}
				}
				break;
			case 3:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(32);
				match(EXCL);
				setState(33);
				expr(7);
				}
				break;
			case 4:
				{
				_localctx = new ParenExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(34);
				match(T__3);
				setState(35);
				expr(0);
				setState(36);
				match(T__4);
				}
				break;
			case 5:
				{
				_localctx = new BoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(38);
				match(BOOL);
				}
				break;
			case 6:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(39);
				numb();
				}
				break;
			case 7:
				{
				_localctx = new ObjectAccessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(40);
				objectAccessParser();
				}
				break;
			case 8:
				{
				_localctx = new StrLiteralContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(41);
				match(STR_LITERAL);
				}
				break;
			case 9:
				{
				_localctx = new NullContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(42);
				match(NULL_T);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(65);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(63);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
					case 1:
						{
						_localctx = new MulDivContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(45);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(46);
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
						setState(47);
						expr(15);
						}
						break;
					case 2:
						{
						_localctx = new AddSubContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(48);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(49);
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
						setState(50);
						expr(14);
						}
						break;
					case 3:
						{
						_localctx = new InfixFuncCallContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(51);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(52);
						match(STR);
						setState(53);
						expr(12);
						}
						break;
					case 4:
						{
						_localctx = new ComparisonContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(54);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(55);
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
						setState(56);
						expr(11);
						}
						break;
					case 5:
						{
						_localctx = new AndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(57);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(58);
						match(T__11);
						setState(59);
						expr(10);
						}
						break;
					case 6:
						{
						_localctx = new OrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(60);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(61);
						match(T__12);
						setState(62);
						expr(9);
						}
						break;
					}
					} 
				}
				setState(67);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
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
		enterRule(_localctx, 4, RULE_test_expr);
		int _la;
		try {
			int _alt;
			setState(118);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(68);
				inArrayParser();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(69);
				expr(0);
				setState(70);
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
				setState(71);
				expr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(73);
				expr(0);
				setState(74);
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
				setState(75);
				expr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				{
				setState(77);
				match(STR);
				setState(78);
				match(T__3);
				setState(84);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(79);
						expr(0);
						setState(80);
						match(COMMA);
						}
						} 
					}
					setState(86);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
				}
				setState(88);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 132136976L) != 0)) {
					{
					setState(87);
					expr(0);
					}
				}

				setState(90);
				match(T__4);
				}
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(91);
				expr(0);
				setState(92);
				match(STR);
				setState(93);
				expr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(95);
				expr(0);
				setState(96);
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
				setState(97);
				expr(0);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(99);
				expr(0);
				setState(100);
				match(T__11);
				setState(101);
				expr(0);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(103);
				expr(0);
				setState(104);
				match(T__12);
				setState(105);
				expr(0);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(107);
				match(EXCL);
				setState(108);
				expr(0);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(109);
				match(T__3);
				setState(110);
				expr(0);
				setState(111);
				match(T__4);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(113);
				match(BOOL);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(114);
				match(INT);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(115);
				objectAccessParser();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(116);
				match(STR_LITERAL);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(117);
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
	public static class ObjectAccessParserContext extends ParserRuleContext {
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
		enterRule(_localctx, 6, RULE_objectAccessParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			match(T__13);
			setState(122); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(121);
				match(SQR_L);
				}
				}
				setState(124); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==SQR_L );
			setState(127); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(126);
				match(STR_LITERAL);
				}
				}
				setState(129); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==STR_LITERAL );
			setState(131);
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
		enterRule(_localctx, 8, RULE_strOrNum);
		try {
			setState(135);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STR_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(133);
				match(STR_LITERAL);
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(134);
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
		enterRule(_localctx, 10, RULE_numb);
		try {
			setState(141);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(137);
				match(INT);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(138);
				match(INT);
				setState(139);
				match(DOT);
				setState(140);
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
		enterRule(_localctx, 12, RULE_inArrayParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
			objectAccessParser();
			setState(147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IN:
				{
				setState(144);
				match(IN);
				}
				break;
			case EXCL:
				{
				setState(145);
				match(EXCL);
				setState(146);
				match(IN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(149);
			match(SQR_L);
			setState(150);
			strOrNum();
			setState(155);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(151);
				match(COMMA);
				setState(152);
				strOrNum();
				}
				}
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(158);
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
		case 1:
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
		"\u0004\u0001\u001b\u00a1\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0005\u0001\u0018\b\u0001\n\u0001\f\u0001\u001b\t\u0001\u0001"+
		"\u0001\u0003\u0001\u001e\b\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0003\u0001,\b\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001@\b"+
		"\u0001\n\u0001\f\u0001C\t\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0005\u0002S\b"+
		"\u0002\n\u0002\f\u0002V\t\u0002\u0001\u0002\u0003\u0002Y\b\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002w\b\u0002\u0001"+
		"\u0003\u0001\u0003\u0004\u0003{\b\u0003\u000b\u0003\f\u0003|\u0001\u0003"+
		"\u0004\u0003\u0080\b\u0003\u000b\u0003\f\u0003\u0081\u0001\u0003\u0001"+
		"\u0003\u0001\u0004\u0001\u0004\u0003\u0004\u0088\b\u0004\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0003\u0005\u008e\b\u0005\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0003\u0006\u0094\b\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0005\u0006\u009a\b\u0006\n\u0006\f\u0006"+
		"\u009d\t\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0000\u0001\u0002\u0007"+
		"\u0000\u0002\u0004\u0006\b\n\f\u0000\u0003\u0002\u0000\u0001\u0001\u000f"+
		"\u000f\u0001\u0000\u0002\u0003\u0001\u0000\u0006\u000b\u00bf\u0000\u000e"+
		"\u0001\u0000\u0000\u0000\u0002+\u0001\u0000\u0000\u0000\u0004v\u0001\u0000"+
		"\u0000\u0000\u0006x\u0001\u0000\u0000\u0000\b\u0087\u0001\u0000\u0000"+
		"\u0000\n\u008d\u0001\u0000\u0000\u0000\f\u008f\u0001\u0000\u0000\u0000"+
		"\u000e\u000f\u0003\u0002\u0001\u0000\u000f\u0001\u0001\u0000\u0000\u0000"+
		"\u0010\u0011\u0006\u0001\uffff\uffff\u0000\u0011,\u0003\f\u0006\u0000"+
		"\u0012\u0013\u0005\u0019\u0000\u0000\u0013\u0019\u0005\u0004\u0000\u0000"+
		"\u0014\u0015\u0003\u0002\u0001\u0000\u0015\u0016\u0005\u0011\u0000\u0000"+
		"\u0016\u0018\u0001\u0000\u0000\u0000\u0017\u0014\u0001\u0000\u0000\u0000"+
		"\u0018\u001b\u0001\u0000\u0000\u0000\u0019\u0017\u0001\u0000\u0000\u0000"+
		"\u0019\u001a\u0001\u0000\u0000\u0000\u001a\u001d\u0001\u0000\u0000\u0000"+
		"\u001b\u0019\u0001\u0000\u0000\u0000\u001c\u001e\u0003\u0002\u0001\u0000"+
		"\u001d\u001c\u0001\u0000\u0000\u0000\u001d\u001e\u0001\u0000\u0000\u0000"+
		"\u001e\u001f\u0001\u0000\u0000\u0000\u001f,\u0005\u0005\u0000\u0000 !"+
		"\u0005\u0016\u0000\u0000!,\u0003\u0002\u0001\u0007\"#\u0005\u0004\u0000"+
		"\u0000#$\u0003\u0002\u0001\u0000$%\u0005\u0005\u0000\u0000%,\u0001\u0000"+
		"\u0000\u0000&,\u0005\u0015\u0000\u0000\',\u0003\n\u0005\u0000(,\u0003"+
		"\u0006\u0003\u0000),\u0005\u0018\u0000\u0000*,\u0005\u001a\u0000\u0000"+
		"+\u0010\u0001\u0000\u0000\u0000+\u0012\u0001\u0000\u0000\u0000+ \u0001"+
		"\u0000\u0000\u0000+\"\u0001\u0000\u0000\u0000+&\u0001\u0000\u0000\u0000"+
		"+\'\u0001\u0000\u0000\u0000+(\u0001\u0000\u0000\u0000+)\u0001\u0000\u0000"+
		"\u0000+*\u0001\u0000\u0000\u0000,A\u0001\u0000\u0000\u0000-.\n\u000e\u0000"+
		"\u0000./\u0007\u0000\u0000\u0000/@\u0003\u0002\u0001\u000f01\n\r\u0000"+
		"\u000012\u0007\u0001\u0000\u00002@\u0003\u0002\u0001\u000e34\n\u000b\u0000"+
		"\u000045\u0005\u0019\u0000\u00005@\u0003\u0002\u0001\f67\n\n\u0000\u0000"+
		"78\u0007\u0002\u0000\u00008@\u0003\u0002\u0001\u000b9:\n\t\u0000\u0000"+
		":;\u0005\f\u0000\u0000;@\u0003\u0002\u0001\n<=\n\b\u0000\u0000=>\u0005"+
		"\r\u0000\u0000>@\u0003\u0002\u0001\t?-\u0001\u0000\u0000\u0000?0\u0001"+
		"\u0000\u0000\u0000?3\u0001\u0000\u0000\u0000?6\u0001\u0000\u0000\u0000"+
		"?9\u0001\u0000\u0000\u0000?<\u0001\u0000\u0000\u0000@C\u0001\u0000\u0000"+
		"\u0000A?\u0001\u0000\u0000\u0000AB\u0001\u0000\u0000\u0000B\u0003\u0001"+
		"\u0000\u0000\u0000CA\u0001\u0000\u0000\u0000Dw\u0003\f\u0006\u0000EF\u0003"+
		"\u0002\u0001\u0000FG\u0007\u0000\u0000\u0000GH\u0003\u0002\u0001\u0000"+
		"Hw\u0001\u0000\u0000\u0000IJ\u0003\u0002\u0001\u0000JK\u0007\u0001\u0000"+
		"\u0000KL\u0003\u0002\u0001\u0000Lw\u0001\u0000\u0000\u0000MN\u0005\u0019"+
		"\u0000\u0000NT\u0005\u0004\u0000\u0000OP\u0003\u0002\u0001\u0000PQ\u0005"+
		"\u0011\u0000\u0000QS\u0001\u0000\u0000\u0000RO\u0001\u0000\u0000\u0000"+
		"SV\u0001\u0000\u0000\u0000TR\u0001\u0000\u0000\u0000TU\u0001\u0000\u0000"+
		"\u0000UX\u0001\u0000\u0000\u0000VT\u0001\u0000\u0000\u0000WY\u0003\u0002"+
		"\u0001\u0000XW\u0001\u0000\u0000\u0000XY\u0001\u0000\u0000\u0000YZ\u0001"+
		"\u0000\u0000\u0000Zw\u0005\u0005\u0000\u0000[\\\u0003\u0002\u0001\u0000"+
		"\\]\u0005\u0019\u0000\u0000]^\u0003\u0002\u0001\u0000^w\u0001\u0000\u0000"+
		"\u0000_`\u0003\u0002\u0001\u0000`a\u0007\u0002\u0000\u0000ab\u0003\u0002"+
		"\u0001\u0000bw\u0001\u0000\u0000\u0000cd\u0003\u0002\u0001\u0000de\u0005"+
		"\f\u0000\u0000ef\u0003\u0002\u0001\u0000fw\u0001\u0000\u0000\u0000gh\u0003"+
		"\u0002\u0001\u0000hi\u0005\r\u0000\u0000ij\u0003\u0002\u0001\u0000jw\u0001"+
		"\u0000\u0000\u0000kl\u0005\u0016\u0000\u0000lw\u0003\u0002\u0001\u0000"+
		"mn\u0005\u0004\u0000\u0000no\u0003\u0002\u0001\u0000op\u0005\u0005\u0000"+
		"\u0000pw\u0001\u0000\u0000\u0000qw\u0005\u0015\u0000\u0000rw\u0005\u0017"+
		"\u0000\u0000sw\u0003\u0006\u0003\u0000tw\u0005\u0018\u0000\u0000uw\u0005"+
		"\u001a\u0000\u0000vD\u0001\u0000\u0000\u0000vE\u0001\u0000\u0000\u0000"+
		"vI\u0001\u0000\u0000\u0000vM\u0001\u0000\u0000\u0000v[\u0001\u0000\u0000"+
		"\u0000v_\u0001\u0000\u0000\u0000vc\u0001\u0000\u0000\u0000vg\u0001\u0000"+
		"\u0000\u0000vk\u0001\u0000\u0000\u0000vm\u0001\u0000\u0000\u0000vq\u0001"+
		"\u0000\u0000\u0000vr\u0001\u0000\u0000\u0000vs\u0001\u0000\u0000\u0000"+
		"vt\u0001\u0000\u0000\u0000vu\u0001\u0000\u0000\u0000w\u0005\u0001\u0000"+
		"\u0000\u0000xz\u0005\u000e\u0000\u0000y{\u0005\u0012\u0000\u0000zy\u0001"+
		"\u0000\u0000\u0000{|\u0001\u0000\u0000\u0000|z\u0001\u0000\u0000\u0000"+
		"|}\u0001\u0000\u0000\u0000}\u007f\u0001\u0000\u0000\u0000~\u0080\u0005"+
		"\u0018\u0000\u0000\u007f~\u0001\u0000\u0000\u0000\u0080\u0081\u0001\u0000"+
		"\u0000\u0000\u0081\u007f\u0001\u0000\u0000\u0000\u0081\u0082\u0001\u0000"+
		"\u0000\u0000\u0082\u0083\u0001\u0000\u0000\u0000\u0083\u0084\u0005\u0013"+
		"\u0000\u0000\u0084\u0007\u0001\u0000\u0000\u0000\u0085\u0088\u0005\u0018"+
		"\u0000\u0000\u0086\u0088\u0003\n\u0005\u0000\u0087\u0085\u0001\u0000\u0000"+
		"\u0000\u0087\u0086\u0001\u0000\u0000\u0000\u0088\t\u0001\u0000\u0000\u0000"+
		"\u0089\u008e\u0005\u0017\u0000\u0000\u008a\u008b\u0005\u0017\u0000\u0000"+
		"\u008b\u008c\u0005\u0010\u0000\u0000\u008c\u008e\u0005\u0017\u0000\u0000"+
		"\u008d\u0089\u0001\u0000\u0000\u0000\u008d\u008a\u0001\u0000\u0000\u0000"+
		"\u008e\u000b\u0001\u0000\u0000\u0000\u008f\u0093\u0003\u0006\u0003\u0000"+
		"\u0090\u0094\u0005\u0014\u0000\u0000\u0091\u0092\u0005\u0016\u0000\u0000"+
		"\u0092\u0094\u0005\u0014\u0000\u0000\u0093\u0090\u0001\u0000\u0000\u0000"+
		"\u0093\u0091\u0001\u0000\u0000\u0000\u0094\u0095\u0001\u0000\u0000\u0000"+
		"\u0095\u0096\u0005\u0012\u0000\u0000\u0096\u009b\u0003\b\u0004\u0000\u0097"+
		"\u0098\u0005\u0011\u0000\u0000\u0098\u009a\u0003\b\u0004\u0000\u0099\u0097"+
		"\u0001\u0000\u0000\u0000\u009a\u009d\u0001\u0000\u0000\u0000\u009b\u0099"+
		"\u0001\u0000\u0000\u0000\u009b\u009c\u0001\u0000\u0000\u0000\u009c\u009e"+
		"\u0001\u0000\u0000\u0000\u009d\u009b\u0001\u0000\u0000\u0000\u009e\u009f"+
		"\u0005\u0013\u0000\u0000\u009f\r\u0001\u0000\u0000\u0000\u000e\u0019\u001d"+
		"+?ATXv|\u0081\u0087\u008d\u0093\u009b";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}