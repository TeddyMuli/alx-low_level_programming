#include "main.h"

/**
 * *_memset - entry
 * @s: char
 * @b: char
 * @n:int
 * return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[n] = b;

		i++;
	}
	return (s);
}
