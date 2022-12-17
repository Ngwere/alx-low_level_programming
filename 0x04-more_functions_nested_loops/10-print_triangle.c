#include "main.h"

/**
 * print_triangle - print triangle height size
 * @size: the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = size; i > 0; i--)
	{
		j = i - i;
		for (; j > 0; j--)
		{
			_putchar(' ');
		}
		k = size - j;
		for (; k > 0; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
