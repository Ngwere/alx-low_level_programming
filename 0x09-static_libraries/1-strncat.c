#include "main.h"

/**
 * *_strncat - concatenate strings
 * @dest: destination string
 * @src: source string
 * @n: number of string to concat
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	for (m = 0; dest[m] != '\0'; m++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[m + i] = src[i];
	dest[m + i] = '\0';
	return (dest);
}
