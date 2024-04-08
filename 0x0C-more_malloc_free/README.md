## Project Title: More Malloc and Free

This project contains C programs that demonstrate the use of memory allocation functions like malloc and calloc and how to manage memory effectively. Each program addresses a specific task related to memory allocation and management. Below, you will find a brief description of each task along with instructions on how to compile and run the programs.

# Task 0: Trust No One
Description

Write a function malloc_checked that allocates memory using malloc. If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.
Prototype


void *malloc_checked(unsigned int b);

Example Usage


char *c = malloc_checked(sizeof(char) * 1024);

Compilation and Execution


gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o 0-malloc_checked
./0-malloc_checked

# Task 1: String Nconcat
Description

Write a function string_nconcat that concatenates two strings. The function should return a pointer to a newly allocated space in memory containing s1, followed by the first n bytes of s2, and null-terminated. If the function fails, it should return NULL. If n is greater or equal to the length of s2, use the entire string s2. If NULL is passed, treat it as an empty string.
Prototype


char *string_nconcat(char *s1, char *s2, unsigned int n);

Example Usage


char *concat = string_nconcat("Best ", "School !!!", 6);

Compilation and Execution


gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
./1-string_nconcat

# Task 2: Calloc
Description

Write a function _calloc that allocates memory for an array using malloc. The function should allocate memory for an array of nmemb elements, each of size bytes, and return a pointer to the allocated memory. The memory should be initialized to zero. If nmemb or size is 0, _calloc should return NULL. If malloc fails, _calloc should also return NULL.
Prototype


void *_calloc(unsigned int nmemb, unsigned int size);

Example Usage


char *a = _calloc(98, sizeof(char));

Compilation and Execution


gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc
./2-calloc

# Task 3: Array Range
Description

Write a function array_range that creates an array of integers. The function should create an array containing all values from min (included) to max (included), ordered from min to max. It should return a pointer to the newly created array. If min is greater than max, the function should return NULL. If malloc fails, it should also return NULL.
Prototype


int *array_range(int min, int max);

Example Usage


int *a = array_range(0, 10);

Compilation and Execution


gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o 3-array_range
./3-array_range

Repository Information

    GitHub Repository: alx-low_level_programming
    Directory: 0x0C-more_malloc_free