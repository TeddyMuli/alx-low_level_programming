#include "main.h"

/**
 * print_diagonal- entry point
 * Return: void
 * @n: integer
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n && n > 0)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
