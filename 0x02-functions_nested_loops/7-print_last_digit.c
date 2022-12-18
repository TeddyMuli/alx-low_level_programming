#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number.
 * @i: interger
 * Return: int
 */
int print_last_digit(int i)
{
	int last = i % 10;

	if (i < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
