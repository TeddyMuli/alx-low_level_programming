#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - Entry point
 * Description: Numbers
 * Return: Always 0
*/

int main(void)
{
	int x = '0';
	while (x <= '9')
	{
		if (x != '9')
		{
			putchar(x);
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
