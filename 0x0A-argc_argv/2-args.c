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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
