#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	/* Base case: If y is 0, return 1 */
	if (y == 0)
		return (1);

	/* If y is negative, return -1 */
	if (y < 0)
		return (-1);

	/* Recursive case: Multiply x with the result of x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
