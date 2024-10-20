package com.exoline.mycriteria

/*
inline infix fun <reified T, reified P> Parser<T>.mapToF(value: P): Parser<(VarType) -> P> = map {
    value.toLambda()
}
inline fun <reified T> Parser<T>.mapToF(): Parser<(VarType) -> T> = map {
    it.toLambda()
}
inline fun <reified T>T.toLambda(): (VarType) -> T = { _: VarType ->
    this
}*/