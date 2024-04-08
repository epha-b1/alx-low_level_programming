# _memset Function

This project implements the `_memset` function, which fills a memory area with a constant byte. The function is written in the C programming language and follows the requirements specified in the project guidelines.

## Getting Started

To compile and run the program, follow these steps:

1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Open a terminal and run the following command to compile the code:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-memset.c -o 0-memset
4. Execute the compiled program with the following command:
./0-memset
## Usage

The `_memset` function can be used to fill a memory area with a constant byte. It takes the following parameters:
c 
char *_memset(char *s, char b, unsigned int n);
- `s`: A pointer to the memory area to be filled.
- `b`: The constant byte to fill the memory area with.
- `n`: The number of bytes to be filled.

The function returns a pointer to the memory area `s` after it has been filled.

## Example

Here's an example usage of the `_memset` function:

#include "main.h" 
#include <stdio.h> 
 
int main(void) 
{ 
    char buffer[98] = {0x00}; 
 
    simple_print_buffer(buffer, 98); 
    _memset(buffer, 0x01, 95); 
    printf("-------------------------------------------------\n"); 
    simple_print_buffer(buffer, 98);     
    return (0); 
}
## Requirements

The code in this project follows specific requirements, including:

- Using block comments (/* */) instead of C99 // comments.
- Compiling on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- Following the Betty style for code formatting.
- Avoiding the use of global variables.
- Limiting the number of functions per file to 5.
- Not using the standard library, except for the _putchar function.

Please refer to the project guidelines for more details.

## Author

This project is created by Ugwu Paschal.