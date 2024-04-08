#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int num_digits = 0;
	int i;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	temp = n;
	while (temp > 0)
	{
		num_digits++;
		temp /= 10;
	}
	for (i = 1; i < num_digits; i++)
		divisor *= 10;
	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
