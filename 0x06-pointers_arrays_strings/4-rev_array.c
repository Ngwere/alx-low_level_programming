#include "main.h"

/**
 * reverse_array - reverse numbers
 * @a: number
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = (n / 2); i > 0; i--)
		a[(n / 2)- i] = a[i];
}
