#include "function_pointers.h"

/**
 * int_index - entry poiint
 * @array: the array
 * @size: number of elements
 * @int: value to be compared
 * @cmp: function to compare
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
