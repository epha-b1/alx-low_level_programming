#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	char *str = s;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
	char *find = letters;
	char *replace = rot13;
	int index = 0;

	while (*find)
	{
		if (*s == *find)
		{
			*s = *(replace + index);
			break;
		}
		find++;
		index++;
	}
	s++;
	}

	return (str);
}
