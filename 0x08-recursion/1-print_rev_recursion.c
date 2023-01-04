#include "main.h"

/**
 *  _print_rev_recursion - print a string by reverse
 *
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i;

	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
