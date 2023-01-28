#include "main.h"

/**
 * _strlen - check size of str
 * @s: char to check size
 * Return: 0 for success
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
