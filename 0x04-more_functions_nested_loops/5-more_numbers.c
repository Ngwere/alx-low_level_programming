#include "main.h"

/**
 * more_numbers - 10x 0 - 14
 * Return: no return 
 */
void more_numbers(void)
{
	int n;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar('0' + n);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
