#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet, then uppercase alphabet,
 *              followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a'; /* Start with lowercase 'a' */
	char uppercase = 'A'; /* Start with uppercase 'A' */

	/* Loop to print the lowercase alphabet */
	while (lowercase <= 'z')
	{
		putchar(lowercase); /* Print the current lowercase letter */
		lowercase++; /* Move to the next lowercase letter */
	}

	/* Loop to print the uppercase alphabet */
	while (uppercase <= 'Z')
	{
		putchar(uppercase); /* Print the current uppercase letter */
		uppercase++; /* Move to the next uppercase letter */
	}

	putchar('\n'); /* Print a new line */

	return (0);
}
