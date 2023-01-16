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
	while (argc--)
		printf ("%d\n", argc++);
	return (0);
}
