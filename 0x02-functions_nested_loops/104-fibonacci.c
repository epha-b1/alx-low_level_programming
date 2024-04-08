#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_first_98_fibonacci();
	return (0);
}

/**
 * print_first_98_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_first_98_fibonacci(void)
{
	unsigned long a = 1, b = 2, next_term;
	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 2; i < 98; i++)
	{
		next_term = a + b;
		printf("%lu", next_term);
		if (i < 97)
			printf(", ");
		a = b;
		b = next_term;
	}
	printf("\n");
}
