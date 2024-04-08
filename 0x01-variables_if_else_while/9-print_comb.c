#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by ", ", in ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Loop to print numbers from 0 to 9 */
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0'); /* Print the current digit */
		/* Print ", " after each number, except for the last one */
		if (num != 9)
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
