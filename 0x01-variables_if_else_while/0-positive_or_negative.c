#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Assigns a random number to variable n and prints its sign
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Seed the random number generator */
	srand(time(0));

	/* Generate a random number between RAND_MAX and -RAND_MAX */
	n = rand() - RAND_MAX / 2;

	/* Check the value of n and print the appropriate message */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
