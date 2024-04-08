#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;

	/* Check if no numbers are passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through each argument */
	for (i = 1; i < argc; i++)
	{
		/* Convert argument to integer */
		num = atoi(argv[i]);

		/* Check if argument contains symbols that are not digits */
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		/* Check if argument is a positive number */
		if (num > 0)
			sum += num;
	}

	/* Print the sum of the positive numbers */
	printf("%d\n", sum);

	return (0);
}
