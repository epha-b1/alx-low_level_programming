#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the name of the file it was compiled from.
 * It uses the predefined macro _FILE_ to retrieve the name and
 * then prints it using the printf function. The name is printed followed
 * by a new line.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
