#include "main.h"
/**
 * _islower - _islower
 * return: 0
 */
int _islower(int c)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
