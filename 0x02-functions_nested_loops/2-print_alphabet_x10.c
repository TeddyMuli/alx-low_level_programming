#include "main.h"
/**
 * main - Entry point
 * Description: print alphabet 10x
 * Return void
 */
void print_alphabet_x10(void)
{
	int x = 'a'

	for (int i = 0; i <= 10; i++)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
	}
}
