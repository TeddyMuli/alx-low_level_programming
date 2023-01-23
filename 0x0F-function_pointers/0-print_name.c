#include "main.h"

/**
 * @name: mome
 * @f: somethung
 * print_name - entry oiny
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
