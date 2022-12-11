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
		printf("%d", n);
	printf("\n");
	return (0);
}
