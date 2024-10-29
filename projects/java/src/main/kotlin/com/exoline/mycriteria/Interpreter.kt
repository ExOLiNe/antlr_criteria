package com.exoline.mycriteria

import com.exoline.mycriteria.generated.grammar.MyCriteriaLexer
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser.AppContext
import com.exoline.mycriteria.walk.MyCriteriaVisitorImpl
import com.exoline.mycriteria.walk.PrettyVisitor
import org.antlr.v4.runtime.*
import org.antlr.v4.runtime.atn.ATNConfigSet
import org.antlr.v4.runtime.dfa.DFA
import java.util.*

typealias Tree = AppContext

data class ParseResult (
    val fields: Set<String>,
    val tokens: List<Token>,
    val tree: Tree,
    val app: AppF
) {
    data class AppResult (
        val result: Boolean,
        val identifiersValues: Map<String, Any?>
    )

    fun getPrettyTree(): String {
        val prettyVisitor = PrettyVisitor()
        val prettyTree = prettyVisitor.visit(tree)
        return prettyTree
    }
}

fun interpret(program: String, importResolver: (String) -> String): ParseResult {
    val stream = CharStreams.fromString(program)
    val lexer = MyCriteriaLexer(stream)
    lexer.addErrorListener(object : ANTLRErrorListener {
        override fun syntaxError(
            recognizer: Recognizer<*, *>?,
            offendingSymbol: Any?,
            line: Int,
            charPositionInLine: Int,
            msg: String?,
            e: RecognitionException?
        ) {
            TODO("Not yet implemented")
        }

        override fun reportAmbiguity(
            recognizer: Parser?,
            dfa: DFA?,
            startIndex: Int,
            stopIndex: Int,
            exact: Boolean,
            ambigAlts: BitSet?,
            configs: ATNConfigSet?
        ) {
            TODO("Not yet implemented")
        }

        override fun reportAttemptingFullContext(
            recognizer: Parser?,
            dfa: DFA?,
            startIndex: Int,
            stopIndex: Int,
            conflictingAlts: BitSet?,
            configs: ATNConfigSet?
        ) {
            TODO("Not yet implemented")
        }

        override fun reportContextSensitivity(
            recognizer: Parser?,
            dfa: DFA?,
            startIndex: Int,
            stopIndex: Int,
            prediction: Int,
            configs: ATNConfigSet?
        ) {
            TODO("Not yet implemented")
        }
    })
    lexer
    val tokens = CommonTokenStream(lexer)
    val parser = MyCriteriaParser(tokens)
    val tree = parser.app()
    val myVisitor = MyCriteriaVisitorImpl(importResolver)
    val appResult = (myVisitor.visit(tree) as Expr.App)
    return ParseResult(
        appResult.fields,
        tokens.tokens,
        tree,
        appResult.app
    )
}