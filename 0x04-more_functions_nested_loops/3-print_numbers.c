#include "main.h"

/**
 * print_numbers - print from 0 - 9
 * Retrun: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar('0' + n);
	_putchar('\n');
}
