#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
*/
int main(void)
{
	int i = 0, j;

	while (i <= 98)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
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
