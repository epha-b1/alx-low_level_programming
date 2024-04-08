#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integer.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i; /*  Declare the loop variable before the loop */

	for (i = 0; i < n; i++) /*  Use the declared variable in the loop header */
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
