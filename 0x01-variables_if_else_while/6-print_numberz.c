#include <stdio.h>

/**
 * main - print 0 - 9 using putchar
 * Return: 0 for success
 */
int main(void)
{
	int n;

	n = 0;
	for (; n < 10; n++)
		putchar("%d", n);
	putchar('\n');
	return (0);
}
