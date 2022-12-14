#include "main.h"

/**
 * _islower - print lower case or not
 * @c: the char to be checked
 * Return: 1 if successful otherwise 0
 */
int _islower(int c)
{
	char l;
	int result;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c != l)
			result = 0;
		else
			result = 1;
	}
	return (result);
}
