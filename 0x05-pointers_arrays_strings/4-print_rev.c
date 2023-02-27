#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: a string.
 * Return: Nothing.
*/
void print_rev(char *s)
{
	int length = 0;
	int j, c;

	while (s[length] != '\0')
	{
		length++;
	}

	for (j = (length - 1); j >= 0; j--)
	{
		c = s[j];
		_putchar(c);
	}
	_putchar('\n');
}
