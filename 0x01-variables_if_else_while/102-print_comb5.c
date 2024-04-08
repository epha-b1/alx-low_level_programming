#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	/* Loop to iterate through all possible combinations */
	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			/* Print the two-digit numbers of the current combination */
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' '); /* Print space */
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			/* Print ", " after each combination, except for the last one */
			if (num1 != 98 || num2 != 99)
			{
				putchar(','); /* Print comma */
				putchar(' '); /* Print space */
			}
		}
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
