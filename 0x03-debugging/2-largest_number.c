#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: ineteger
 * @b: integer
 * @c: integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (c > a && c > b)
	{
		largest = c;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}

	return (largest);
}
