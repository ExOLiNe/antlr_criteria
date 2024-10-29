package com.exoline.mycriteria.functions

import java.lang.reflect.Method
import java.time.Instant
import java.time.LocalDateTime
import java.time.ZoneId

object Functions {
    annotation class Infix

    fun getFunctions(name: String): List<Method> = Functions::class.java.methods.filter {
        it.name == name
    }
    fun size(collection: ArrayList<*>): Int {
        return collection.size
    }
    fun size(string: String): Int {
        return string.length
    }

    @JvmOverloads
    fun date(
        year: Int,
        month: Int = 1,
        day: Int = 1,
        hours: Int = 0,
        minutes: Int = 0,
        seconds: Int = 0
    ): Instant = LocalDateTime.of(year, month, day, hours, minutes, seconds)
        .atZone(ZoneId.systemDefault()).toInstant()

    @JvmOverloads
    fun dummy(str1: String, str2: String = "defaultStr"): String = str1 + str2
    fun dummy2() {}

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

    @Infix
    fun contains(any: ArrayList<*>, value: Any?): Boolean = value in any

    fun Method.isInfixFunction(): Boolean = isAnnotationPresent(Infix::class.java)
}