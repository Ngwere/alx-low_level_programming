#include <stdio.h>

/**
 * main - main entry
 * Return: 0 always
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 9; i++)
	{
		for (n = i+1; n <= 9; n++)
		{
			putchar((i % 10) + '0');
			putchar((n % 10) + '0');
			if  (n != 9)
				putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
			

