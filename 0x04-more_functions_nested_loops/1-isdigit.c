#include "main.h"
#include <stdio.h>

/**
 * _isdigit- Entry point
 * @c: integer
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c<= 9)
	{
		return (1);
	}
	return (0);
}
