#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number to calculate the factorial of .
 *
 * Return: The factorial of the number. If n is less than 0, return -1.
*/
int factorial(int n)
{
	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return (1);

	/* If n is negative, return -1 to indicate error */
	if (n < 0)
		return (-1);

	/* Recursive case: calculate factorial */
	return (n * factorial(n - 1));
}
