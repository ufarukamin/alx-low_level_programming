#include "function_pointers.h"

/**
 * array_iterator - a function that prints a name
 * @array: a string
 * @size: size of array
 * @action: a pointer to a function
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
