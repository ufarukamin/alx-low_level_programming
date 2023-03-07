#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the chessboard.
 * @a: a 2x2 array
 * @size: size of a
 * Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int i, sumMajor = 0, sumMinor = 0;

	for (i = 0; i < size; i++)
	{
		sumMajor += a[(size + 1) * i];
		sumMinor += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sumMajor, sumMinor);
}
