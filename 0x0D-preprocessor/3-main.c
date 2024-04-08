#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - Entry point of the program
 *
 * This program demonstrates the usage of the ABS macro defined in the
 * "3-function_like_macro.h" header file. It calculates the absolute
 * values of two numbers, -98 and 98, multiplied by 10 using the ABS macro.
 * The results are printed using printf.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;
	int j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;

	printf("%d, %d\n", i, j);
	return (0);
}
