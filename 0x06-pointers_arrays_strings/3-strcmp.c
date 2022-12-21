#include "main.h"

/**
 * *_strcmp - compare strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0 always
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; *(s1 + c) && *(s2 + c) && (s1[c] == s2[c]); c++)
		;
	if (*(s1 + c) == *(s2 + c))
		return (0);
	else
		return (s1[c] - s2[c]);
}
