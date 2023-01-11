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
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}
	return (s);
}
