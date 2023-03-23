#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 * @array: a string.
 * @size: size of array
 * @cmp: a pointer to a function that compares
 * Return: the index of the first element for which
 * the cmp function does not return 0 if no element matches, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
