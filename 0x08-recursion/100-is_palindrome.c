#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, len));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome
 * @s: The string to check
 * @len: The length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);

	return (check_palindrome(s + 1, len - 2));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
