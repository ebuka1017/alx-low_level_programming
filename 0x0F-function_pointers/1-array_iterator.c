#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - xecutes a function given as a parameter
 * on each element of an array
 *
 * @array: array to go through
 * @size: size of array
 * @action: pointer to function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

