#include "main.h"

/**
 * *_strchr - entry point
 * @s: char
 * @c: char
 * return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c) return (char *) s;
		s++;
	}
	return NULL;
}
