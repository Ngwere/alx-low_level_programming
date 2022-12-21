#include "main.h"

/**
 * *_strncpy - copy strings
 * @dest: destination string
 * @src: source string
 * @n: number of string to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
