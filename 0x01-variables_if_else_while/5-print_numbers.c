#include <stdio.h>
#include <ctype.h>

/**
* main - print 0 - 9
* Return: zero
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
