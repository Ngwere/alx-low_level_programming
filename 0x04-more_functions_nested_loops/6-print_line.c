#include "main.h"

/**
 * print_line - line on the terminal
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 0)
			;
		else
			_putchar('_');
	}
	_putchar('\n');
}
