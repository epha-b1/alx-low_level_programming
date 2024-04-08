Function Pointers Project

This project consists of several C programs that demonstrate the use of function pointers. Each program performs a specific task as outlined below. You can find the source code for each program in the corresponding files in the GitHub repository.
Table of Contents

    What's My Name
    If You Spend Too Much Time Thinking About a Thing
    To Hell With Circumstances; I Create Opportunities
    A Goal Is Not Always Meant to Be Reached

What's My Name

Task 0:

    Program file: 0-print_name.c
    Prototype: void print_name(char *name, void (*f)(char *));

This program defines a function print_name that takes a name and a function pointer as arguments and prints the name using the provided function. Two example functions are included in 0-main.c to demonstrate its usage. One function prints the name as is, and the other prints the name in uppercase.
How to Run

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
./a

If You Spend Too Much Time Thinking About a Thing

Task 1:

    Program file: 1-array_iterator.c
    Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

This program defines a function array_iterator that takes an array, its size, and a function pointer as arguments. It then applies the provided function to each element of the array. Two example functions are included in 1-main.c to demonstrate its usage.
How to Run


gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
./b

To Hell With Circumstances; I Create Opportunities

Task 2:

    Program file: 2-int_index.c
    Prototype: int int_index(int *array, int size, int (*cmp)(int));

This program defines a function int_index that searches for an integer in an array. It takes an array, its size, and a comparison function as arguments. The function returns the index of the first element for which the comparison function returns a non-zero value. If no element matches or if size is less than or equal to 0, it returns -1. Example comparison functions are included in 2-main.c to demonstrate its usage.
How to Run

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
./c

A Goal Is Not Always Meant to Be Reached

Task 3:

    Program files: 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h

This task involves creating a program that performs simple arithmetic operations. The program takes two integer operands and an operator as command-line arguments, then performs the specified operation and prints the result. The following operators are supported: + (addition), - (subtraction), * (multiplication), / (division), and % (modulo).
How to Compile and Run

bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
./calc 97 + 1
./calc 1024 / 10
./calc 1024 '*' 98
./calc 1024 '\*' 98
./calc 1024 - 98
./calc 1024 '%' 98

GitHub Repository

You can find all the source code files for this project in the GitHub repository under the following directory:

    Repository: alx-low_level_programming
    Directory: 0x0F-function_pointers