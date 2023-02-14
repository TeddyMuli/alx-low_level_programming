#include "main.h"
#include <stdio.h>
#include <stddef.h>
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (c > a && c > b)
	{
		largest = c;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}

	return (largest);
}

int main() {
   int a = 3, b = 4, c = 6;
   int d = largest_number(a,b,c);
    printf("the largest number is %d\n", d);
    return 0;
}