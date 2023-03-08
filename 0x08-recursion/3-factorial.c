#include "main.h"

/**
 * factorial - finds factorial of a number.
 * @n: a number.
 * Return: factorial of a.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
