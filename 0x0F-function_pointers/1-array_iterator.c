#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each of an array.
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be executed
 *
 *Description:This function takes an array, its size, and a function pointer as
 *parameters. It calls the provided function on each element of the array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
