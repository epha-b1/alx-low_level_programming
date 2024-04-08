#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
*/
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string to the duplicate */
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
