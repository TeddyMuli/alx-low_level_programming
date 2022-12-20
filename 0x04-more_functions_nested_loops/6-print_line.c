#include "main.h"

/**
 * print_line- entry point
 * @n: integer
 * Return: int
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
