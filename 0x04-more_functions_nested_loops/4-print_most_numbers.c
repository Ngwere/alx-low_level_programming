#include "main.h"

/**
 * print_most_numbers - 0 to 9 except 2 and 4
 * Return: no return void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			;
		else
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
