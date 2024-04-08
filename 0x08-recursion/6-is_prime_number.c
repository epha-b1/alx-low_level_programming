#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the divisor to check with
 *
 * Return: 1 if prime, 0 otherwise
 *
 * Description: This function recursively checks if a given number is prime.
 * It starts with a divisor of 2 and checks if the number is divisible by any
 * number between 2 and (n-1). If a divisor is found, the number is not prime.
 * If no divisor is found, the number is prime.
 */
int check_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
