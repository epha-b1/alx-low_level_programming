#include <stdio.h>

/**
 * positive_or_negative - Prints whether a number is +, - or 0
 * @i: The number to be checked
 *
 * Return: No return value
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
