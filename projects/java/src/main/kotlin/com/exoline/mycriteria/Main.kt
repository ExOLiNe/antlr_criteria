package com.exoline.mycriteria

import com.exoline.mycriteria.generated.MyCriteriaLexer
import com.exoline.mycriteria.walk.MyCriteriaVisitorImpl
import com.fasterxml.jackson.module.kotlin.jacksonObjectMapper
import org.antlr.v4.runtime.CharStreams
import org.antlr.v4.runtime.CommonTokenStream
import java.io.File
import java.nio.charset.Charset
import com.exoline.mycriteria.generated.MyCriteriaParser

class Some

fun main() {
    val mapper = jacksonObjectMapper()

    val programPath = File(Some::class.java.classLoader.getResource("Program.txt").file)
    val stream = CharStreams.fromStream(programPath.inputStream(), Charset.defaultCharset())
    val lexer = MyCriteriaLexer(stream)
    val tokens = CommonTokenStream(lexer)
    val parser = MyCriteriaParser(tokens)
    val tree = parser.expr()
    // val prettyVisitor = PrettyVisitor()
    // val prettyTree = prettyVisitor.visit(tree)
    println(tree.toStringTree())
    val myVisitor = MyCriteriaVisitorImpl()
    val app = myVisitor.visit(tree)
    val json = """
        {"arr": [10, 30, 40]}
    """.trimIndent()
    println()
    println()
    println(
        app(mapper.readTree(json) as VarType)
    )
}