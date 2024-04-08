#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified printing function.
 * @name: The name to be printed.
 * @f: A function pointer to the printing function.
 *
 * Description: This function takes a name and a function pointer as parameters
 * It uses the provided function pointer to print the name in a specific format
 * The format of the printing is determined by the function pointed to by the
 * function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
