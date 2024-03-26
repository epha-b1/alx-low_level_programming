# Dynamic Libraries Project

## Task 0: A library is not a luxury but one of the necessities of life

### Overview
Create the dynamic library `libdynamic.so` containing several functions. These functions cover a range of basic operations, from character manipulation to string and memory functions.

### Functions Implemented
- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

### Directory Structure

GitHub repository: alx-low_level_programming
|-- Directory: 0x18-dynamic_libraries
|-- File: libdynamic.so
|-- File: main.h
|-- File: 0-main.c
|-- File: 1-create_dynamic_lib.sh
|-- File: 100-operations.so
|-- File: 100-tests.py
|-- File: 101-make_me_win.sh

### Usage
1. Compile the main program using the dynamic library:
```bash
   gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
```
    Set the library path and run the executable:

```bash

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
./len
```

Create the dynamic library liball.so from all the .c files:

```bash

./1-create_dynamic_lib.sh
```

Test Python script to call C functions from the dynamic library:

```bash

    python3 100-tests.py
```

## Task 2: Let's call C functions from Python

Overview

Create a dynamic library 100-operations.so that contains C functions callable from Python. Test the functionality using a Python script.
Usage

```bash

python3 100-tests.py
```

## Task 3: Code injection: Win the Giga Millions!

Overview

Create a shell script 101-make_me_win.sh that will execute two commands on the server running the Giga Millions program. The goal is to make the user win the jackpot by injecting code.
Tip

Use LD_PRELOAD for code injection.
Usage

```bash

mss@gm_server$ . ./101-make_me_win.sh
```

Note: Ensure to upload only the required files on the server before running the script. The script will be run 98 seconds before the Giga Millions program with specified numbers.

Caution: The script is limited to three lines and cannot use certain characters for security reasons.
