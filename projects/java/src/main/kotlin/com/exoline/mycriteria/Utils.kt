package com.exoline.mycriteria

import com.exoline.mycriteria.exception.IncomparableTypesException
import com.exoline.mycriteria.exception.UNREACHABLE
import com.fasterxml.jackson.databind.node.*
import com.fasterxml.jackson.module.kotlin.jacksonObjectMapper
import com.fasterxml.jackson.module.kotlin.readValue
import java.time.Instant

infix operator fun Number.plus(other: Number): Number {
    return when(this) {
        is Int -> when (other) {
            is Int -> this + other
            is Double -> this + other
            else -> UNREACHABLE()
        }
        is Double -> when (other) {
            is Int -> this + other
            is Double -> this + other
            else -> UNREACHABLE()
        }
        else -> UNREACHABLE()
    }
}

infix operator fun Number.minus(other: Number): Number {
    return when(this) {
        is Int -> when (other) {
            is Int -> this - other
            is Double -> this - other
            else -> UNREACHABLE()
        }
        is Double -> when (other) {
            is Int -> this - other
            is Double -> this - other
            else -> UNREACHABLE()
        }
        else -> UNREACHABLE()
    }
}

infix operator fun Number.times(other: Number): Number {
    return when(this) {
        is Int -> when (other) {
            is Int -> this * other
            is Double -> this * other
            else -> UNREACHABLE()
        }
        is Double -> when (other) {
            is Int -> this * other
            is Double -> this * other
            else -> UNREACHABLE()
        }
        else -> UNREACHABLE()
    }
}

infix operator fun Number.div(other: Number): Number {
    return when(this) {
        is Int -> when (other) {
            is Int -> this / other
            is Double -> this / other
            else -> UNREACHABLE()
        }
        is Double -> when (other) {
            is Int -> this / other
            is Double -> this / other
            else -> UNREACHABLE()
        }
        else -> UNREACHABLE()
    }
}

operator fun Number.compareTo(other: Number): Int {
    return when(this) {
        is Int -> when (other) {
            is Int -> this.compareTo(other)
            is Double -> this.compareTo(other)
            else -> UNREACHABLE()
        }
        is Double -> when (other) {
            is Int -> this.compareTo(other)
            is Double -> this.compareTo(other)
            else -> UNREACHABLE()
        }
        else -> UNREACHABLE()
    }
}

operator fun Number.compareTo(instant: Instant): Int = compareTo(instant.epochSecond.toInt())

operator fun Any?.compareTo(other: Any?): Int = when {
    this == null && other == null -> 0
    this is Number && other is Number -> compareTo(other)
    this is Number && other is Instant -> compareTo(other)
    this is String && other is String -> compareTo(other)
    else -> throw IncomparableTypesException("Incomparable types")
}

fun VarType.getRecursively(field: String): Any? {
    val fieldTrimmed = field.trim('/')
    val segments = fieldTrimmed.split("/")
    val value = segments.fold<String, JElement?>(this) { acc, segment ->
        acc?.get(segment)
    }
    return value.toAny()
}

fun JElement?.toAny(): Any? = when (this) {
    is IntNode -> intValue()
    is DoubleNode -> doubleValue()
    is TextNode -> textValue()
    is BooleanNode -> booleanValue()
    is ArrayNode -> {
        map {
            it.toAny()
        }
    }
    is NullNode, null -> null
    else -> throw IllegalStateException("Unknown type")
}

fun String.toJObject(): JObject {
    val mapper = jacksonObjectMapper()
    return mapper.readValue(this)
}