#include "main.h"

/**
 * _strlen_recursion- entry point
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
