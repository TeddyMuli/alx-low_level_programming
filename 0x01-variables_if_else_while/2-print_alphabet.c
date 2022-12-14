#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Program to print alpahbet in lowercase
 * Return: Always 0 (success)
*/

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		x++;
	}
	putchar('\n');
	return (0);
}
