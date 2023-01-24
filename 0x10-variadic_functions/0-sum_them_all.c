#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 * @n: integer
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	if (n == 0)
		return (0);
	else
	{
	va_start(list, n);
	unsigned int i = 0, sum = 0;

	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
	}
}
