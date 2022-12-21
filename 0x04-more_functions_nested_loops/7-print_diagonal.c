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

	if (n <= 0)
		putchar('\n');
	while (i < n)
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
}
