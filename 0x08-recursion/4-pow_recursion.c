#include "main.h"
#include <math.h>

/**
 * _pow_recursion - entry point
 * @x: integer
 * @y: integer
 * return: int
 */

int  _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
	{
	        return -1;
	}
        else if (y == 0)
	{
	            return 1;
        }
	else
        {
		pow *= _pow_recursion(x, y-1);
	}
	return (pow);
}
