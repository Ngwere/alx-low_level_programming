#include "main.h"

/**
 * puts_half - print half on new lineto stdout
 *@str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int c;
	int m;

	for (c = 0; str[c] != '\0'; c++)
		;
	m = c / 2;
	if (c % 2 == 1)
		m++;
	while (m < c)
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
