package com.exoline.mycriteria

import com.fasterxml.jackson.databind.node.ArrayNode
import com.fasterxml.jackson.databind.node.BooleanNode
import com.fasterxml.jackson.databind.node.TextNode
import org.junit.jupiter.api.Assertions
import org.junit.jupiter.api.Test
import java.io.File

class InterpreterTest {

    @Test
    fun test() {
        val testsDir = File(System.getProperty("tests.dir"))
        val only: Int = -1
        testsDir.listFiles()?.forEach {
            if (it.isDirectory) {
                if (only == -1 || it.name == only.toString()) {
                    val appStr = it.resolve("app.txt").readText()
                    val test = it.resolve("test.json").readText().toJObject()
                    val ignore = (test["ignore"] as? BooleanNode)?.booleanValue()
                    if (ignore != true) {
                        val map = test["map"] as JObject
                        val expectedResult = (test["expected"] as? BooleanNode)?.booleanValue()!!
                        try {
                            val parseResult = interpret(appStr)
                            val (actualFields, tokens, tree, appResult) = parseResult
                            println(tokens)
                            println(parseResult.getPrettyTree())
                            val (actualResult, identifiersValues) = appResult(map)
                            val expectedFields = (test["fields"] as? ArrayNode)?.map {
                                (it as TextNode).textValue()
                            }?.toSet()
                            if (expectedFields != null) {
                                Assertions.assertEquals(expectedFields, actualFields, "Test#${it.name}")
                            }
                            val expectedIdentifiersValues = (test["identifiersValues"] as? JObject)?.fields()?.asSequence()?.map { (identifier, value) ->
                                identifier to value.toAny()
                            }?.toMap()
                            if (expectedIdentifiersValues != null) {
                                Assertions.assertEquals(expectedIdentifiersValues, identifiersValues, "Test#${it.name}")
                            }
                            Assertions.assertEquals(expectedResult, actualResult, "Test#${it.name}")
                        } catch(ex: Exception) {
                            test["throws"]?.textValue()?.let { exceptionName ->
                                Assertions.assertEquals(exceptionName, ex.javaClass.simpleName, "Test#${it.name} must throw $exceptionName")
                            } ?: throw Exception("Test#${it.name} failed with exception", ex)
                        }
                    }
                }
            }
        } ?: throw Exception("Where are files, Carl?")
    }
}