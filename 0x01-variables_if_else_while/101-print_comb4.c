#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	/* Loop to iterate through all possible combinations */
	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				/* Print the three digits of the current combination */
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				/* Print ", " after each combination, except for the last one */
				if (num1 != 7 || num2 != 8 || num3 != 9)
				{
					putchar(','); /* Print comma */
					putchar(' '); /* Print space */
				}
			}
		}
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
