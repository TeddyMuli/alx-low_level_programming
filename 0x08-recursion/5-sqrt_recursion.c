#include "main.h"
#include <math.h>

/**
 * _pow_recursion - entry point
 * @n: integer
 * return: int
 */

int findsqrt(int num, int root)
{
if ((root * root) == num)
		return (root);
if (root == num / 2)
		return (-1);
return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: If n has a natural square root - the natural square root of n.
 */

int _sqrt_recursion(int n)
{
	int root = 0;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
