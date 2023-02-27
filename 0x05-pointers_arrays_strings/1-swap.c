#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to an int as parameter.
 * @b: a pointer to an int as parameter.
 * Return: Nothing.
*/
void swap_int(int *a, int *b)
{
	int copy = *a;

	*a = *b;
	*b = copy;
}
