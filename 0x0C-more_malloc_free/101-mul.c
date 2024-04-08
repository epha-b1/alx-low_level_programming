#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * is_number - Check if a string is a valid number
 * @str: The string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * mul - Multiply two positive numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: 0 on success, 1 on error
 */
int mul(char *num1, char *num2)
{
	/* Calculate the length of input numbers */
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, k, carry, n1, n2, sum;
	int *result = malloc(sizeof(int) * (len1 + len2));

	if (result == NULL)
		exit(1);

	/* Initialize the result array */
	for (i = 0; i < (len1 + len2); i++)
		result[i] = 0;

	/* Perform multiplication */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}

	/* Find the first non-zero digit in the result */
	k = 0;
	while (result[k] == 0 && k < (len1 + len2 - 1))
		k++;

	/* Print the result */
	for (; k < (len1 + len2); k++)
		_putchar(result[k] + '0');

	_putchar('\n');
	free(result);

	return (0);
}

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		/* Print error message for incorrect argument count */
		printf("Error\n");
		return (1);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		/* Print error message for non-numeric input */
		printf("Error\n");
		return (1);
	}

	result = mul(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}
