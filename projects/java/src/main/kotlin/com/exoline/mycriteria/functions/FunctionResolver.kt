package com.exoline.mycriteria.functions

import com.exoline.mycriteria.Expr
import com.exoline.mycriteria.callAny
import com.exoline.mycriteria.exception.ArgTypesException
import com.exoline.mycriteria.exception.InsufficientArgumentsException
import com.exoline.mycriteria.exception.NotInfixException
import com.exoline.mycriteria.exception.UnresolvedFunctionNameException
import com.exoline.mycriteria.functions.Functions.isInfixFunction
import java.lang.reflect.Method

object FunctionResolver {
    private val primitivesMapping = listOf(
        "Int" to "Integer"
    )

    fun callInfixFunction(name: String, exprs: List<Expr>): Expr {
        val functions = getFunctions(name, exprs).filter {
            it.isInfixFunction()
        }
        if (functions.isEmpty()) {
            throw NotInfixException("Function $name is not infix")
        }
        return callFunctions(functions, exprs)
    }

    fun callFunction(name: String, exprs: List<Expr>): Expr {
        val functions = getFunctions(name, exprs)
        return callFunctions(functions, exprs)
    }

    private fun isSameType(type1: Class<*>, type2: Class<*>): Boolean {
        val t1 = type1.simpleName.lowercase()
        val t2 = type2.simpleName.lowercase()
        return primitivesMapping.firstOrNull {
            val first = it.first.lowercase()
            val second = it.second.lowercase()
            (first == t1 && second == t2) ||
                    (first == t2 && second == t1)
        } != null
    }

    private fun callFunctions(functions: List<Method>, exprs: List<Expr>): Expr {
        val compileTimeExprs = exprs.filterIsInstance<Expr.CompileTime>()
        return if (exprs.size == compileTimeExprs.size) {
            Expr.CompileTime {
                val args = exprs.map { x -> x.getValue() }
                functions.callAny(args)
            }
        } else {
            Expr.Runtime {
                val args = exprs.map { x -> x(it) }
                functions.callAny(args)
            }
        }
    }

    private fun getFunctions(name: String, args: List<Expr>): List<Method> {
        val functions = getByName(name)
        if (functions.isEmpty()) {
            throw UnresolvedFunctionNameException("Unresolved function name")
        }

        val filteredTotalArgsFunctions = functions.filterTotalArgs(args.size)
        if (filteredTotalArgsFunctions.isEmpty()) {
            throw InsufficientArgumentsException("Function $name called with " +
                    "insufficient parameters. " +
                    "Expected: ${filteredTotalArgsFunctions.argsRange()}")
        }

        val compileTimePositionedArgs = args.compileTimePositioned()

        return if (compileTimePositionedArgs.isEmpty()) {
            filteredTotalArgsFunctions
        } else {
            val filteredByCompileTimeArgs = filteredTotalArgsFunctions.filter { func ->
                compileTimePositionedArgs.all { (index, arg) ->
                    val expectedParam = func.parameterTypes[index]
                    val actualParam = arg.javaClass
                    expectedParam.isAssignableFrom(actualParam) || isSameType(expectedParam, actualParam)
                }
            }
            filteredByCompileTimeArgs.ifEmpty {
                throw ArgTypesException("Function $name parameter types are incorrect")
            }
        }
    }

    private fun getByName(name: String): List<Method> =
        Functions::class.java.methods.filter { it.name == name }

    private fun List<Method>.filterTotalArgs(totalArgs: Int): List<Method> =
        filter { it.parameterCount == totalArgs }

    private fun List<Method>.argsRange(): String {
        val argsRange = map { it.parameterCount }.let {
            (it.minOrNull() ?: 0)..(it.maxOrNull() ?: 0)
        }
        return if (argsRange == 0..0) {
            "0"
        } else {
            argsRange.toString()
        }
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