#include <stdio.h>
#include <stdarg.h>
#include  "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: a function that returns the sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_lists;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (sum);
	}

	va_start(arg_lists, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_lists, int);
	}
	va_end(arg_lists);
	return (sum);
}
