#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0;
	int in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_length;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!isspace(str[i]))
		{
			word_length = 0;
			k = i;
			while (str[k] != '\0' && !isspace(str[k]))
			{
				word_length++;
				k++;
			}

			words[j] = malloc((word_length + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < word_length; k++, i++)
				words[j][k] = str[i];
			words[j][k] = '\0';
			j++;
		}
		else
		{
			i++;
		}
	}
	words[j] = NULL;
	return (words);
}
