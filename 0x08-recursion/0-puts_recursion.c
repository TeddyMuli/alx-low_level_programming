#include "main.h"

/**
 * _puts_recursion - entry
 * @s: character
 * Return: void
 */

void _puts_recursion(char *s)
{
    int i = 0;

    while(s[i])
    {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');
}
