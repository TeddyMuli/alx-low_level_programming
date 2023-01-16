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
	for(int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
