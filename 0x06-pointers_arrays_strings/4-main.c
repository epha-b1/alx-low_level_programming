#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */
void print_array(int *a, int n)
{
	int i; /* Declare the loop variable outside the loop */

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int size = sizeof(a) / sizeof(int);

	print_array(a, size);
	reverse_array(a, size);
	print_array(a, size);

	return (0);
}
