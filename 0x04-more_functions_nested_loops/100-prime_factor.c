#include "main.h"

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	return (i);
}
