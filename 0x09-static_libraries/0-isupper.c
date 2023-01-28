#include "main.h"

/**
 * _isupper - check upper cases
 * @c: value to check
 * Return: 1 if successful or 0 otherwise
 */
int _isupper(int c)
{
	char n;
	int r;

	for (n = 'A'; n <= 'Z'; n++)
	{
		if (c != n)
		{
			r = 0;
		}
		else
		{
			r = 1;
			break;
		}
	}
	return (r);
}

