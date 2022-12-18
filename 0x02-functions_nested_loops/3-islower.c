#include "main.h"
/**
 * _islower - Entry point
 * Description: checks if character is lowercase
 * @c: the interger it gets
 * Return: 1 if true , 0 if false
 */
int _islower(int c)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
