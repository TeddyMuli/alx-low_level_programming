#include "main.h"
#include <stdlib.h>

/**
 * *create_array - entry
 * @size: int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;
	
	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
		arr[size] = c;

	return (arr);
}
