#include "function_pointers.h"

/**
 * int_index - Searches for an integer in the array.
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Pointer to the comparison function
 *
 * Description: This function takes an array, its size, and a comparison
 * function as parameters. It searches for an integer in the array by using
 * the comparison function to compare values. It returns the index of the
 * first element for which the comparison function does not return 0.
 * If no element matches or if the size is less than or equal to 0,
 * it returns -1.
 * Return: i on success, -1 on fail
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}
