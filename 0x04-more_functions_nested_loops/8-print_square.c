#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size == 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
