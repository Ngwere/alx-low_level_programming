#include <stdio.h>

/**
 * main - main entry
 * Return: 0 always
 */
int main(void)
{
	int i, n, t;

	for (i = 0; i < 8; i++)
	{
		for (n = i + 1; n < 9; n++)
		{
			for (t = n + 1; t <= 9; t++)
			{
				putchar((i % 10) + '0');
				putchar((n % 10) + '0');
				putchar((t % 10) + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
