#include <stdio.h>
#include <ctype.h>

/**
* main - prints all possible different combinations of two digits.
* Return: zero
*/
int main(void)
{
	int i = '0';
	int j;

	while (i <= '8')
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
