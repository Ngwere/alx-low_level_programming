#include "main.h"

/**
 * _puts - print string to stdout
 *@str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\0');
}
