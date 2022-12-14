#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Print ten numbers w/o char
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
