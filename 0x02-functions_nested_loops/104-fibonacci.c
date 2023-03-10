#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: zero
 */
int main(void)
{
	int i;
	double n1 = 1, n2 = 2, n3;

	printf("1, 2, ");
	for (i = 2; i < 98; i++)
	{
		n3 = n1 + n2;
		printf("%.0f", n3);
		n1 = n2;
		n2 = n3;
		if (i == (98 - 1))
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
	return (0);
}
