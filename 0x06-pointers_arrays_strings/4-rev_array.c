#include "main.h"

/**
 * reverse_array - reverses an array of int.
 * @a: an array of int.
 * @n: is the number of elements of the array.
 * Return: Nothing.
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < (n / 2); i++, j--)
	{
		temp = *(a + i);
		a[i] = *(a + j);
		a[j] = temp;
	}
}
