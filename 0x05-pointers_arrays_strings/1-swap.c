#include <stdio.h>
#include <stdlib.h>
/**
 * swap_int-Entry point
 * Description: Swaps 2 numbers
 * @a: intereger
 * @b: interger
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
