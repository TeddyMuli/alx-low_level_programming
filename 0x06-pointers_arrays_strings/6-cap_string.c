#include "main.h"

/**
 * cap_string- entry
 *Return: char
 */

char *cap_string(char *s)
{
	int x = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
			x = 1;
		} else if (x && s[i] >= 'a'&& s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			x = 0;
		}
		i++;
	}
	return (s);
}
