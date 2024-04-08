# Project Title: 0x1C. C - Makefiles

## Overview
This project focuses on understanding and implementing Makefiles in the C programming language. It includes several tasks that gradually build upon each other to enhance your knowledge of Makefiles and their usage.

## Project Details

### Task 0: Creating the First Makefile
- File: 0-Makefile
- Objective: Create the initial Makefile with the following specifications:
  - Executable name: school
  - Rule: all
    - Builds the executable
  - Variables: none

### Task 1: Adding Compiler and Source File Variables
- File: 1-Makefile
- Objective: Extend the Makefile to include variables for the compiler (CC) and source files (SRC).

### Task 2: Creating a Useful Makefile
- File: 2-Makefile
- Objective: Develop a more sophisticated Makefile with variables for compiler, source files, object files, and the executable name.
- The all rule should recompile only the updated source files.

### Task 3: Adding Clean-Up Rules
- File: 3-Makefile
- Objective: Enhance the Makefile with additional rules for cleaning up temporary files and object files.
- Rules: all, clean, oclean, fclean, re

### Task 4: A Complete Makefile
- File: 4-Makefile
- Objective: Create a comprehensive Makefile that includes compiler flags (CFLAGS) and follows the conventions of all, clean, fclean, oclean, and re rules.

### Task 5: Island Perimeter
- File: 5-island_perimeter.py
- Objective: Implement a Python function `island_perimeter(grid)` that calculates the perimeter of an island in a given grid.

### Task 6: Advanced Makefile
- File: 100-Makefile
- Objective: Create an advanced Makefile with additional constraints, including restrictions on the use of certain strings and rules.

## Project Setup
- **Allowed Editors:** vi, vim, emacs
- **Operating System:** Ubuntu 20.04 LTS
- **GCC Version:** 9.3.0
- **Make Version:** GNU Make 4.2.1
- **File Requirements:**
  - All files should end with a new line.
  - A README.md file at the root of the project folder is mandatory.

## How to Use
1. Clone the repository: `git clone [repository_url]`
2. Navigate to the project directory: `cd 0x1C-makefiles`

## How to Compile and Run
For each Makefile, you can use the following commands:
- `make -f [Makefile_name]`: Compile the program.
- `./[executable_name]`: Run the compiled program.

## Additional Notes
- Plagiarism is strictly prohibited. Solutions should be developed independently to meet the project's learning objectives.
- Follow the provided guidelines and constraints for each task.
- Refer to the project's GitHub repository for specific directories and files related to each task.
