#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: a string that separate list of parameters
 * @n: number of arguments
 * Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_lists;
	unsigned int i;
	char *current_string;

	va_start(arg_lists, n);
	for (i = 0; i < n; i++)
	{
		current_string = va_arg(arg_lists, char *);
		if (current_string != NULL)
		{
			printf("%s", current_string);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	va_end(arg_lists);
	printf("\n");
}
