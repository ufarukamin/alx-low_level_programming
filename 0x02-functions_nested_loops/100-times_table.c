#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: An integer number.
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				print_helper(result, j);

				if (j == n)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

/**
 * print_helper - prints formatted results.
 * @result: An integer number.
 * @j: An integer number.
 * Return: nothing
 */
void print_helper(int result, int j)
{
	if (result <= 9)
	{
		if (j == 0)
		{
			_putchar(result + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(result + '0');
		}
	}
	else if (result <= 99)
	{
		_putchar(' ');
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	else
	{
		_putchar((result / 100) + '0');
		_putchar(((result / 10) % 10) + '0');
		_putchar((result % 10) + '0');
	}
}
