// Generated from grammar/MyCriteria.g4 by ANTLR 4.13.2
package com.exoline.mycriteria.generated.grammar;
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class MyCriteriaLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, SLASH=15, DOT=16, COMMA=17, 
		SEMICOLON=18, SQR_L=19, SQR_R=20, IN=21, BOOL=22, EXCL=23, INT=24, STR_LITERAL=25, 
		STR=26, NULL_T=27, S_Q=28, D_Q=29, BUCK=30, EQUALS=31, WS=32;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "SLASH", "DOT", "COMMA", 
			"SEMICOLON", "SQR_L", "SQR_R", "IN", "BOOL", "EXCL", "INT", "STR_LITERAL", 
			"STR", "NULL_T", "S_Q", "D_Q", "BUCK", "EQUALS", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'*'", "'+'", "'-'", "'('", "')'", "'>'", "'<'", "'<='", "'>='", 
			"'=='", "'!='", "'&&'", "'||'", "'object'", "'/'", "'.'", "','", "';'", 
			"'['", "']'", "'in'", null, "'!'", null, null, null, "'null'", "'''", 
			"'\"'", "'$'", "'='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "SLASH", "DOT", "COMMA", "SEMICOLON", "SQR_L", "SQR_R", 
			"IN", "BOOL", "EXCL", "INT", "STR_LITERAL", "STR", "NULL_T", "S_Q", "D_Q", 
			"BUCK", "EQUALS", "WS"
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


	public MyCriteriaLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "MyCriteria.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000 \u00ac\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002"+
		"\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002"+
		"\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002"+
		"\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002"+
		"\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002"+
		"\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002"+
		"\u001e\u0007\u001e\u0002\u001f\u0007\u001f\u0001\u0000\u0001\u0000\u0001"+
		"\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001"+
		"\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t"+
		"\u0001\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015"+
		"\u0003\u0015\u0081\b\u0015\u0001\u0016\u0001\u0016\u0001\u0017\u0004\u0017"+
		"\u0086\b\u0017\u000b\u0017\f\u0017\u0087\u0001\u0018\u0001\u0018\u0001"+
		"\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0003"+
		"\u0018\u0092\b\u0018\u0001\u0019\u0004\u0019\u0095\b\u0019\u000b\u0019"+
		"\f\u0019\u0096\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a"+
		"\u0001\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001\u001d\u0001\u001d"+
		"\u0001\u001e\u0001\u001e\u0001\u001f\u0004\u001f\u00a7\b\u001f\u000b\u001f"+
		"\f\u001f\u00a8\u0001\u001f\u0001\u001f\u0000\u0000 \u0001\u0001\u0003"+
		"\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011"+
		"\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010"+
		"!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/\u00181\u00193\u001a"+
		"5\u001b7\u001c9\u001d;\u001e=\u001f? \u0001\u0000\u0003\u0001\u000009"+
		"\u0003\u000009AZaz\u0003\u0000\t\n\r\r  \u00b0\u0000\u0001\u0001\u0000"+
		"\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000"+
		"\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000"+
		"\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000"+
		"\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000"+
		"\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000"+
		"\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000"+
		"\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000"+
		"\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000"+
		"#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'\u0001"+
		"\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001\u0000\u0000"+
		"\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000\u0000"+
		"1\u0001\u0000\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u00005\u0001"+
		"\u0000\u0000\u0000\u00007\u0001\u0000\u0000\u0000\u00009\u0001\u0000\u0000"+
		"\u0000\u0000;\u0001\u0000\u0000\u0000\u0000=\u0001\u0000\u0000\u0000\u0000"+
		"?\u0001\u0000\u0000\u0000\u0001A\u0001\u0000\u0000\u0000\u0003C\u0001"+
		"\u0000\u0000\u0000\u0005E\u0001\u0000\u0000\u0000\u0007G\u0001\u0000\u0000"+
		"\u0000\tI\u0001\u0000\u0000\u0000\u000bK\u0001\u0000\u0000\u0000\rM\u0001"+
		"\u0000\u0000\u0000\u000fO\u0001\u0000\u0000\u0000\u0011R\u0001\u0000\u0000"+
		"\u0000\u0013U\u0001\u0000\u0000\u0000\u0015X\u0001\u0000\u0000\u0000\u0017"+
		"[\u0001\u0000\u0000\u0000\u0019^\u0001\u0000\u0000\u0000\u001ba\u0001"+
		"\u0000\u0000\u0000\u001dh\u0001\u0000\u0000\u0000\u001fj\u0001\u0000\u0000"+
		"\u0000!l\u0001\u0000\u0000\u0000#n\u0001\u0000\u0000\u0000%p\u0001\u0000"+
		"\u0000\u0000\'r\u0001\u0000\u0000\u0000)t\u0001\u0000\u0000\u0000+\u0080"+
		"\u0001\u0000\u0000\u0000-\u0082\u0001\u0000\u0000\u0000/\u0085\u0001\u0000"+
		"\u0000\u00001\u0091\u0001\u0000\u0000\u00003\u0094\u0001\u0000\u0000\u0000"+
		"5\u0098\u0001\u0000\u0000\u00007\u009d\u0001\u0000\u0000\u00009\u009f"+
		"\u0001\u0000\u0000\u0000;\u00a1\u0001\u0000\u0000\u0000=\u00a3\u0001\u0000"+
		"\u0000\u0000?\u00a6\u0001\u0000\u0000\u0000AB\u0005*\u0000\u0000B\u0002"+
		"\u0001\u0000\u0000\u0000CD\u0005+\u0000\u0000D\u0004\u0001\u0000\u0000"+
		"\u0000EF\u0005-\u0000\u0000F\u0006\u0001\u0000\u0000\u0000GH\u0005(\u0000"+
		"\u0000H\b\u0001\u0000\u0000\u0000IJ\u0005)\u0000\u0000J\n\u0001\u0000"+
		"\u0000\u0000KL\u0005>\u0000\u0000L\f\u0001\u0000\u0000\u0000MN\u0005<"+
		"\u0000\u0000N\u000e\u0001\u0000\u0000\u0000OP\u0005<\u0000\u0000PQ\u0005"+
		"=\u0000\u0000Q\u0010\u0001\u0000\u0000\u0000RS\u0005>\u0000\u0000ST\u0005"+
		"=\u0000\u0000T\u0012\u0001\u0000\u0000\u0000UV\u0005=\u0000\u0000VW\u0005"+
		"=\u0000\u0000W\u0014\u0001\u0000\u0000\u0000XY\u0005!\u0000\u0000YZ\u0005"+
		"=\u0000\u0000Z\u0016\u0001\u0000\u0000\u0000[\\\u0005&\u0000\u0000\\]"+
		"\u0005&\u0000\u0000]\u0018\u0001\u0000\u0000\u0000^_\u0005|\u0000\u0000"+
		"_`\u0005|\u0000\u0000`\u001a\u0001\u0000\u0000\u0000ab\u0005o\u0000\u0000"+
		"bc\u0005b\u0000\u0000cd\u0005j\u0000\u0000de\u0005e\u0000\u0000ef\u0005"+
		"c\u0000\u0000fg\u0005t\u0000\u0000g\u001c\u0001\u0000\u0000\u0000hi\u0005"+
		"/\u0000\u0000i\u001e\u0001\u0000\u0000\u0000jk\u0005.\u0000\u0000k \u0001"+
		"\u0000\u0000\u0000lm\u0005,\u0000\u0000m\"\u0001\u0000\u0000\u0000no\u0005"+
		";\u0000\u0000o$\u0001\u0000\u0000\u0000pq\u0005[\u0000\u0000q&\u0001\u0000"+
		"\u0000\u0000rs\u0005]\u0000\u0000s(\u0001\u0000\u0000\u0000tu\u0005i\u0000"+
		"\u0000uv\u0005n\u0000\u0000v*\u0001\u0000\u0000\u0000wx\u0005t\u0000\u0000"+
		"xy\u0005r\u0000\u0000yz\u0005u\u0000\u0000z\u0081\u0005e\u0000\u0000{"+
		"|\u0005f\u0000\u0000|}\u0005a\u0000\u0000}~\u0005l\u0000\u0000~\u007f"+
		"\u0005s\u0000\u0000\u007f\u0081\u0005e\u0000\u0000\u0080w\u0001\u0000"+
		"\u0000\u0000\u0080{\u0001\u0000\u0000\u0000\u0081,\u0001\u0000\u0000\u0000"+
		"\u0082\u0083\u0005!\u0000\u0000\u0083.\u0001\u0000\u0000\u0000\u0084\u0086"+
		"\u0007\u0000\u0000\u0000\u0085\u0084\u0001\u0000\u0000\u0000\u0086\u0087"+
		"\u0001\u0000\u0000\u0000\u0087\u0085\u0001\u0000\u0000\u0000\u0087\u0088"+
		"\u0001\u0000\u0000\u0000\u00880\u0001\u0000\u0000\u0000\u0089\u008a\u0003"+
		"7\u001b\u0000\u008a\u008b\u00033\u0019\u0000\u008b\u008c\u00037\u001b"+
		"\u0000\u008c\u0092\u0001\u0000\u0000\u0000\u008d\u008e\u00039\u001c\u0000"+
		"\u008e\u008f\u00033\u0019\u0000\u008f\u0090\u00039\u001c\u0000\u0090\u0092"+
		"\u0001\u0000\u0000\u0000\u0091\u0089\u0001\u0000\u0000\u0000\u0091\u008d"+
		"\u0001\u0000\u0000\u0000\u00922\u0001\u0000\u0000\u0000\u0093\u0095\u0007"+
		"\u0001\u0000\u0000\u0094\u0093\u0001\u0000\u0000\u0000\u0095\u0096\u0001"+
		"\u0000\u0000\u0000\u0096\u0094\u0001\u0000\u0000\u0000\u0096\u0097\u0001"+
		"\u0000\u0000\u0000\u00974\u0001\u0000\u0000\u0000\u0098\u0099\u0005n\u0000"+
		"\u0000\u0099\u009a\u0005u\u0000\u0000\u009a\u009b\u0005l\u0000\u0000\u009b"+
		"\u009c\u0005l\u0000\u0000\u009c6\u0001\u0000\u0000\u0000\u009d\u009e\u0005"+
		"\'\u0000\u0000\u009e8\u0001\u0000\u0000\u0000\u009f\u00a0\u0005\"\u0000"+
		"\u0000\u00a0:\u0001\u0000\u0000\u0000\u00a1\u00a2\u0005$\u0000\u0000\u00a2"+
		"<\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005=\u0000\u0000\u00a4>\u0001"+
		"\u0000\u0000\u0000\u00a5\u00a7\u0007\u0002\u0000\u0000\u00a6\u00a5\u0001"+
		"\u0000\u0000\u0000\u00a7\u00a8\u0001\u0000\u0000\u0000\u00a8\u00a6\u0001"+
		"\u0000\u0000\u0000\u00a8\u00a9\u0001\u0000\u0000\u0000\u00a9\u00aa\u0001"+
		"\u0000\u0000\u0000\u00aa\u00ab\u0006\u001f\u0000\u0000\u00ab@\u0001\u0000"+
		"\u0000\u0000\u0006\u0000\u0080\u0087\u0091\u0096\u00a8\u0001\u0006\u0000"+
		"\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}