@file:Suppress("unused")

package com.exoline.mycriteria.functions

import com.exoline.mycriteria.exception.RuntimeErrorException
import java.time.Instant
import java.time.LocalDateTime
import java.time.ZoneId

object StdLibrary {

    fun size(collection: ArrayList<*>): Int = collection.size
    fun size(string: String): Int = string.length

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

    @Infix
    fun like(any: Any, pattern: String): Boolean {
        any as String
        return when {
            pattern.startsWith("%") -> any.endsWith(pattern.drop(1))
            pattern.endsWith("%") -> any.startsWith(pattern.dropLast(1))
            else -> throw RuntimeErrorException("Pattern must start/end with %")
        }
    }

    @Infix
    fun `in`(value: Any?, list: ArrayList<*>): Boolean = value in list

    @Infix
    fun contains(list: ArrayList<*>, value: Any?): Boolean = value in list

    fun map(list: List<*>, mapF: String) = list.map { mapF }
}