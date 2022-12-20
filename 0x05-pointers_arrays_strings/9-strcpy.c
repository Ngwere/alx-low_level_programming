#include "main.h"

/**
 * *_strcpy - entry point
 *@src: source
 *@dest: destination
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char *begin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';
	return (begin);
}
