#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long result;

	result = largest_prime_factor(number);
	printf("%ld\n", result);
	return (0);
}
