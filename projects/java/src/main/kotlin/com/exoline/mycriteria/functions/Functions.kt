package com.exoline.mycriteria.functions

import kotlin.reflect.KFunction
import kotlin.reflect.full.hasAnnotation
import kotlin.reflect.full.memberFunctions

object Functions {
    annotation class Infix

    fun getFunctions(name: String): List<KFunction<*>> {
        return Functions::class.memberFunctions.filter {
            it.name == name
        }
    }
    fun size(collection: Collection<*>): Int {
        return collection.size
    }
    fun size(string: String): Int {
        return string.length
    }
    fun dummy(string: String): String = string

    @Infix
    fun some(any1: Any, any2: Any): Boolean {
        return any1 == any2
    }

    @Infix
    fun like(any: Any, pattern: String): Boolean {
        any as String
        return when {
            pattern.startsWith("%") -> any.endsWith(pattern.drop(1))
            pattern.endsWith("%") -> any.startsWith(pattern.dropLast(1))
            else -> throw IllegalArgumentException("Pattern must start/end with %")
        }
    }

    fun KFunction<*>.isInfixFunction(): Boolean = hasAnnotation<Infix>()
}