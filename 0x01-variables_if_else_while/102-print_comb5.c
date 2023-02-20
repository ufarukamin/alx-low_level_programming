#include <stdio.h>
#include <ctype.h>

/**
* main - prints all possible different combinations of three digits.
* Return: zero
*/
int main(void)
{
	int i = '0';
	int j, k;

	while (i <= '7')
	{
		for (j = i + 1; j <= '8'; j++)
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
				{
					k++;
					continue;
				}
				putchar(',');
				putchar(' ');
				k++;
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
