#include "main.h"

/**
 * _isupper - check upper cases
 * @c: value to check
 * Return: 1 if successful or 0 otherwise
 */
int _isupper(int c)
{
	char l;
	int result;

	for (l = "A"; l <= "Z"; l++)
	{
		if (c != l)
		{
			result = 0;
		}
		else
		{
			result = 1;
			break;
		}
	}
	return (result);
}
