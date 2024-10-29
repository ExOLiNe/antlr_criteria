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

class Interpreter(
    private val importResolver: (String) -> String,
    private val additionalLibraries: List<Any> = emptyList()
) {
    fun interpret(
        program: String
    ): ParseResult {
        val stream = CharStreams.fromString(program)
        val lexer = MyCriteriaLexer(stream)
        val tokens = CommonTokenStream(lexer)
        val parser = MyCriteriaParser(tokens)
        val tree = parser.app()
        val myVisitor = MyCriteriaVisitorImpl(importResolver, additionalLibraries)
        val appResult = (myVisitor.visit(tree) as Expr.App)
        return ParseResult(
            appResult.fields,
            tokens.tokens,
            tree,
            appResult.app
        )
    }
}