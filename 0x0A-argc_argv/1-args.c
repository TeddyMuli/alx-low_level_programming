#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * @argc: member
 * @argv: member
 * Return: main
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		
		printf("%d\n", i - 1);
	}
	return (0);
}
