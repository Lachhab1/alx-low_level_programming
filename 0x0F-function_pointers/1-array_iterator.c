#include "function_pointers.h"

/**
 * array_iterator - a function that print elemnet of
 *				the array
 * @array: array of integers
 * @size: the length of the array
 * @action: pointer to function that print
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
