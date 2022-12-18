#include "main.h"

/**
 * print_diagonal - diagonal art
 * @n: the number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
}
