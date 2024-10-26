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
		SQR_L=18, SQR_R=19, IN=20, BOOL=21, EXCL=22, INT=23, STR_LITERAL=24, STR=25, 
		NULL_T=26, S_Q=27, D_Q=28, WS=29;
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
			"SQR_L", "SQR_R", "IN", "BOOL", "EXCL", "INT", "STR_LITERAL", "STR", 
			"NULL_T", "S_Q", "D_Q", "WS"
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
		"\u0004\u0000\u001d\u00a0\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0002\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014"+
		"y\b\u0014\u0001\u0015\u0001\u0015\u0001\u0016\u0004\u0016~\b\u0016\u000b"+
		"\u0016\f\u0016\u007f\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0003\u0017\u008a\b\u0017\u0001"+
		"\u0018\u0004\u0018\u008d\b\u0018\u000b\u0018\f\u0018\u008e\u0001\u0019"+
		"\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u001a\u0001\u001a"+
		"\u0001\u001b\u0001\u001b\u0001\u001c\u0004\u001c\u009b\b\u001c\u000b\u001c"+
		"\f\u001c\u009c\u0001\u001c\u0001\u001c\u0000\u0000\u001d\u0001\u0001\u0003"+
		"\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011"+
		"\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010"+
		"!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/\u00181\u00193\u001a"+
		"5\u001b7\u001c9\u001d\u0001\u0000\u0003\u0001\u000009\u0003\u000009AZ"+
		"az\u0003\u0000\t\n\r\r  \u00a4\u0000\u0001\u0001\u0000\u0000\u0000\u0000"+
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
		"\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000\u00001\u0001\u0000"+
		"\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u00005\u0001\u0000\u0000\u0000"+
		"\u00007\u0001\u0000\u0000\u0000\u00009\u0001\u0000\u0000\u0000\u0001;"+
		"\u0001\u0000\u0000\u0000\u0003=\u0001\u0000\u0000\u0000\u0005?\u0001\u0000"+
		"\u0000\u0000\u0007A\u0001\u0000\u0000\u0000\tC\u0001\u0000\u0000\u0000"+
		"\u000bE\u0001\u0000\u0000\u0000\rG\u0001\u0000\u0000\u0000\u000fI\u0001"+
		"\u0000\u0000\u0000\u0011L\u0001\u0000\u0000\u0000\u0013O\u0001\u0000\u0000"+
		"\u0000\u0015R\u0001\u0000\u0000\u0000\u0017U\u0001\u0000\u0000\u0000\u0019"+
		"X\u0001\u0000\u0000\u0000\u001b[\u0001\u0000\u0000\u0000\u001db\u0001"+
		"\u0000\u0000\u0000\u001fd\u0001\u0000\u0000\u0000!f\u0001\u0000\u0000"+
		"\u0000#h\u0001\u0000\u0000\u0000%j\u0001\u0000\u0000\u0000\'l\u0001\u0000"+
		"\u0000\u0000)x\u0001\u0000\u0000\u0000+z\u0001\u0000\u0000\u0000-}\u0001"+
		"\u0000\u0000\u0000/\u0089\u0001\u0000\u0000\u00001\u008c\u0001\u0000\u0000"+
		"\u00003\u0090\u0001\u0000\u0000\u00005\u0095\u0001\u0000\u0000\u00007"+
		"\u0097\u0001\u0000\u0000\u00009\u009a\u0001\u0000\u0000\u0000;<\u0005"+
		"*\u0000\u0000<\u0002\u0001\u0000\u0000\u0000=>\u0005+\u0000\u0000>\u0004"+
		"\u0001\u0000\u0000\u0000?@\u0005-\u0000\u0000@\u0006\u0001\u0000\u0000"+
		"\u0000AB\u0005(\u0000\u0000B\b\u0001\u0000\u0000\u0000CD\u0005)\u0000"+
		"\u0000D\n\u0001\u0000\u0000\u0000EF\u0005>\u0000\u0000F\f\u0001\u0000"+
		"\u0000\u0000GH\u0005<\u0000\u0000H\u000e\u0001\u0000\u0000\u0000IJ\u0005"+
		"<\u0000\u0000JK\u0005=\u0000\u0000K\u0010\u0001\u0000\u0000\u0000LM\u0005"+
		">\u0000\u0000MN\u0005=\u0000\u0000N\u0012\u0001\u0000\u0000\u0000OP\u0005"+
		"=\u0000\u0000PQ\u0005=\u0000\u0000Q\u0014\u0001\u0000\u0000\u0000RS\u0005"+
		"!\u0000\u0000ST\u0005=\u0000\u0000T\u0016\u0001\u0000\u0000\u0000UV\u0005"+
		"&\u0000\u0000VW\u0005&\u0000\u0000W\u0018\u0001\u0000\u0000\u0000XY\u0005"+
		"|\u0000\u0000YZ\u0005|\u0000\u0000Z\u001a\u0001\u0000\u0000\u0000[\\\u0005"+
		"o\u0000\u0000\\]\u0005b\u0000\u0000]^\u0005j\u0000\u0000^_\u0005e\u0000"+
		"\u0000_`\u0005c\u0000\u0000`a\u0005t\u0000\u0000a\u001c\u0001\u0000\u0000"+
		"\u0000bc\u0005/\u0000\u0000c\u001e\u0001\u0000\u0000\u0000de\u0005.\u0000"+
		"\u0000e \u0001\u0000\u0000\u0000fg\u0005,\u0000\u0000g\"\u0001\u0000\u0000"+
		"\u0000hi\u0005[\u0000\u0000i$\u0001\u0000\u0000\u0000jk\u0005]\u0000\u0000"+
		"k&\u0001\u0000\u0000\u0000lm\u0005i\u0000\u0000mn\u0005n\u0000\u0000n"+
		"(\u0001\u0000\u0000\u0000op\u0005t\u0000\u0000pq\u0005r\u0000\u0000qr"+
		"\u0005u\u0000\u0000ry\u0005e\u0000\u0000st\u0005f\u0000\u0000tu\u0005"+
		"a\u0000\u0000uv\u0005l\u0000\u0000vw\u0005s\u0000\u0000wy\u0005e\u0000"+
		"\u0000xo\u0001\u0000\u0000\u0000xs\u0001\u0000\u0000\u0000y*\u0001\u0000"+
		"\u0000\u0000z{\u0005!\u0000\u0000{,\u0001\u0000\u0000\u0000|~\u0007\u0000"+
		"\u0000\u0000}|\u0001\u0000\u0000\u0000~\u007f\u0001\u0000\u0000\u0000"+
		"\u007f}\u0001\u0000\u0000\u0000\u007f\u0080\u0001\u0000\u0000\u0000\u0080"+
		".\u0001\u0000\u0000\u0000\u0081\u0082\u00035\u001a\u0000\u0082\u0083\u0003"+
		"1\u0018\u0000\u0083\u0084\u00035\u001a\u0000\u0084\u008a\u0001\u0000\u0000"+
		"\u0000\u0085\u0086\u00037\u001b\u0000\u0086\u0087\u00031\u0018\u0000\u0087"+
		"\u0088\u00037\u001b\u0000\u0088\u008a\u0001\u0000\u0000\u0000\u0089\u0081"+
		"\u0001\u0000\u0000\u0000\u0089\u0085\u0001\u0000\u0000\u0000\u008a0\u0001"+
		"\u0000\u0000\u0000\u008b\u008d\u0007\u0001\u0000\u0000\u008c\u008b\u0001"+
		"\u0000\u0000\u0000\u008d\u008e\u0001\u0000\u0000\u0000\u008e\u008c\u0001"+
		"\u0000\u0000\u0000\u008e\u008f\u0001\u0000\u0000\u0000\u008f2\u0001\u0000"+
		"\u0000\u0000\u0090\u0091\u0005n\u0000\u0000\u0091\u0092\u0005u\u0000\u0000"+
		"\u0092\u0093\u0005l\u0000\u0000\u0093\u0094\u0005l\u0000\u0000\u00944"+
		"\u0001\u0000\u0000\u0000\u0095\u0096\u0005\'\u0000\u0000\u00966\u0001"+
		"\u0000\u0000\u0000\u0097\u0098\u0005\"\u0000\u0000\u00988\u0001\u0000"+
		"\u0000\u0000\u0099\u009b\u0007\u0002\u0000\u0000\u009a\u0099\u0001\u0000"+
		"\u0000\u0000\u009b\u009c\u0001\u0000\u0000\u0000\u009c\u009a\u0001\u0000"+
		"\u0000\u0000\u009c\u009d\u0001\u0000\u0000\u0000\u009d\u009e\u0001\u0000"+
		"\u0000\u0000\u009e\u009f\u0006\u001c\u0000\u0000\u009f:\u0001\u0000\u0000"+
		"\u0000\u0006\u0000x\u007f\u0089\u008e\u009c\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}