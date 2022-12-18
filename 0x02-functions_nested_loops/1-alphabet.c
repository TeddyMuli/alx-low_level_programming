#include "main.h"

/**
 * main - Entry point
 * Description: print_alphabet
 * Return: void
 */

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');

}
