#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - Entry point
 * Description: print
 * Return: 0
 * @str: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

