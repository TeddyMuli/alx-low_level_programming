#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Show all ten numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 0;

	while (x <= 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
