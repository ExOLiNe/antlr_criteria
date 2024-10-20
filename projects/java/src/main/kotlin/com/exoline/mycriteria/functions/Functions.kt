package com.exoline.mycriteria.functions

import kotlin.reflect.KFunction
import kotlin.reflect.full.hasAnnotation
import kotlin.reflect.full.memberFunctions

object Functions {
    annotation class Infix

    fun getFunction(name: String): KFunction<*>? {
        return Functions::class.memberFunctions.firstOrNull {
            it.name == name
        }
    }
    fun size(collection: Collection<*>): Int {
        return collection.size
    }

    @Infix
    fun some(any1: Any, any2: Any): Boolean {
        return any1 == any2
    }

    fun KFunction<*>.isInfixFunction(): Boolean = hasAnnotation<Infix>()
}