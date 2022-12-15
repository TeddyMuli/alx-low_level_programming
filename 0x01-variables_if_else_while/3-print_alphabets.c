#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')
	{
		putchar(x);
		y++;
	}
	putchar('\n');
	return (0);
}
