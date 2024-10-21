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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, BOOL=19, INT=20, STR_LITERAL=21, STR=22, NULL_T=23, WS=24;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
			"T__17", "BOOL", "INT", "STR_LITERAL", "STR", "NULL_T", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'*'", "'/'", "'+'", "'-'", "'('", "','", "')'", "'>'", "'<'", 
			"'<='", "'>='", "'=='", "'&&'", "'||'", "'!'", "'object'", "'['", "']'", 
			null, null, null, null, "'null'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, "BOOL", "INT", "STR_LITERAL", 
			"STR", "NULL_T", "WS"
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
		"\u0004\u0000\u0018\u008a\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0003\u0012i\b\u0012\u0001\u0013\u0004"+
		"\u0013l\b\u0013\u000b\u0013\f\u0013m\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014"+
		"x\b\u0014\u0001\u0015\u0004\u0015{\b\u0015\u000b\u0015\f\u0015|\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0017\u0004"+
		"\u0017\u0085\b\u0017\u000b\u0017\f\u0017\u0086\u0001\u0017\u0001\u0017"+
		"\u0000\u0000\u0018\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005"+
		"\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019"+
		"\r\u001b\u000e\u001d\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015"+
		"+\u0016-\u0017/\u0018\u0001\u0000\u0003\u0001\u000009\u0002\u0000AZaz"+
		"\u0003\u0000\t\n\r\r  \u008e\u0000\u0001\u0001\u0000\u0000\u0000\u0000"+
		"\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000"+
		"\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b"+
		"\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001"+
		"\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001"+
		"\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001"+
		"\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000\u001b\u0001"+
		"\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000\u0000\u001f\u0001"+
		"\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001\u0000\u0000"+
		"\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000\u0000\u0000"+
		"\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001\u0000\u0000\u0000\u0000-"+
		"\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000\u00011\u0001\u0000"+
		"\u0000\u0000\u00033\u0001\u0000\u0000\u0000\u00055\u0001\u0000\u0000\u0000"+
		"\u00077\u0001\u0000\u0000\u0000\t9\u0001\u0000\u0000\u0000\u000b;\u0001"+
		"\u0000\u0000\u0000\r=\u0001\u0000\u0000\u0000\u000f?\u0001\u0000\u0000"+
		"\u0000\u0011A\u0001\u0000\u0000\u0000\u0013C\u0001\u0000\u0000\u0000\u0015"+
		"F\u0001\u0000\u0000\u0000\u0017I\u0001\u0000\u0000\u0000\u0019L\u0001"+
		"\u0000\u0000\u0000\u001bO\u0001\u0000\u0000\u0000\u001dR\u0001\u0000\u0000"+
		"\u0000\u001fT\u0001\u0000\u0000\u0000![\u0001\u0000\u0000\u0000#]\u0001"+
		"\u0000\u0000\u0000%h\u0001\u0000\u0000\u0000\'k\u0001\u0000\u0000\u0000"+
		")w\u0001\u0000\u0000\u0000+z\u0001\u0000\u0000\u0000-~\u0001\u0000\u0000"+
		"\u0000/\u0084\u0001\u0000\u0000\u000012\u0005*\u0000\u00002\u0002\u0001"+
		"\u0000\u0000\u000034\u0005/\u0000\u00004\u0004\u0001\u0000\u0000\u0000"+
		"56\u0005+\u0000\u00006\u0006\u0001\u0000\u0000\u000078\u0005-\u0000\u0000"+
		"8\b\u0001\u0000\u0000\u00009:\u0005(\u0000\u0000:\n\u0001\u0000\u0000"+
		"\u0000;<\u0005,\u0000\u0000<\f\u0001\u0000\u0000\u0000=>\u0005)\u0000"+
		"\u0000>\u000e\u0001\u0000\u0000\u0000?@\u0005>\u0000\u0000@\u0010\u0001"+
		"\u0000\u0000\u0000AB\u0005<\u0000\u0000B\u0012\u0001\u0000\u0000\u0000"+
		"CD\u0005<\u0000\u0000DE\u0005=\u0000\u0000E\u0014\u0001\u0000\u0000\u0000"+
		"FG\u0005>\u0000\u0000GH\u0005=\u0000\u0000H\u0016\u0001\u0000\u0000\u0000"+
		"IJ\u0005=\u0000\u0000JK\u0005=\u0000\u0000K\u0018\u0001\u0000\u0000\u0000"+
		"LM\u0005&\u0000\u0000MN\u0005&\u0000\u0000N\u001a\u0001\u0000\u0000\u0000"+
		"OP\u0005|\u0000\u0000PQ\u0005|\u0000\u0000Q\u001c\u0001\u0000\u0000\u0000"+
		"RS\u0005!\u0000\u0000S\u001e\u0001\u0000\u0000\u0000TU\u0005o\u0000\u0000"+
		"UV\u0005b\u0000\u0000VW\u0005j\u0000\u0000WX\u0005e\u0000\u0000XY\u0005"+
		"c\u0000\u0000YZ\u0005t\u0000\u0000Z \u0001\u0000\u0000\u0000[\\\u0005"+
		"[\u0000\u0000\\\"\u0001\u0000\u0000\u0000]^\u0005]\u0000\u0000^$\u0001"+
		"\u0000\u0000\u0000_`\u0005t\u0000\u0000`a\u0005r\u0000\u0000ab\u0005u"+
		"\u0000\u0000bi\u0005e\u0000\u0000cd\u0005f\u0000\u0000de\u0005a\u0000"+
		"\u0000ef\u0005l\u0000\u0000fg\u0005s\u0000\u0000gi\u0005e\u0000\u0000"+
		"h_\u0001\u0000\u0000\u0000hc\u0001\u0000\u0000\u0000i&\u0001\u0000\u0000"+
		"\u0000jl\u0007\u0000\u0000\u0000kj\u0001\u0000\u0000\u0000lm\u0001\u0000"+
		"\u0000\u0000mk\u0001\u0000\u0000\u0000mn\u0001\u0000\u0000\u0000n(\u0001"+
		"\u0000\u0000\u0000op\u0005\'\u0000\u0000pq\u0003+\u0015\u0000qr\u0005"+
		"\'\u0000\u0000rx\u0001\u0000\u0000\u0000st\u0005\"\u0000\u0000tu\u0003"+
		"+\u0015\u0000uv\u0005\"\u0000\u0000vx\u0001\u0000\u0000\u0000wo\u0001"+
		"\u0000\u0000\u0000ws\u0001\u0000\u0000\u0000x*\u0001\u0000\u0000\u0000"+
		"y{\u0007\u0001\u0000\u0000zy\u0001\u0000\u0000\u0000{|\u0001\u0000\u0000"+
		"\u0000|z\u0001\u0000\u0000\u0000|}\u0001\u0000\u0000\u0000},\u0001\u0000"+
		"\u0000\u0000~\u007f\u0005n\u0000\u0000\u007f\u0080\u0005u\u0000\u0000"+
		"\u0080\u0081\u0005l\u0000\u0000\u0081\u0082\u0005l\u0000\u0000\u0082."+
		"\u0001\u0000\u0000\u0000\u0083\u0085\u0007\u0002\u0000\u0000\u0084\u0083"+
		"\u0001\u0000\u0000\u0000\u0085\u0086\u0001\u0000\u0000\u0000\u0086\u0084"+
		"\u0001\u0000\u0000\u0000\u0086\u0087\u0001\u0000\u0000\u0000\u0087\u0088"+
		"\u0001\u0000\u0000\u0000\u0088\u0089\u0006\u0017\u0000\u0000\u00890\u0001"+
		"\u0000\u0000\u0000\u0006\u0000hmw|\u0086\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}