#include <stdio.h>
#include <ctype.h>

/**
* main - print a - z
* Return: zero
*/
int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
