#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0; /* Start with the number 0 */
	/* Loop to print single-digit numbers from 0 to 9 */
	while (number <= 9)
	{
		putchar(number + '0'); /* Print the current number as a character */
		number++; /* Move to the next number */
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
