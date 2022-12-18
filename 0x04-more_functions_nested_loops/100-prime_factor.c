#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	long n = 612852475143;
	long i = 1;

	for (i = 2; i < n; i++)
	  {
	    while (n % i == 0)
	      {
		n = n % i;
	      }
	  }
	printf("%lu\n", n);
	return (0);
}
