#include <stdio.h>
#include "4-sum.h"

/**
 * main - Entry point of the program
 *
 * This program demonstrates the usage of the SUM macro defined in the
 * "4-sum.h" header file. It calculates the sum of the two numbers, 98 and 1024
 * using the SUM macro and assigns the result to the variable 's'. The result
 * is then printed using printf.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int s;

	s = SUM(98, 1024);

	printf("%d\n", s);
	return (0);
}
