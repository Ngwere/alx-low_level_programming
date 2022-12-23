#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @n: The number to check
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
