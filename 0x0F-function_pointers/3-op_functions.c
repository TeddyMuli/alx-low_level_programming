#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - entry point
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - entry point
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - entry point
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mul
 * @a: int
 * @b: int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error/n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - entry point
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
