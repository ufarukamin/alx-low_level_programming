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
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
}
