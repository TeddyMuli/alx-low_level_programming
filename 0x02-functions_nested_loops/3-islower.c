#include "main.h"
/**
 * _islower - _islower
 * return: 0
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
		else
		{
			return (0);
		}
		i++;
	}
}
