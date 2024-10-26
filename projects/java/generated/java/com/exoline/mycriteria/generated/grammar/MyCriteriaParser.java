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
		NULL_T=26, S_Q=27, D_Q=28, WS=29;
	public static final int
		RULE_app = 0, RULE_expr = 1, RULE_test_expr = 2, RULE_jsonPointerInner = 3, 
		RULE_jsonPointer = 4, RULE_objectAccessParser = 5, RULE_strOrNum = 6, 
		RULE_numb = 7, RULE_inArrayParser = 8;
	private static String[] makeRuleNames() {
		return new String[] {
			"app", "expr", "test_expr", "jsonPointerInner", "jsonPointer", "objectAccessParser", 
			"strOrNum", "numb", "inArrayParser"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
			"'=='", "'!='", "'&&'", "'||'", "'object'", "'/'", "'.'", "','", "'['", 
			"']'", "'in'", null, "'!'", null, null, null, "'null'", "'''", "'\"'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "SLASH", "DOT", "COMMA", "SQR_L", "SQR_R", "IN", "BOOL", 
			"EXCL", "INT", "STR_LITERAL", "STR", "NULL_T", "S_Q", "D_Q", "WS"
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
			setState(18);
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
			setState(47);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				_localctx = new InArrayContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(21);
				inArrayParser();
				}
				break;
			case 2:
				{
				_localctx = new FuncCallContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				{
				setState(22);
				match(STR);
				setState(23);
				match(T__3);
				setState(29);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(24);
						expr(0);
						setState(25);
						match(COMMA);
						}
						} 
					}
					setState(31);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
				}
				setState(33);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 132136976L) != 0)) {
					{
					setState(32);
					expr(0);
					}
				}

				setState(35);
				match(T__4);
				}
				}
				break;
			case 3:
				{
				_localctx = new NotExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(36);
				match(EXCL);
				setState(37);
				expr(7);
				}
				break;
			case 4:
				{
				_localctx = new ParenExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(38);
				match(T__3);
				setState(39);
				expr(0);
				setState(40);
				match(T__4);
				}
				break;
			case 5:
				{
				_localctx = new BoolContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(42);
				match(BOOL);
				}
				break;
			case 6:
				{
				_localctx = new NumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(43);
				numb();
				}
				break;
			case 7:
				{
				_localctx = new ObjectAccessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(44);
				objectAccessParser();
				}
				break;
			case 8:
				{
				_localctx = new StrLiteralContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(45);
				match(STR_LITERAL);
				}
				break;
			case 9:
				{
				_localctx = new NullContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(46);
				match(NULL_T);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(69);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(67);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
					case 1:
						{
						_localctx = new MulDivContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(49);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(50);
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
						setState(51);
						expr(15);
						}
						break;
					case 2:
						{
						_localctx = new AddSubContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(52);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(53);
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
						setState(54);
						expr(14);
						}
						break;
					case 3:
						{
						_localctx = new InfixFuncCallContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(55);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(56);
						match(STR);
						setState(57);
						expr(12);
						}
						break;
					case 4:
						{
						_localctx = new ComparisonContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(58);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(59);
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
						setState(60);
						expr(11);
						}
						break;
					case 5:
						{
						_localctx = new AndContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(61);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(62);
						match(T__11);
						setState(63);
						expr(10);
						}
						break;
					case 6:
						{
						_localctx = new OrContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(64);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(65);
						match(T__12);
						setState(66);
						expr(9);
						}
						break;
					}
					} 
				}
				setState(71);
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
			setState(122);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(72);
				inArrayParser();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(73);
				expr(0);
				setState(74);
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
				setState(75);
				expr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(77);
				expr(0);
				setState(78);
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
				setState(79);
				expr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				{
				setState(81);
				match(STR);
				setState(82);
				match(T__3);
				setState(88);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(83);
						expr(0);
						setState(84);
						match(COMMA);
						}
						} 
					}
					setState(90);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
				}
				setState(92);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 132136976L) != 0)) {
					{
					setState(91);
					expr(0);
					}
				}

				setState(94);
				match(T__4);
				}
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(95);
				expr(0);
				setState(96);
				match(STR);
				setState(97);
				expr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(99);
				expr(0);
				setState(100);
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
				setState(101);
				expr(0);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(103);
				expr(0);
				setState(104);
				match(T__11);
				setState(105);
				expr(0);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(107);
				expr(0);
				setState(108);
				match(T__12);
				setState(109);
				expr(0);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(111);
				match(EXCL);
				setState(112);
				expr(0);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(113);
				match(T__3);
				setState(114);
				expr(0);
				setState(115);
				match(T__4);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(117);
				match(BOOL);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(118);
				match(INT);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(119);
				objectAccessParser();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(120);
				match(STR_LITERAL);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(121);
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
		enterRule(_localctx, 6, RULE_jsonPointerInner);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SLASH) {
				{
				setState(124);
				match(SLASH);
				}
			}

			setState(127);
			match(STR);
			setState(132);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(128);
					match(SLASH);
					setState(129);
					match(STR);
					}
					} 
				}
				setState(134);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			}
			setState(136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SLASH) {
				{
				setState(135);
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
		enterRule(_localctx, 8, RULE_jsonPointer);
		try {
			setState(147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case S_Q:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(138);
				match(S_Q);
				setState(139);
				jsonPointerInner();
				setState(140);
				match(S_Q);
				}
				}
				break;
			case D_Q:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(142);
				match(D_Q);
				setState(143);
				jsonPointerInner();
				setState(144);
				match(D_Q);
				}
				}
				break;
			case STR_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(146);
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
		enterRule(_localctx, 10, RULE_objectAccessParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(T__13);
			setState(151); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(150);
				match(SQR_L);
				}
				}
				setState(153); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==SQR_L );
			setState(156); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(155);
				jsonPointer();
				}
				}
				setState(158); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 419430400L) != 0) );
			setState(160);
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
		enterRule(_localctx, 12, RULE_strOrNum);
		try {
			setState(164);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STR_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(162);
				match(STR_LITERAL);
				}
				break;
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(163);
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
		enterRule(_localctx, 14, RULE_numb);
		try {
			setState(170);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(166);
				match(INT);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(167);
				match(INT);
				setState(168);
				match(DOT);
				setState(169);
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
		enterRule(_localctx, 16, RULE_inArrayParser);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			objectAccessParser();
			setState(176);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IN:
				{
				setState(173);
				match(IN);
				}
				break;
			case EXCL:
				{
				setState(174);
				match(EXCL);
				setState(175);
				match(IN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(178);
			match(SQR_L);
			setState(179);
			strOrNum();
			setState(184);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(180);
				match(COMMA);
				setState(181);
				strOrNum();
				}
				}
				setState(186);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(187);
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
		"\u0004\u0001\u001d\u00be\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0005\u0001\u001c"+
		"\b\u0001\n\u0001\f\u0001\u001f\t\u0001\u0001\u0001\u0003\u0001\"\b\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0003\u00010\b\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0005\u0001D\b\u0001\n\u0001\f\u0001G\t\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0005\u0002W\b\u0002\n\u0002\f\u0002Z\t\u0002"+
		"\u0001\u0002\u0003\u0002]\b\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0003\u0002{\b\u0002\u0001\u0003\u0003\u0003~\b\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0005\u0003\u0083\b\u0003\n\u0003\f\u0003"+
		"\u0086\t\u0003\u0001\u0003\u0003\u0003\u0089\b\u0003\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0003\u0004\u0094\b\u0004\u0001\u0005\u0001\u0005\u0004"+
		"\u0005\u0098\b\u0005\u000b\u0005\f\u0005\u0099\u0001\u0005\u0004\u0005"+
		"\u009d\b\u0005\u000b\u0005\f\u0005\u009e\u0001\u0005\u0001\u0005\u0001"+
		"\u0006\u0001\u0006\u0003\u0006\u00a5\b\u0006\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0003\u0007\u00ab\b\u0007\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0003\b\u00b1\b\b\u0001\b\u0001\b\u0001\b\u0001\b\u0005\b\u00b7\b\b"+
		"\n\b\f\b\u00ba\t\b\u0001\b\u0001\b\u0001\b\u0000\u0001\u0002\t\u0000\u0002"+
		"\u0004\u0006\b\n\f\u000e\u0010\u0000\u0003\u0002\u0000\u0001\u0001\u000f"+
		"\u000f\u0001\u0000\u0002\u0003\u0001\u0000\u0006\u000b\u00df\u0000\u0012"+
		"\u0001\u0000\u0000\u0000\u0002/\u0001\u0000\u0000\u0000\u0004z\u0001\u0000"+
		"\u0000\u0000\u0006}\u0001\u0000\u0000\u0000\b\u0093\u0001\u0000\u0000"+
		"\u0000\n\u0095\u0001\u0000\u0000\u0000\f\u00a4\u0001\u0000\u0000\u0000"+
		"\u000e\u00aa\u0001\u0000\u0000\u0000\u0010\u00ac\u0001\u0000\u0000\u0000"+
		"\u0012\u0013\u0003\u0002\u0001\u0000\u0013\u0001\u0001\u0000\u0000\u0000"+
		"\u0014\u0015\u0006\u0001\uffff\uffff\u0000\u00150\u0003\u0010\b\u0000"+
		"\u0016\u0017\u0005\u0019\u0000\u0000\u0017\u001d\u0005\u0004\u0000\u0000"+
		"\u0018\u0019\u0003\u0002\u0001\u0000\u0019\u001a\u0005\u0011\u0000\u0000"+
		"\u001a\u001c\u0001\u0000\u0000\u0000\u001b\u0018\u0001\u0000\u0000\u0000"+
		"\u001c\u001f\u0001\u0000\u0000\u0000\u001d\u001b\u0001\u0000\u0000\u0000"+
		"\u001d\u001e\u0001\u0000\u0000\u0000\u001e!\u0001\u0000\u0000\u0000\u001f"+
		"\u001d\u0001\u0000\u0000\u0000 \"\u0003\u0002\u0001\u0000! \u0001\u0000"+
		"\u0000\u0000!\"\u0001\u0000\u0000\u0000\"#\u0001\u0000\u0000\u0000#0\u0005"+
		"\u0005\u0000\u0000$%\u0005\u0016\u0000\u0000%0\u0003\u0002\u0001\u0007"+
		"&\'\u0005\u0004\u0000\u0000\'(\u0003\u0002\u0001\u0000()\u0005\u0005\u0000"+
		"\u0000)0\u0001\u0000\u0000\u0000*0\u0005\u0015\u0000\u0000+0\u0003\u000e"+
		"\u0007\u0000,0\u0003\n\u0005\u0000-0\u0005\u0018\u0000\u0000.0\u0005\u001a"+
		"\u0000\u0000/\u0014\u0001\u0000\u0000\u0000/\u0016\u0001\u0000\u0000\u0000"+
		"/$\u0001\u0000\u0000\u0000/&\u0001\u0000\u0000\u0000/*\u0001\u0000\u0000"+
		"\u0000/+\u0001\u0000\u0000\u0000/,\u0001\u0000\u0000\u0000/-\u0001\u0000"+
		"\u0000\u0000/.\u0001\u0000\u0000\u00000E\u0001\u0000\u0000\u000012\n\u000e"+
		"\u0000\u000023\u0007\u0000\u0000\u00003D\u0003\u0002\u0001\u000f45\n\r"+
		"\u0000\u000056\u0007\u0001\u0000\u00006D\u0003\u0002\u0001\u000e78\n\u000b"+
		"\u0000\u000089\u0005\u0019\u0000\u00009D\u0003\u0002\u0001\f:;\n\n\u0000"+
		"\u0000;<\u0007\u0002\u0000\u0000<D\u0003\u0002\u0001\u000b=>\n\t\u0000"+
		"\u0000>?\u0005\f\u0000\u0000?D\u0003\u0002\u0001\n@A\n\b\u0000\u0000A"+
		"B\u0005\r\u0000\u0000BD\u0003\u0002\u0001\tC1\u0001\u0000\u0000\u0000"+
		"C4\u0001\u0000\u0000\u0000C7\u0001\u0000\u0000\u0000C:\u0001\u0000\u0000"+
		"\u0000C=\u0001\u0000\u0000\u0000C@\u0001\u0000\u0000\u0000DG\u0001\u0000"+
		"\u0000\u0000EC\u0001\u0000\u0000\u0000EF\u0001\u0000\u0000\u0000F\u0003"+
		"\u0001\u0000\u0000\u0000GE\u0001\u0000\u0000\u0000H{\u0003\u0010\b\u0000"+
		"IJ\u0003\u0002\u0001\u0000JK\u0007\u0000\u0000\u0000KL\u0003\u0002\u0001"+
		"\u0000L{\u0001\u0000\u0000\u0000MN\u0003\u0002\u0001\u0000NO\u0007\u0001"+
		"\u0000\u0000OP\u0003\u0002\u0001\u0000P{\u0001\u0000\u0000\u0000QR\u0005"+
		"\u0019\u0000\u0000RX\u0005\u0004\u0000\u0000ST\u0003\u0002\u0001\u0000"+
		"TU\u0005\u0011\u0000\u0000UW\u0001\u0000\u0000\u0000VS\u0001\u0000\u0000"+
		"\u0000WZ\u0001\u0000\u0000\u0000XV\u0001\u0000\u0000\u0000XY\u0001\u0000"+
		"\u0000\u0000Y\\\u0001\u0000\u0000\u0000ZX\u0001\u0000\u0000\u0000[]\u0003"+
		"\u0002\u0001\u0000\\[\u0001\u0000\u0000\u0000\\]\u0001\u0000\u0000\u0000"+
		"]^\u0001\u0000\u0000\u0000^{\u0005\u0005\u0000\u0000_`\u0003\u0002\u0001"+
		"\u0000`a\u0005\u0019\u0000\u0000ab\u0003\u0002\u0001\u0000b{\u0001\u0000"+
		"\u0000\u0000cd\u0003\u0002\u0001\u0000de\u0007\u0002\u0000\u0000ef\u0003"+
		"\u0002\u0001\u0000f{\u0001\u0000\u0000\u0000gh\u0003\u0002\u0001\u0000"+
		"hi\u0005\f\u0000\u0000ij\u0003\u0002\u0001\u0000j{\u0001\u0000\u0000\u0000"+
		"kl\u0003\u0002\u0001\u0000lm\u0005\r\u0000\u0000mn\u0003\u0002\u0001\u0000"+
		"n{\u0001\u0000\u0000\u0000op\u0005\u0016\u0000\u0000p{\u0003\u0002\u0001"+
		"\u0000qr\u0005\u0004\u0000\u0000rs\u0003\u0002\u0001\u0000st\u0005\u0005"+
		"\u0000\u0000t{\u0001\u0000\u0000\u0000u{\u0005\u0015\u0000\u0000v{\u0005"+
		"\u0017\u0000\u0000w{\u0003\n\u0005\u0000x{\u0005\u0018\u0000\u0000y{\u0005"+
		"\u001a\u0000\u0000zH\u0001\u0000\u0000\u0000zI\u0001\u0000\u0000\u0000"+
		"zM\u0001\u0000\u0000\u0000zQ\u0001\u0000\u0000\u0000z_\u0001\u0000\u0000"+
		"\u0000zc\u0001\u0000\u0000\u0000zg\u0001\u0000\u0000\u0000zk\u0001\u0000"+
		"\u0000\u0000zo\u0001\u0000\u0000\u0000zq\u0001\u0000\u0000\u0000zu\u0001"+
		"\u0000\u0000\u0000zv\u0001\u0000\u0000\u0000zw\u0001\u0000\u0000\u0000"+
		"zx\u0001\u0000\u0000\u0000zy\u0001\u0000\u0000\u0000{\u0005\u0001\u0000"+
		"\u0000\u0000|~\u0005\u000f\u0000\u0000}|\u0001\u0000\u0000\u0000}~\u0001"+
		"\u0000\u0000\u0000~\u007f\u0001\u0000\u0000\u0000\u007f\u0084\u0005\u0019"+
		"\u0000\u0000\u0080\u0081\u0005\u000f\u0000\u0000\u0081\u0083\u0005\u0019"+
		"\u0000\u0000\u0082\u0080\u0001\u0000\u0000\u0000\u0083\u0086\u0001\u0000"+
		"\u0000\u0000\u0084\u0082\u0001\u0000\u0000\u0000\u0084\u0085\u0001\u0000"+
		"\u0000\u0000\u0085\u0088\u0001\u0000\u0000\u0000\u0086\u0084\u0001\u0000"+
		"\u0000\u0000\u0087\u0089\u0005\u000f\u0000\u0000\u0088\u0087\u0001\u0000"+
		"\u0000\u0000\u0088\u0089\u0001\u0000\u0000\u0000\u0089\u0007\u0001\u0000"+
		"\u0000\u0000\u008a\u008b\u0005\u001b\u0000\u0000\u008b\u008c\u0003\u0006"+
		"\u0003\u0000\u008c\u008d\u0005\u001b\u0000\u0000\u008d\u0094\u0001\u0000"+
		"\u0000\u0000\u008e\u008f\u0005\u001c\u0000\u0000\u008f\u0090\u0003\u0006"+
		"\u0003\u0000\u0090\u0091\u0005\u001c\u0000\u0000\u0091\u0094\u0001\u0000"+
		"\u0000\u0000\u0092\u0094\u0005\u0018\u0000\u0000\u0093\u008a\u0001\u0000"+
		"\u0000\u0000\u0093\u008e\u0001\u0000\u0000\u0000\u0093\u0092\u0001\u0000"+
		"\u0000\u0000\u0094\t\u0001\u0000\u0000\u0000\u0095\u0097\u0005\u000e\u0000"+
		"\u0000\u0096\u0098\u0005\u0012\u0000\u0000\u0097\u0096\u0001\u0000\u0000"+
		"\u0000\u0098\u0099\u0001\u0000\u0000\u0000\u0099\u0097\u0001\u0000\u0000"+
		"\u0000\u0099\u009a\u0001\u0000\u0000\u0000\u009a\u009c\u0001\u0000\u0000"+
		"\u0000\u009b\u009d\u0003\b\u0004\u0000\u009c\u009b\u0001\u0000\u0000\u0000"+
		"\u009d\u009e\u0001\u0000\u0000\u0000\u009e\u009c\u0001\u0000\u0000\u0000"+
		"\u009e\u009f\u0001\u0000\u0000\u0000\u009f\u00a0\u0001\u0000\u0000\u0000"+
		"\u00a0\u00a1\u0005\u0013\u0000\u0000\u00a1\u000b\u0001\u0000\u0000\u0000"+
		"\u00a2\u00a5\u0005\u0018\u0000\u0000\u00a3\u00a5\u0003\u000e\u0007\u0000"+
		"\u00a4\u00a2\u0001\u0000\u0000\u0000\u00a4\u00a3\u0001\u0000\u0000\u0000"+
		"\u00a5\r\u0001\u0000\u0000\u0000\u00a6\u00ab\u0005\u0017\u0000\u0000\u00a7"+
		"\u00a8\u0005\u0017\u0000\u0000\u00a8\u00a9\u0005\u0010\u0000\u0000\u00a9"+
		"\u00ab\u0005\u0017\u0000\u0000\u00aa\u00a6\u0001\u0000\u0000\u0000\u00aa"+
		"\u00a7\u0001\u0000\u0000\u0000\u00ab\u000f\u0001\u0000\u0000\u0000\u00ac"+
		"\u00b0\u0003\n\u0005\u0000\u00ad\u00b1\u0005\u0014\u0000\u0000\u00ae\u00af"+
		"\u0005\u0016\u0000\u0000\u00af\u00b1\u0005\u0014\u0000\u0000\u00b0\u00ad"+
		"\u0001\u0000\u0000\u0000\u00b0\u00ae\u0001\u0000\u0000\u0000\u00b1\u00b2"+
		"\u0001\u0000\u0000\u0000\u00b2\u00b3\u0005\u0012\u0000\u0000\u00b3\u00b8"+
		"\u0003\f\u0006\u0000\u00b4\u00b5\u0005\u0011\u0000\u0000\u00b5\u00b7\u0003"+
		"\f\u0006\u0000\u00b6\u00b4\u0001\u0000\u0000\u0000\u00b7\u00ba\u0001\u0000"+
		"\u0000\u0000\u00b8\u00b6\u0001\u0000\u0000\u0000\u00b8\u00b9\u0001\u0000"+
		"\u0000\u0000\u00b9\u00bb\u0001\u0000\u0000\u0000\u00ba\u00b8\u0001\u0000"+
		"\u0000\u0000\u00bb\u00bc\u0005\u0013\u0000\u0000\u00bc\u0011\u0001\u0000"+
		"\u0000\u0000\u0012\u001d!/CEX\\z}\u0084\u0088\u0093\u0099\u009e\u00a4"+
		"\u00aa\u00b0\u00b8";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}