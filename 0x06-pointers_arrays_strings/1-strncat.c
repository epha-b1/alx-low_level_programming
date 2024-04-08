#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to append from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest; /* Save the start of dest for returning later */

	/* Move to the end of dest */
	while (*dest)
		dest++;

	/* Append at most n bytes from src */
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0'; /* Add null-terminator at the end */

	return (ptr); /* Return the concatenated string */
}
