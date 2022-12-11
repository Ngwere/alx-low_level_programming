#include <stdio.h>

/**
 * main - print a - z /- {q and e}
 * Return: 0 for success
 */
int main(void)
{
	char lx;

	for (lx = 'a'; lx <= 'z'; lx++)
	{
		if (lx != 'e' && lx != 'q')
			putchar(lx);
	}

	putchar('\n');

	return (0);
}
