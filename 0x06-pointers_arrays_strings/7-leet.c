#include "main.h"

/**
 * leet - Convert characters in a string to leet (1337) language.
 * @str: The input string to be converted.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}

	return (str);
}
