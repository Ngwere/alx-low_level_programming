#include "main.h"

/**
 * rev_string - rev string
 *@str: string to print
 * Return: void
 */
void rev_string(char *s)
{
	int c;
	char rev;
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	for (c = n; c > 0; c--)
		rev[c] = s[n-c];
	*s = rev;
}
