#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: integer number
 * Return: 1 if sign is +, -1 if sign -s - and 0 if number is = 0.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
