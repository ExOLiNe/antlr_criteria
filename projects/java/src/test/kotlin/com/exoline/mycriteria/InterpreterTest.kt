package com.exoline.mycriteria

import com.exoline.mycriteria.generated.grammar.MyCriteriaLexer
import com.exoline.mycriteria.generated.grammar.MyCriteriaParser
import com.fasterxml.jackson.databind.node.ArrayNode
import com.fasterxml.jackson.databind.node.BooleanNode
import com.fasterxml.jackson.databind.node.TextNode
import org.antlr.v4.runtime.CharStreams
import org.antlr.v4.runtime.CommonTokenStream
import org.junit.jupiter.api.Assertions
import org.junit.jupiter.api.Test
import org.junit.jupiter.api.assertAll
import org.opentest4j.AssertionFailedError
import java.io.File

class InterpreterTest {

    @Test
    fun testParticular() {
        val program = """
            'blabla'
        """.trimIndent()
        val stream = CharStreams.fromString(program)
        val lexer = MyCriteriaLexer(stream)
        val tokens = CommonTokenStream(lexer)
        val parser = MyCriteriaParser(tokens)
        val tree = parser.jsonPointer()
        println(tree.toStringTree())
    }

    @Test
    fun test() {
        val testsDir = File(System.getProperty("tests.dir"))
        val only: Int = 16//-1
        val errors = mutableListOf<() -> Unit>()
        testsDir.listFiles()?.forEach { file ->
            if (file.isDirectory) {
                if (only == -1 || file.name == only.toString()) {
                    val appStr = file.resolve("app.txt").readText()
                    val test = file.resolve("test.json").readText().toJObject()
                    val ignore = (test["ignore"] as? BooleanNode)?.booleanValue()
                    if (ignore != true) {
                        val map = test["map"] as JObject
                        val expectedResult = (test["expected"] as? BooleanNode)?.booleanValue()!!
                        try {
                            val parseResult = interpret(appStr)
                            val (actualFields, tokens, tree, appResult) = parseResult
                            println("TOKENS:")
                            println(tokens)
                            println("TREE:")
                            println(tree.toStringTree())
                            val (actualResult, identifiersValues) = appResult(map)
                            val expectedFields = (test["fields"] as? ArrayNode)?.map {
                                (it as TextNode).textValue()
                            }?.toSet()
                            if (expectedFields != null) {
                                errors += { Assertions.assertEquals(expectedFields, actualFields, "Test#${file.name}") }
                            }
                            val expectedIdentifiersValues = (test["identifiersValues"] as? JObject)?.fields()?.asSequence()?.map { (identifier, value) ->
                                identifier to value.toAny()
                            }?.toMap()
                            if (expectedIdentifiersValues != null) {
                                errors += { Assertions.assertEquals(expectedIdentifiersValues, identifiersValues, "Test#${file.name}") }
                            }
                            errors += { Assertions.assertEquals(expectedResult, actualResult, "Test#${file.name}") }
                        } catch(ex: Exception) {
                            test["throws"]?.textValue()?.let { exceptionName ->
                                errors += { Assertions.assertEquals(exceptionName, ex.javaClass.simpleName, "Test#${file.name} must throw $exceptionName") }
                            } ?: let {
                                errors += { throw AssertionFailedError("Test#${file.name} failed with exception", ex) }
                            }
                        }
                    }
                }
            }
        } ?: throw Exception("Where are files, Carl?")

        assertAll("Errors", *errors.toTypedArray())
    }
}