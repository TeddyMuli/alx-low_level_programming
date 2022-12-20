#include "main.h"
#include <stdio.h>

/**
 * _isupper- Entry point
 * @c: char
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
