#include "main.h"

/**
 * puts2 - print half on new lineto stdout
 *@str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0';)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
