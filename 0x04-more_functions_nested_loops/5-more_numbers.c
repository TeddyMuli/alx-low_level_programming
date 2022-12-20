#include "main.h"

/**
 * more_numbers- entry point
 * Return: void
 */
void more_numbers(void)
{
int x = 0;
char i, j;

while (x < 10)
{
	for (i = 0; i <= 14; i++)
	{
		i = j;
		if (i > 9)
		{
			_putchar('1');
			j = i % 10;
		}
		_putchar('0' + j);
	}
	_putchar('\n');
	x++;
}

}
