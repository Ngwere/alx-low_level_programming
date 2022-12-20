#include "main.h"

/**
 * print_rev - print string to stdout
 *@s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int n = _strlen(s);
	int c;

	for (c = n; c > 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
