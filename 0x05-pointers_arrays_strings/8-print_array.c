#include "main.h"                                                              

/**                                                                             * print_array- Entry point                                                 
 * @a: interger                                                               
 * @n: intereger
 * Description: array
 * Return: void
 */
void print_array(int *a, int n)                                                
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		printf("%d, " a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
