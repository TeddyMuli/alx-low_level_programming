#include "main.h"
#include <math.h>

/**
 * factorial - entry point
 * @n: integer
 * Return: int
 */

int factorial(int n)
{
	int r = n;

	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else 
		r *= factorial(n - 1);
	return (r);
}
