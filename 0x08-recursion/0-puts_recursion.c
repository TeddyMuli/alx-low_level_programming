#include "main.h"

/**
 * _puts_recursion - entry
 * @s: character
 * Return: void
 */

void _puts_recursion(char *s)
{
    if(*s[i] != '\0')
    {
    	_putchar(*s);
	_puts_recursion(s + 1);
    }
    else
    {
    _putchar('\n');
    }
}
