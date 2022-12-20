#include "main.h"
#include <stdio.h>

/**
 * _isupper- Entry point
 * @c: char
 * Return: int
 */

int _isupper(int c)
{
	int x = 'a';
	int y = 'A';

	while (y <= 'Z')
	{
		if (c == y)
			return (1);
		y++;
	}
	while (x <= 'z')
	{
		if (c == x)
			return(0);
		x++;
	}
}
