#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: the array
 * @size: size of the array
 * @int: the integer
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0 || size = 0)
		return (-1);
	else
		while (i < size)
		{
		if (cmp(array[i]))
			return (i);

		i++;
		}
}
