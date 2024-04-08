#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Prints the last digit of a random number and provides a message
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	/* Declare the variable here */
	int last_digit;

	/* Seed the random number generator */
	srand(time(0));

	/* Generate a random number between RAND_MAX and -RAND_MAX */
	n = rand() - RAND_MAX / 2;

	/* Assign the value here */
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	/* Check the value of the last digit and print the appropriate message */
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
