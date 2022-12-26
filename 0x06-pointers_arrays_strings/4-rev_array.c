#include "main.h"

/**
 * reverse_array- reverse
 * @a: int
 * @n: number
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int temp = a[i];
		    a[i] = a[n - i - 1];
	        a[n - i - 1] = temp;
		i++;
	}

}
