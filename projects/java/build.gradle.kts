import org.jetbrains.kotlin.gradle.plugin.extraProperties

plugins {
    kotlin("jvm") version "2.0.20"
}

dependencies {
    implementation("org.antlr:antlr4:4.7.1")
    implementation("com.fasterxml.jackson.module:jackson-module-kotlin:2.16.2")
    testImplementation(kotlin("test"))
}

tasks.test {
    useJUnitPlatform()
}

sourceSets {
    java.sourceSets["main"].java {
        srcDir(file("..")
            .resolve("..")
            .resolve("generated")
            .resolve("src")
            .resolve("main")
            .resolve("java")
        )
    }
}

tasks.compileKotlin {
    dependsOn(":generators:java:generateGrammarSource")
}