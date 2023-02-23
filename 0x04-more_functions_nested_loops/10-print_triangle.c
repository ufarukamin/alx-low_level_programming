#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * If n is 0 or less, the function should only print new line.
 * @size: is the number of times the character \ should be printed.
 * Return: Nothing
*/
void print_triangle(int size)
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
				if (j <= (size - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			i++;
		}
	}
}
