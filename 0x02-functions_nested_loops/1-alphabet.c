#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Return: void
 */

void print_alphabet(void) /*Description: print alphabet*/
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');

}
