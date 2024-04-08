#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int limit = 4000000;
	int sum = sum_even_fibonacci(limit);

	printf("%d\n", sum);
	return (0);
}

/**
 * sum_even_fibonacci - Calculates the sum of even-valued Fibonacci terms.
 * @limit: The limit of Fibonacci terms to consider.
 *
 * Return: The sum of even-valued terms.
 */
int sum_even_fibonacci(int limit)
{
	int term1 = 1, term2 = 2, next_term, sum = 0;

	while (term2 <= limit)
	{
		if (term2 % 2 == 0)
			sum += term2;
		next_term = term1 + term2;
		term1 = term2;
		term2 = next_term;
	}
	return (sum);
}
