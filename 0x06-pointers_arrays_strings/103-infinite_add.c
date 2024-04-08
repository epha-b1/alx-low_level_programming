#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if result cannot fit in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry = 0;
	int i, j, k;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (size_r <= len1 || size_r <= len2)
		return (0);

	r[size_r] = '\0';
	len1--;
	len2--;

	for (i = len1, j = len2, k = size_r - 1; i >= 0 ||
			j >= 0 || carry; i--, j--, k--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		r[k] = (sum % 10) + '0';
	}

	if (k >= 0)
		return (r + k + 1);

	return (r);
}
