#include "main.h"

/**
 * puts2 - print half on new lineto stdout
 *@str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int c;
	int m;
	int i = 0;

	for (c = 0; str[c] != '\0'; c++)
		;
	m = c / 2;
	while (i <= m)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
