#include "main.h"

/**
 * _print_rev_recursion- entry
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
int i = 0;

while(s[i])
{
    i++;
}
while(i--)
{
    _putchar(s[i]);
}
_putchar('\n');s
}
