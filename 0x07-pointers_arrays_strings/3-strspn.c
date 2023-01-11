#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
* _strspn - entry
* @s: string
* @accept: string
* return: int
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
unsigned int len1 = strlen(s);
unsigned int len2 = strlen(accept);
unsigned int i = 0;
unsigned int j = 0;

while (i < len1)
{
	bool match = false;
	while (j < len2)
	{
		if (accept[j] == s[i])
		{
			match = true;
			break;
		}
	if (!match) break;
	else length++;
	j++
	}
i++;
}
}
