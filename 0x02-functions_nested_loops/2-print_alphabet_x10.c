#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: void.
 */
void print_alphabet_x10(void)
{	int c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
