#include "main.h"

/**
 * print_digit - Prints digits recursively
 * @n: The number to print
 */
void print_digit(int n)
{
	_putchar(n + '0');
}

/**
 * print_number - Prints an integer
 * @n: The number to print
 */
void print_number(int n) /* Recursive function to print a number */
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	print_digit(n % 10);
}
