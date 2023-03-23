#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: a string that separate list of parameters
 * @n: number of arguments
 * Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_lists;
	unsigned int i;

	if (n == 0)
		return;
	va_start(arg_lists, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_lists, int));
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	va_end(arg_lists);
	printf("\n");
}
