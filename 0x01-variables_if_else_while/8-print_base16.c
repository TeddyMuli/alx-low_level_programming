#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Hexadecimal
 * Return: Always 0 (Succes)
*/

int main(void)
{
	int x = '0';
	int y = 'A';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'F')
	{
		putchar(tolower(x));
		x++;
	}
	putchar('\n');
	return (0);
}

