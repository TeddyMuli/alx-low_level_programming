#include "main.h"
#include <math.h>

/**
 * factorial - entry point
 * @n: integer
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
	 return (1);
	}
	else 
	        return pow(factorial(n), factorial(n - 1));
}
