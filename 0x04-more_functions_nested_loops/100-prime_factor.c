#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	long int n = 612852475143;
	long int i = 0;
	long int l;

	while (i < n)
	{
		if (n % i != 0)
		{
			l = i;
		}
	}
	printf("%ld", l);
	return (0);
}
