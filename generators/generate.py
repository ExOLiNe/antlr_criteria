import subprocess
import os

# Paths (Modify these accordingly)
grammar_file = "grammar/MyCriteria.g4"  # Path to your grammar file
#output_dir = "../generated/src/main/java/com/exoline/mycriteria/generated"  # Directory to store the generated files

# Create output directory if it doesn't exist
#os.makedirs(output_dir, exist_ok=True)

antlr_cpp = [
    "java",
    "-jar",
    "antlr-4.13.2.jar",
    "-visitor",
    "-Dlanguage=Cpp",
    grammar_file,
    "-o",
    "../projects/cpp/generated"
]

antlr_java = [
    "java",
    "-jar",
    "antlr-4.13.2.jar",
    "-visitor",
    "-package",
    "com.exoline.mycriteria.generated.grammar",
    grammar_file,
    "-o",
    "../projects/java/generated/java/com/exoline/mycriteria/generated/"
]

# Run the command
try:
    subprocess.run(antlr_java, check=True)
    subprocess.run(antlr_cpp, check=True)
except subprocess.CalledProcessError as e:
    print(f"Error occurred while running ANTLR: {e}")