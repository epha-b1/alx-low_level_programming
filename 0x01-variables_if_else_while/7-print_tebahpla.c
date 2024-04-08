#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet in reverse order,
 *              followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z'; /* Start with the letter 'z' */
	/* Loop to print the alphabet in reverse */
	while (letter >= 'a')
	{
		putchar(letter); /* Print the current letter */
		letter--; /* Move to the previous letter */
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
