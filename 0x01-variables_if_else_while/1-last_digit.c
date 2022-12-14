#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Program to find the last digit of a variable
 *
 * Return: Always 0 (Succes)
*/

int main(void)
{
	int n,digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n,digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n,digit);
	else (digit < 6 && n != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n,digit);

	return (0);
}
