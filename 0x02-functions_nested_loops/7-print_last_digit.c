#include "main.h"

/**
 * print_last_digit - prints last digit of n.
 * @n: An integer number.
 * Return: absolute value of an integer.
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (-1 * n) % 10;
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + '0');
	return (last);
}
