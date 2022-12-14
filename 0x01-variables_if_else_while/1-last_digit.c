#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Program to find the last digit of a variable
 *
 * Return: Always (0)
*/

int main(void)
{
	int n,d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;

	printf("Last digit of %i is %i ", n,d);
	if (d > 5)
		printf("and is greater than 5\n");
	else if (d == 0)
		printf("and is 0\n");
	else (d < 6 && n != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
