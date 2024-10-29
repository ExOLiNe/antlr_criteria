package com.exoline.mycriteria

import com.exoline.mycriteria.exception.UNREACHABLE

sealed class Expr {
    class Runtime(private val f: F) : Expr() {
        private var value: Any? = null
        private var computed: Boolean = false
        override fun invoke(it: VarType): Any? {
            if (!computed) {
                value = f(it)
                computed = true
            }
            return value
        }
        override fun getValue(): Any? = if (computed) {
            value
        } else {
            throw IllegalStateException("Value not computed yet")
        }

        override fun map(transform: (Any?) -> Any?): Expr = if (computed) {
            CompileTime { transform(value) }
        } else {
            Runtime {
                transform(f(it))
            }
        }

        override fun flatMap(transform: (Any?) -> Expr): Expr = if (computed) {
            Runtime {
                transform(value)(it)
            }
        } else {
            Runtime {
                transform(this(it))(it)
            }
        }
    }

    class CompileTime(private val vl: Any?): Expr() {
        constructor(lambda: () -> Any?) : this(lambda())
        override fun invoke(it: VarType): Any? = vl
        override fun getValue(): Any? = vl
        override fun map(transform: (Any?) -> Any?): Expr = CompileTime { transform(vl) }
        override fun flatMap(transform: (Any?) -> Expr): Expr = transform(vl)
    }

    class App(
        val fields: Set<String>,
        val app: AppF
    ) : Expr() {
        override fun invoke(it: VarType): Any? { UNREACHABLE() }
        override fun getValue(): Any? { UNREACHABLE() }
        override fun map(transform: (Any?) -> Any?): Expr { UNREACHABLE() }
        override fun flatMap(transform: (Any?) -> Expr): Expr { UNREACHABLE() }
    }
    abstract operator fun invoke(it: VarType): Any?
    abstract fun getValue(): Any?
    abstract fun map(transform: (Any?) -> Any?): Expr
    abstract fun flatMap(transform: (Any?) -> Expr): Expr
}

fun List<Expr>.sequence(): Expr = fold<Expr, Expr>(Expr.CompileTime { listOf<Any?>() }) { acc, expr ->
    acc.flatMap { it1 ->
        it1 as List<Any?>
        expr.map { it2 ->
            it1 + it2
        }
    }
}