#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: Array of arguments
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++; /* Account for newline character */
	}

	concatenated_str = malloc(sizeof(char) * (total_length + 1));
	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated_str[k] = av[i][j];
			k++;
		}
		concatenated_str[k] = '\n';
		k++;
	}
	concatenated_str[k] = '\0';

	return (concatenated_str);

}
