#include "main.h"

/**
 * *_strcpy - entry point
 *@src: source
 *@dest: destination
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; dest[n] != '\0'; n++)
	{
		if (src[n] != '\0')
			dest = '\0';
		else
			dest[n] = src[n];
	}
	return (dest);
}
