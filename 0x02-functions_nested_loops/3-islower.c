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
		i++;
	}
	return (0);
}
