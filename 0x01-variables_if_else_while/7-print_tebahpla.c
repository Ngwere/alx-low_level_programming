#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
