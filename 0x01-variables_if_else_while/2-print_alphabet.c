#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the lowercase alphabet followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Start with the letter 'a' */
	char letter = 'a';

	/* Loop to print the alphabet */
	while (letter <= 'z')
	{
		/* Print the current letter */
		putchar(letter);
		/* Move to the next letter */
		letter++;
	}

	/* Print a new line */
	putchar('\n');

	return (0);
}
