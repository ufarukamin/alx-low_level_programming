#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: range start.
 * @max: range end.
 * Return: a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *s;
	int i, j;

	if (min > max)
		return (NULL);
	s = (int *)malloc(sizeof(int *) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		*(s + j) = i;
	return (s);
}
