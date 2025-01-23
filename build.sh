#!/bin/bash

# Set variables for source folder, source file, and output directory
SRC_DIR="src"               # Name of the source directory
SRC_FILE="main.c"           # Name of the C source file
OUTPUT_DIR="$(dirname "$0")/.."  # Parent directory of the current directory
EXECUTABLE_NAME="text_parser"  # Name of the compiled executable

# Navigate to the source directory
cd "$SRC_DIR" || { echo "Error: Could not navigate to source directory 'src'."; exit 1; }

# Check if the source file exists
if [ ! -f "$SRC_FILE" ]; then
  echo "Error: Source file '$SRC_FILE' not found in $SRC_DIR."
  exit 1
fi

# Compile the program using gcc
echo "Compiling $SRC_FILE..."
gcc "$SRC_FILE" -o "$OUTPUT_DIR/$EXECUTABLE_NAME"

# Check if compilation was successful
if [ $? -eq 0 ]; then
  echo "Compilation successful! Executable created at: $OUTPUT_DIR/$EXECUTABLE_NAME"
else
  echo "Compilation failed!"
  exit 1
fi

exit 0
