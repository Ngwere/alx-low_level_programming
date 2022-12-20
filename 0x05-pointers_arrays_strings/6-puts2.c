#include "main.h"

/**
 * _puts2 - print string to stdout
 *@str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_	putchar('\n');
}
