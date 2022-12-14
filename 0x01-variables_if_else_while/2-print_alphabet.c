#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * main - Entry point
 * Description: Program to print alpahbet in lowercase
 * Return: Alaways 0 (success)
*/

int main(void)
{
	for (int x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
