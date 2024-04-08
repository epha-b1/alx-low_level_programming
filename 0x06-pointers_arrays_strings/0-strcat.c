#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest; /* Save the start of dest for returning later */

	/* Move to the end of dest */
	while (*dest)
		dest++;

	/* Copy the characters from src to the end of dest */
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Add null-terminator at the end */

	return (ptr); /* Return the concatenated string */
}
