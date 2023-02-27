#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: a string.
 * Return: Nothing.
*/
void puts_half(char *str)
{
	int i, n, c, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		for (i = n + 1; i < length; i++)
		{
			c = str[i];
			_putchar(c);
		}
	}
	else
	{
		n = length / 2;
		for (i = n; i < length; i++)
		{
			c = str[i];
			_putchar(c);
		}
	}
	_putchar('\n');
}
