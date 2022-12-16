#include "main.h"

/**
 * print_diagonal - diagonal art
 * @n: the number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i < n - 1; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
