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

	for (i = n; i > 0; i--)
		a[n - i] = a[i];
}
