#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal.
 * If n is 0 or less, the function should only print new line.
 * @n: is the number of times the character \ should be printed.
 * Return: Nothing
*/
void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (j = 1; j <= (i - 1); j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
