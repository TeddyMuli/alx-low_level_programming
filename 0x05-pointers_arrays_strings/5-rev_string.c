#include "main.h"
/**
 * rev_string- Entry point
 * Description: reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int x = 0, y, z;
		char c;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		c = s[y];
		s[y] = s[z];
		s[z] = c;
	}
}
