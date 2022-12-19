#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen- Entry point
 * Description: print len of str
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
			length++;
	}
	return (length);
}
