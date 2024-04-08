#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	/* Loop to iterate through all possible combinations */
	for (num1 = 0; num1 <= 9; num1++)
	{
		/* Ensure num2 is greater than num1 */
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			/* Print the two digits of the current combination */
			putchar(num1 + '0');
			putchar(num2 + '0');
			/* Print ", " after each combination, except for the last one */
			if (num1 != 8 || num2 != 9)
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
