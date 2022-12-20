#include "main.h"

/**
 * print_array - print the first n of array
 *@a: array
 *@n: number to stop at
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		_putchar(a[c]);
		if (c == n)
			break;
	}
	_putchar('\n');
}
