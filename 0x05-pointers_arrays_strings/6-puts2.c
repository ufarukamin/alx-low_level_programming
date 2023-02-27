#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: a string.
 * Return: Nothing.
*/
void puts2(char *str)
{
	int i, c, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i = i + 2)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
}
