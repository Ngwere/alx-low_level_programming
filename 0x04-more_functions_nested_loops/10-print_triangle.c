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
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			n = i - 1;
			for (j = n; j > 0; j--)
			{
				_putchar(' ');
			}
			k = size - n;
			for (; k > 0; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
