#include "main.h"

/**
**_memcpy - entry point
*@src:char
*@dest:dest
*@n:int
*return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
