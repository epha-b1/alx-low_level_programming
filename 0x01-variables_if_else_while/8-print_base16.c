#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all the numbers of base 16 (hexadecimal) in lowercase,
 *              followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digit;
	/* Loop to print the hexadecimal digits 0 to 9 and a to f */
	for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
	{
		putchar(hex_digit); /* Print the current digit */
	}
	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
	{
		putchar(hex_digit); /* Print the current digit */
	}
	putchar('\n'); /* Print a new line */
	return (0);
}
