# 0x0A. C - argc, argv

Welcome to the 0x0A. C - argc, argv project! In this project, you will explore command-line arguments in C and create programs that use them.

## Project Details

- **Author**: Julien Barbier
- **Weight**: 1
- **Project Duration**: September 1, 2023, 6:00 AM - September 2, 2023, 6:00 AM

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without external assistance:

- How to use arguments passed to your program
- Understanding the two prototypes of the main function and when to use each
- Using `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All code files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should follow the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- Each file should contain no more than 5 functions
- The prototypes of all functions and the prototype of the function `_putchar` should be included in a header file called `main.h`
- Don't forget to push your header file
- You are allowed to use the standard library

## Tasks

### Task 0: It ain't what they call you, it's what you answer to

Write a program that prints its name, followed by a new line. The program should still work even if you rename it.

### Task 1: Silence is argument carried out by other means

Write a program that prints the number of arguments passed into it.

### Task 2: The best argument against democracy is a five-minute conversation with the average voter

Write a program that prints all arguments it receives, one argument per line.

### Task 3: Neither irony nor sarcasm is argument

Write a program that multiplies two numbers. If the program does not receive two arguments, it should print "Error" and return 1.

### Task 4: To infinity and beyond

Write a program that adds positive numbers. If no number is passed to the program, it should print 0.

## Repository Information

- GitHub repository: alx-low_level_programming
- Directory: 0x0A-argc_argv