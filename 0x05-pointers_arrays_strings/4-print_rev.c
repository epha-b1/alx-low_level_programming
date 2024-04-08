#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void print_rev(char *s)
{
	int length = 0;
	char *end;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	end = s - 1;

	while (length > 0)
	{
		_putchar(*end);
		end--;
		length--;
	}
	_putchar('\n');
}
