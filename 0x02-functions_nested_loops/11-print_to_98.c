#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: Print numbers between n and 98
 * @n: interger
 * Return: int
 */
void print_to_98(int n)
{
	if (n < '98')
	{
		while (n < 98)
		{
	 	printf("%d, ", n);
		n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
		printf("%d, ", n);
		n--;
		}
	}
}
