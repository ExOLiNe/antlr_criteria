package com.exoline.mycriteria

import com.exoline.mycriteria.functions.Infix

object TestStdLibrary {
    @JvmOverloads
    fun dummy(str1: String, str2: String = "defaultStr"): String = str1 + str2
    fun dummy2() {}

    @Infix
    fun some(any1: Any, any2: Any): Boolean {
        return any1 == any2
    }
}