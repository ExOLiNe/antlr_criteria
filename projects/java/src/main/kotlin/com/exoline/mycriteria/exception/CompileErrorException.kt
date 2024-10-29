package com.exoline.mycriteria.exception

open class CompileErrorException(override val message: String?) : Exception() {
    constructor() : this(null)
}

class RecursiveImportException(override val message: String) : CompileErrorException()
class RedefinitionException(override val message: String?) : CompileErrorException()
class UnresolvedIdentifierException(override val message: String?) : CompileErrorException()
class ImportNotFoundException(override val message: String?) : CompileErrorException()


class InsufficientArgumentsException(override val message: String?) : CompileErrorException()
class UnresolvedFunctionNameException(override val message: String?) : CompileErrorException()
class ArgTypesException(override val message: String?) : CompileErrorException()
class NotInfixException(override val message: String?) : CompileErrorException()