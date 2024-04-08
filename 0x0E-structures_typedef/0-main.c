#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * This program demonstrates the usage of the 'struct dog'
 * type defined in the "dog.h" header file. It creates an
 * instance of the 'struct dog' named 'my_dog' and assigs
 * values to its elements. Then, it prints a message using
 * the assignedvalues of the dog's name ad age.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
