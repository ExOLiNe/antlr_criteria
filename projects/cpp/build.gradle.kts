plugins {
    `cpp-application`
    //id("net.freudasoft.gradle-cmake-plugin") version "0.0.2"
}

application {
    println(rootDir
        .resolve("generated")
        .resolve("src")
        .resolve("main")
        .resolve("cpp")
        .resolve("com")
        .resolve("exoline")
        .resolve("mycriteria")
        .resolve("generated"))
    source.from(
        file("src/main/com/exoline/mycriteria/main.cpp"),
        file(project.projectDir
            .resolve("src")
            .resolve("main")
            .resolve("com")
            .resolve("exoline")
            .resolve("mycriteria")
            .resolve("generated")
        )
        /*file(rootDir
            .resolve("generated")
            .resolve("src")
            .resolve("main")
            .resolve("cpp")
            .resolve("com")
            .resolve("exoline")
            .resolve("mycriteria")
            .resolve("generated")
        ),*/
    )
    /*privateHeaders.from(file(rootDir
        .resolve("generated")
        .resolve("src")
        .resolve("main")
        .resolve("cpp")
        .resolve("com")
        .resolve("exoline")
        .resolve("mycriteria")
        .resolve("generated")
    ))*/
    privateHeaders.from(file(rootDir
        .resolve("runtime")
        .resolve("Cpp")
        .resolve("runtime")
        .resolve("src")
    ))
    binaries.configureEach {
        compileTask.get().compilerArgs.add("/std:c++20")
    }
}

dependencies {
    implementation(files("lib/antlr4-runtime.lib"))
}

/*tasks.withType<CppCompile> {
    //dependsOn("cmakeConfigure", "cmakeBuild")
    dependsOn(":generators:cpp:generateGrammarSource")
}*/

/*
cmake {
    sourceFolder=file(rootDir
        .resolve("runtime")
        .resolve("Cpp")
    )
    buildStaticLibs=true
    buildConfig="Debug"
}*/
