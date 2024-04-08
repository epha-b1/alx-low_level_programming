#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
	char *current_char = str;

	while (*current_char != '\0')
	{
		_putchar(*current_char);
		current_char++;
	}
	_putchar('\n');
}
