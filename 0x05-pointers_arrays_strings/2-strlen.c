#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen- Entry point
 * Description: print len of str
 * Return: int
 */
int _strlen(char *s)
{
	int len = sizeof(*s) / sizeof(*(s+1));
	printf("%d\n", len);
}
