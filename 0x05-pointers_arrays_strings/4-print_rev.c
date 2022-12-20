#include "main.h"

/**
 * print_rev - print string to stdout
 *@s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int n;
	int c;

	for (n = 0; s[n] != '\0'; n++)
		;
	for (c = n - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
