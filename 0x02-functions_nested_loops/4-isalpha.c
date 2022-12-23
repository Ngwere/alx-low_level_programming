#include "main.h"

/**
 * _isalpha - print lower case or not
 * @c: var to checkt
 * Return: 1 if letter otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
