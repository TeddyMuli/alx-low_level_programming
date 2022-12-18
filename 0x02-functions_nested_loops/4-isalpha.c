#include "main.h"
/**
 * _isalpha - Entry point
 * Description: checks for alphabetic character.
 * @c: interger
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z' || y <= 'Z')
	{
		if (c == x || c == y)
		{
			return (1);
		x++;
		y++;
		}
		return (0);
	}
}
