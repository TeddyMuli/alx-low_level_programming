#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: print
 * Return: Always 0
*/

int _putchar(char c)
{
	return (write(1 ,&c, 1));
}
