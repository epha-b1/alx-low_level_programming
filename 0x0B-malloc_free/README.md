Project Title: C - malloc, free
Overview

This project is part of the ALX School curriculum and focuses on memory allocation in C. The project consists of several tasks, each requiring you to implement functions that involve dynamic memory allocation using malloc and memory deallocation using free. Below, you'll find a brief description of each task and its associated files.
Table of Contents

    Concepts
    Learning Objectives
    Requirements
    Tasks
        Float like a butterfly, sting like a bee
        The woman who has no imagination has no wings
        He who is not courageous enough to take risks will accomplish nothing in life
        If you even dream of beating me you'd better wake up and apologize
        It's not bragging if you can back it up

Concepts

This project focuses on the following concepts:

    Automatic and dynamic memory allocation using malloc and free.

Learning Objectives

By completing this project, you are expected to understand and be able to explain:

    The difference between automatic and dynamic memory allocation.
    The usage of malloc and free.
    When and why to use malloc.
    How to use valgrind to check for memory leaks.

Requirements

General requirements for this project include:

    Allowed editors: vi, vim, emacs.
    All files will be compiled on Ubuntu 20.04 LTS using gcc with the following flags: -Wall -Werror -Wextra -pedantic -std=gnu89.
    All source code files should end with a new line.
    A README.md file must be present at the root of the project folder.
    Code should follow the Betty coding style and will be checked using betty-style.pl and betty-doc.pl.
    No usage of global variables.
    Each source file should contain no more than 5 functions.
    Only the C standard library functions malloc and free are allowed. Other functions like printf, puts, calloc, and realloc are forbidden.
    You are allowed to use _putchar (provided in your project files).
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h.

Tasks
Task 0: Float like a butterfly, sting like a bee

    Write a function that creates an array of chars and initializes it with a specific char.
    Prototype: char *create_array(unsigned int size, char c);
    Returns NULL if size is 0.
    Returns a pointer to the array, or NULL if it fails.
    Example usage is provided in 0-main.c.

Task 1: The woman who has no imagination has no wings

    Write a function that returns a pointer to a newly allocated space in memory, containing a copy of the string given as a parameter.
    Prototype: char *_strdup(char *str);
    Returns NULL if str is NULL.
    Memory for the new string is obtained with malloc and can be freed with free.
    Example usage is provided in 1-main.c.

Task 2: He who is not courageous enough to take risks will accomplish nothing in life

    Write a function that concatenates two strings.
    Prototype: char *str_concat(char *s1, char *s2);
    The returned pointer should point to a newly allocated space in memory containing the contents of s1, followed by the contents of s2, and null-terminated.
    If NULL is passed, treat it as an empty string.
    The function should return NULL on failure.
    Example usage is provided in 2-main.c.

Task 3: If you even dream of beating me you'd better wake up and apologize

    Write a function that returns a pointer to a 2-dimensional array of integers.
    Prototype: int **alloc_grid(int width, int height);
    Each element of the grid should be initialized to 0.
    The function should return NULL on failure.
    If width or height is 0 or negative, return NULL.
    Example usage is provided in 3-main.c.

Task 4: It's not bragging if you can back it up

    Write a function that frees a 2-dimensional grid previously created by your alloc_grid function.
    Prototype: void free_grid(int **grid, int height);
    Note that we will compile with your alloc_grid.c file. Make sure it compiles.
    Example usage is provided in 4-main.c.