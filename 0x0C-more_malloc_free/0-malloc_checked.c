#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: an int value as size.
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
