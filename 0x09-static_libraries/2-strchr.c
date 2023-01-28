#include <stdio.h>

/**
 * _strchr - locate char in string
 * @s: sting
 * @c: char to check
 * Return: pointer to the first occurence of char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}

	if (c == '\0')
		return (s);
	return (NULL);
}
