#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The numbet to check sign
 * Return: 1 if greater and 0 if equal and -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
