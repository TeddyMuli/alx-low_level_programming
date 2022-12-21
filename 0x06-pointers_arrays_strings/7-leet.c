#include "main.h"

/**
 * leet- entry
 * @s: character
 * Return: char
 */

char *leet(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		char c = s[i];
		if (c == 'a' || c == 'A') {
			s[i] = '4';
		} else if (c == 'e' || c == 'E') {
		      s[i] = '3';
		} else if (c == 'i' || c == 'I') {
		      s[i] = '1';
		} else if (c == 'o' || c == 'O') {
		      s[i] = '0';
		} else if (c == 's' || c == 'S') {
		      s[i] = '5';
		} else if (c == 't' || c == 'T') {
		      s[i] = '7';
		}
		i++;
	}
}
