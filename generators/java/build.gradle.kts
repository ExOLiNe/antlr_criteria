plugins {
    kotlin("jvm") version "2.0.20"
    antlr

}

dependencies {
    antlr("org.antlr:antlr4:4.7.1")
    implementation("com.fasterxml.jackson.module:jackson-module-kotlin:2.16.2")
    testImplementation(kotlin("test"))
}

tasks.test {
    useJUnitPlatform()
}

tasks.register<Copy>("copyGrammar") {
    from(layout.projectDirectory.asFile
        .resolve("..")
        .resolve("grammar")
        .resolve("MyCriteria.g4")
    )

    into(layout.buildDirectory.asFile.get())
}

tasks {
    register("generate") {
        doLast {
            exec {
                //workingDir = layout.buildDirectory.asFile.get()
                executable("dir")
                //args("hello")
            }
        }
    }
    val buildPath = "${layout.buildDirectory.asFile.get()}/build"
    generateGrammarSource {
        println(inputs.properties)
        dependsOn("copyGrammar")
        source("${layout.buildDirectory.asFile.get()}/MyCriteria.g4")
        arguments = arguments//  + listOf("--version") //listOf("-visitor", "-package", "com.exoline.mycriteria.generated")

        doLast {
            copy {
                from(buildPath)
                into(layout.projectDirectory.asFile
                    .resolve("..")
                    .resolve("..")
                    .resolve("generated")
                    .resolve("src")
                    .resolve("main")
                    .resolve("java")
                    .resolve("com")
                    .resolve("exoline")
                    .resolve("mycriteria")
                    .resolve("generated")
                )
            }
            file(buildPath).listFiles()?.forEach {
                if (it.isFile) {
                    it.delete()
                }
            }
        }
    }

    clean {
        doLast {
            file(buildPath).deleteRecursively()
        }
    }
}