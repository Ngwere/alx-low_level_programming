#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is zero\n", n, l);
	else
		printf("Last digit of %d is %d and is less than 5\n", n, l);
	return (0);

}
