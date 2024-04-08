#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to search for.
 *
 * Return: Pointer to the first occurrence of a matching character,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}
