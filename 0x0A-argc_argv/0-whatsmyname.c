#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * Return: main
 */

int main(int argc, char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);	
}
