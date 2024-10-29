package com.exoline.mycriteria.exception

open class RuntimeErrorException(override val message: String?) : Exception() {
    constructor() : this(null)
}

class IncorrectCallException(override val message: String) : RuntimeErrorException()
class IncomparableTypesException(override val message: String) : RuntimeErrorException()