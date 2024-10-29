package com.exoline.mycriteria.functions

import com.exoline.mycriteria.exception.ArgTypesException
import com.exoline.mycriteria.exception.IncorrectCallException
import com.exoline.mycriteria.exception.InsufficientArgumentsException
import java.lang.reflect.Method
import kotlin.reflect.KFunction
import kotlin.reflect.full.functions
import kotlin.reflect.full.hasAnnotation

annotation class Infix

class Func(
    private val library: Any,
    val name: String,
    private val overloads: List<Method>,
    val infix: Boolean
) {
    companion object {
        private fun KFunction<*>.getOptionalsTotal(): Int = parameters.filter { it.isOptional }.size

        fun load(library: Any, name: String): Func {
            val libClass = library::class
            val function = libClass.functions.first { it.name == name } // first? really?
            val infix = function.hasAnnotation<Infix>()
            val optionalsTotal = function.getOptionalsTotal()
            return libClass.java.declaredMethods.filter { tt ->
                tt.name == name
            }.apply {
                if (optionalsTotal > 0) {
                    if (optionalsTotal + 1 != this.size) {
                        throw IllegalArgumentException(
                            "Function $name has optional parameters but apparently doesn't have JvmOverloads annotation"
                        )
                    }
                }
            }.let {
                Func(library, name, it, infix)
            }
        }
    }

    val argsRange: IntRange =
        overloads.minOf { it.parameterCount } .. overloads.maxOf { it.parameterCount }

    fun filterTotalArgs(totalArgs: Int): Func = if (totalArgs in argsRange) {
        Func(library, name, overloads.filter { it.parameterCount == totalArgs }, infix)
    } else {
        throw InsufficientArgumentsException(
            "Function $name called with " +
                    "insufficient parameters. " +
                    "Expected: $argsRange"
        )
    }

    operator fun invoke(args: List<Any?>): Any? {
        var result: Any? = null
        var isAnySuccess = false
        for (function in overloads) {
            val r = kotlin.runCatching {
                function.invoke(library, *args.toTypedArray())
            }
            if (r.isSuccess) {
                result = r.getOrNull()
                isAnySuccess = true
                break
            }
        }
        if (!isAnySuccess) {
            throw IncorrectCallException("Function $name was called with incorrect arguments")
        }
        return result
    }

    fun filterCompiledArgs(compileTimePositioned: List<Pair<Int, Any>>): Func = overloads.filter { func ->
        compileTimePositioned.all { (index, arg) ->
            val expectedParam = func.parameterTypes[index]
            val actualParam = arg.javaClass
            expectedParam.isAssignableFrom(actualParam) || isSameType(expectedParam, actualParam)
        }
    }.let {
        Func(library, name, it.ifEmpty {
            throw ArgTypesException("Function `$name` parameter types are incorrect")
        }, infix)
    }
}