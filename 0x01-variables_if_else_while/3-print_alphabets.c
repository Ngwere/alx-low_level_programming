#include <stdio.h>

/**
 * main - print a - zA - Z
 * Return: 0 for succuss
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putChar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putChar(letter);
	}
	putChar('\n');

	return (0);
}
