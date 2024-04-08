#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fibonacci(50);
	return (0);
}

/**
 * print_fibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 *
 * Return: void
 */
void print_fibonacci(int n)
{
	int i;
	long fib1 = 1, fib2 = 2, next;

	for (i = 1; i <= n; i++)
	{
		printf("%ld", fib1);
		if (i < n)
			printf(", ");
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
}
