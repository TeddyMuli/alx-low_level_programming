#include "main.h"

/**
 * more_numbers- entry point
 * Return: void
 */
void more_numbers(void)
{
int x = '0';

for (int i = 0; i <= 9; i++)
{
	while (x <= "13")
	{
		_putchar(x);
	}
	_putchar('\n');
}
}
