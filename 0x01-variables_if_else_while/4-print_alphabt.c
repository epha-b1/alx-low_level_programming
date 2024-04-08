#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet excluding 'q' and 'e',
 *              followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a'; /* Start with the letter 'a' */
	/* Loop to print the alphabet excluding 'q' and 'e' */
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e') /* Skip 'q' and 'e' */
			putchar(letter); /* Print the current letter */
		letter++; /* Move to the next letter */
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
