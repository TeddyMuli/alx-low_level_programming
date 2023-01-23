#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: array
 * @size : size of the array
 * @action: function to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
