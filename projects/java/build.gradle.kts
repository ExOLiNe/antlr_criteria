plugins {
    kotlin("jvm") version "2.0.20"
}

repositories {
    mavenCentral()
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
        srcDirs(
            projectDir.resolve("generated").resolve("java"),
            projectDir.resolve("runtime").resolve("src")
        )
    }
}