group = "com.exoline"
version = "1.0-SNAPSHOT"

val testsDir = file("tests").path

subprojects {
    extra["testsDir"] = testsDir
    println(extra["testsDir"])
}