#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * If size is 0 or less, the function should only print new line.
 * @size: is the number of times the character \ should be printed.
 * Return: Nothing
*/
void print_square(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
