#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * If n is 0 or less, the function should only print new line.
 * @n: is the number of times the character _ should be printed.
 * Return: Nothing
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
