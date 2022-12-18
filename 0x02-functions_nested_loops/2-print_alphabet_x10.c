#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 * return: void
 */
void print_alphabet_x10(void)
{
	int x;
	int i = 1;

	while (i <= 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

	_putchar('\n');

	i++;
	}
}
