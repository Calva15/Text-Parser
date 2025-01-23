# Text Parser Project

## Overview
The **Text Parser Project** is a beginner-friendly C program that parses text files. The program:
- Reads a specified text file.
- Counts the number of lines and words in the file.
- Searches for the frequency of a specific word.
- Removes punctuation and processes text in a case-insensitive manner.

This project is a great starting point for learning file handling, string manipulation, and basic text parsing in C.

---

## Features
1. **Line Counting**: Counts the total number of lines in the input file.
2. **Word Counting**: Counts the total number of words in the file.
3. **Word Search**: Searches for a specific word and counts its occurrences, ignoring punctuation and case.
4. **Punctuation Removal**: Removes punctuation from the text to ensure accurate word matching.

---

## Prerequisites
- GCC compiler or any other C compiler.
- Bash shell for running the build script.
- Basic understanding of C programming.

---

## Getting Started

### 1. Clone the Repository
```bash
# Clone the repository using Git (if applicable)
git clone <repository-link>
```

### 2. Ensure File Placement
- Place the text file you want to analyze in the **same directory** as the program.

### 3. Build the Program
A Bash script is provided to compile and build the program. Simply run the script:
```bash
./build.sh
```
The script will:
- Compile the `main.c` file using GCC.
- Generate an executable file named `text_parser`.

### 4. Run the Program
Execute the compiled program:
```bash
./text_parser
```

### 5. Program Interaction
- When prompted, enter the name of the text file you want to parse (e.g., `sample.txt`).
- Enter the word you want to search for.
- View the results, including line count, word count, and search frequency.

---

## Code Highlights
### Main Functions:
1. **File Handling**:
   - Opens the specified file in read mode.
   - Validates if the file exists.
2. **String Processing**:
   - Strips punctuation using `remove_punctuation`.
   - Converts text to lowercase for case-insensitive comparisons.
3. **Word Search**:
   - Utilizes `strtok` for tokenizing each word in the file.
   - Compares processed words with the search term.

---

## Example
### Input File: `sample.txt`
```
Hello, world! This is a simple text file.
The world is vast and beautiful.
Explore the world.
```

### User Interaction:
```
Please enter the filename to open: sample.txt
Enter the word to search for: world
```

### Output:
```
File sample.txt opened successfully.
The file sample.txt has 3 lines.
it also has 15 words.
The word 'world' appears 3 times in the file.
File closed successfully.
```

---

## Potential Improvements
1. Add support for handling large files efficiently.
2. Include a GUI for easier file selection and interaction.
3. Enhance word matching to support regular expressions.
4. Add a feature to save the output to a file.

---

## Acknowledgments
This project was inspired by a need to create a simple, expandable text parser for beginners learning C programming.


