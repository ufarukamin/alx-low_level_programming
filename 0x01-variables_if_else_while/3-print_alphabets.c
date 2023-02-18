#include <stdio.h>
#include <ctype.h>

/**
* main - print a - z
* Return: zero
*/
int main(void)
{
	int  c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'z')
	{
		putchar(toupper(c));
		c++;
	}
	putchar('\n');
	return (0);
}
