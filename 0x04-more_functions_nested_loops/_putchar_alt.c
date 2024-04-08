#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
