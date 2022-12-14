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
	char x = '0';
	char y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(tolower(x));
		x++;
	}
	putchar('\n');
	return (0);
}

