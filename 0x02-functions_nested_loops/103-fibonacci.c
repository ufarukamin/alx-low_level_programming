#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: zero
 */
int main(void)
{
	int i;
	long n1 = 1, n2 = 2, n3, sum = 0;

	for (i = 2; i < 50; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		if ((n3 % 2) == 0 && n3 <= 4000000)
		{
			sum += n3;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
