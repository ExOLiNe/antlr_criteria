package com.exoline.mycriteria.functions

import com.exoline.mycriteria.Expr
import com.exoline.mycriteria.exception.InfixException
import com.exoline.mycriteria.exception.NotInfixException
import com.exoline.mycriteria.exception.UnresolvedFunctionNameException
import kotlin.reflect.full.declaredFunctions

class LibraryLoader (libraries: List<Any>) {
    private val functions = loadLibraries(libraries)

    companion object {
        private fun loadLibraries(libs: List<Any>): Map<String, Func> = libs.map { library ->
            library::class.declaredFunctions.map {
                Func.load(library, it.name)
            }
        }.flatten().associateBy { it.name }

        private fun List<Any>.validateConflicts() {
            forEach { library1 ->
                forEach { library2 ->
                    if (library1 != library2) {
                        val l1 = library1::class.declaredFunctions.map { it.name }.toSet()
                        val l2 = library2::class.declaredFunctions.map { it.name }.toSet()
                        if ((l1 + l2).size < l1.size + l2.size) {
                            l1 - l2
                            throw IllegalArgumentException("Libraries $library1 and $library2 have conflicting methods")
                        }
                    }
                }
            }
        }
    }

    init {
        libraries.validateConflicts()
    }

    /*fun callInfix(name: String, exprs: List<Expr>): Expr {
        val function = getFunction(name, exprs, true)
        return callFunction(function, exprs)
    }*/

    fun call(name: String, exprs: List<Expr>, infix: Boolean): Expr {
        val function = getFunction(name, exprs, infix)
        return callFunction(function, exprs)
    }

    private fun callFunction(function: Func, exprs: List<Expr>): Expr {
        val compileTimeExprs = exprs.filterIsInstance<Expr.CompileTime>()
        return if (exprs.size == compileTimeExprs.size) {
            Expr.CompileTime {
                val args = exprs.map { x -> x.getValue() }
                function(args)
            }
        } else {
            Expr.Runtime {
                val args = exprs.map { x -> x(it) }
                function(args)
            }
        }
    }

    private fun getFunction(name: String, args: List<Expr>, infix: Boolean): Func {
        return runCatching {
            functions[name] ?: throw UnresolvedFunctionNameException("Unresolved function name $name")
        }.map {
            it.filterTotalArgs(args.size)
        }.map {
            it.filterCompiledArgs(args.compileTimePositioned())
        }.map {
            if (it.infix && !infix) {
                throw InfixException("Function $name must used as infix")
            }
            if (!it.infix && infix) {
                throw NotInfixException("Function $name is not infix")
            }
            it
        }.getOrThrow()
    }

    private fun List<Expr>.compileTimePositioned(): List<Pair<Int, Any>> =
        mapIndexedNotNull { index, expr ->
            if (expr is Expr.CompileTime) {
                expr.getValue()?.let {
                    index to it
                }
            } else {
                null
            }
        }
}

fun isSameType(type1: Class<*>, type2: Class<*>): Boolean {
    val t1 = type1.simpleName.lowercase()
    val t2 = type2.simpleName.lowercase()
    val primitivesMapping = listOf(
        "int" to "integer"
    )
    return primitivesMapping.firstOrNull {
        val first = it.first.lowercase()
        val second = it.second.lowercase()
        (first == t1 && second == t2) ||
                (first == t2 && second == t1)
    } != null
}