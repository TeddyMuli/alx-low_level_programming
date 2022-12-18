#include "main.h"
/**
 * print_sign - Entry point
 * Description: prints the sign of a number
 * @n: interger
 * Return: 1 if +, 0 if 0 ,-1 if -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
