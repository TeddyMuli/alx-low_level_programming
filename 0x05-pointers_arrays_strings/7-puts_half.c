#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 * Return: void
 */

void puts_half(char *str)

{
	int num = 0, i;

	while (str[num] != '\0')
		num++;
	if (num + 1 % 2 != '0')
		i = (num - 1) / 2;
	else
		i = (num / 2);
	i++;

	for (num = i; str[num] != '\0'; num++)
	_putchar(str[num]);
	_putchar('\n');

}
