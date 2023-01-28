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

	for (i =  (n - 1) / 2; i > 0; i--)
		a[n - 1 - i] = a[i];
}
