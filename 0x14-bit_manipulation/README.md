# Bit Manipulation - Project README

## Description

This project contains C functions for performing various bit manipulation operations.

## List of Tasks

### Task 0 - binary_to_uint

```markdown
- Function prototype: `unsigned int binary_to_uint(const char *b);`
- Converts a binary number to an unsigned integer.
- Returns the converted number, or 0 if:
  - There is one or more characters in the string `b` that is not '0' or '1'.
  - `b` is NULL.
- Example:
  ```c
  unsigned int n;
  n = binary_to_uint("1"); // Returns 1
  n = binary_to_uint("101"); // Returns 5
  n = binary_to_uint("1e01"); // Returns 0

### Task 1 - print_binary

```markdown
- Function prototype: `void print_binary(unsigned long int n);`
- Prints the binary representation of a number.
- Format: see example in the code.
- Constraints:
  - You are not allowed to use arrays.
  - You are not allowed to use malloc.
  - You are not allowed to use the % or / operators.

### Task 2 - get_bit


- Function prototype: `int get_bit(unsigned long int n, unsigned int index);`
- Returns the value of a bit at a given index.
- Returns the value of the bit at index `index` or -1 if an error occurred.
- Example:
  ```c
  int n;
  n = get_bit(1024, 10); // Returns 1
  n = get_bit(98, 1); // Returns 1
  n = get_bit(1024, 0); // Returns 0


### Task 3 - set_bit

```markdown
- Function prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- Sets the value of a bit to 1 at a given index.
- Returns 1 if it worked, or -1 if an error occurred.
- Example:
  ```c
  unsigned long int n;
  n = 1024;
  set_bit(&n, 5); // n is now 1056
  set_bit(&n, 10); // Returns -1


### Task 4 - clear_bit

```markdown
- Function prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- Sets the value of a bit to 0 at a given index.
- Returns 1 if it worked, or -1 if an error occurred.
- Example:
  ```c
  unsigned long int n;
  n = 1024;
  clear_bit(&n, 10); // n is now 0
  clear_bit(&n, 100); // Returns -1


### Task 5 - flip_bits

```markdown
- Function prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- Returns the number of bits you would need to flip to get from one number to another.
- You are not allowed to use the % or / operators.
- Example:
  ```c
  unsigned int n;
  n = flip_bits(1024, 1); // Returns 2
  n = flip_bits(402, 98); // Returns 5
  n = flip_bits(1024, 3); // Returns 3


## Repository Information

- GitHub repository: [alx-low_level_programming](https://github.com/paschalugwu/alx-low_level_programming)
- Directory: 0x14-bit_manipulation

## Usage

To compile and run the C programs for each task, use the provided `main.c` and the corresponding function file. For example, to compile Task 0:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o task0
./task0

Repeat the same process for other tasks.
