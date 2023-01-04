#include "main.h"

/**
 * _strlen_recursion - print lenght of string
 *
 * @s: string to print
 *
 * Return: lnght of @s
 */
int _strlen_recursion(char *s);
{
	int c;

	c = 0;

	if (*s)
	{
		c += 1;
		_strlen_recursion(s + 1);
	}
	return (c);
}
