#include "main.h"
/**
 * main - Entry point
 * Description : Print _putchar
 * Return: 0
*/
int main(void)
{
	char name[] = "_putchar\n";
	int i = 0;

	while (name[i] != '\0')
	{
		char c = name[i];

		_putchar(c);
		i++;
	}
	return (0);
}
