#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		putchar(tolower(x));
		putchar(toupper(x));
		x++;
	}
	putchar('\n');
	return (0);
}
