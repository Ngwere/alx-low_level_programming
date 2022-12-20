#include "main.h"

/**
* swap_int - change variable
* @a: pointer to the variable to be changed
* @b: second
* Return: void
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
