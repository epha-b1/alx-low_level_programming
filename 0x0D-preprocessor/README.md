Project Name
Table of Contents

    Project Description
    Project Structure
    Tasks
        Task 0: Object-like Macro
        Task 1: Pi
        Task 2: File Name
        Task 3: Function-like Macro
        Task 4: SUM
    How to Compile
    Usage

Project Description

This project is a collection of C programs that demonstrate the usage of macros and preprocessor directives. Each task involves creating or using macros to achieve specific objectives. Below, you'll find information about the project's structure and details about each task.
Project Structure

The project is organized as follows:

    0x0D-preprocessor/
        0-object_like_macro.h: Header file for Task 0.
        1-pi.h: Header file for Task 1.
        2-main.c: C program for Task 2.
        02-main.c: A copy of 2-main.c for testing.
        3-function_like_macro.h: Header file for Task 3.
        4-sum.h: Header file for Task 4.
        README.md: This README file.

Tasks
Task 0: Object-like Macro

Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
Task 1: Pi

Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
Task 2: File Name

Write a program that prints the name of the file it was compiled from, followed by a new line.
Task 3: Function-like Macro

Write a function-like macro ABS(x) that computes the absolute value of a number x.
Task 4: SUM

Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
How to Compile

To compile the programs for each task, you can use the following commands:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o task0
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o task1
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o task2
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o task3
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o task4

Usage

After compiling the programs for each task, you can run them as follows:

./task0
./task1
./task2
./task3
./task4

Each program will execute the respective task and display the output.