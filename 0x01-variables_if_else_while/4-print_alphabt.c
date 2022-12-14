#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Alphabet w/o q and e
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		if (x!= 'E' && x! = 'Q')
		{
			putchar(tolower(x));
		}
		else
		{
		}
	x++;
	}
	putchar('\n');
	return (0);
}
