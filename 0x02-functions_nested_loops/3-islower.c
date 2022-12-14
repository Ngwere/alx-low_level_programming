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
	int n;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
			result = 1;
		else
			for (n = 0; n < 10; n++)
			{
				if (c % 10 == n)
					result = 1;
			}
		result = 0;
	}
	return (result);
}
