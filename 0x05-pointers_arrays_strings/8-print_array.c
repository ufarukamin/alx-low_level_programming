#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: a string.
 * @n: how many element to print.
 * Return: Nothing.
*/
void print_array(int *a, int n)
{
	int i, count, length = 0;

	while (a[length] != '\0')
	{
		length++;
	}
	for (i = 0, count = 1; (count <= n && i < length); i++, count++)
	{
		printf("%d", a[i]);
		if (count == n)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
