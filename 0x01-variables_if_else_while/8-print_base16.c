#include <stdio.h>
#include <ctype.h>

/**
* main - print 0 - f of Hexadecimal
* Return: zero
*/
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
