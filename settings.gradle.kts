plugins {
    id("org.gradle.toolchains.foojay-resolver-convention") version "0.8.0"
}
rootProject.name = "antlr_criteria"

include("projects:java")
include("projects:cpp")