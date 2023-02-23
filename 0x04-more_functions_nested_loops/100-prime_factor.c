#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime
 * factor of the number 612852475143, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long largest = 1, n = 612852475143, prime_check = 1;

	while (n > 1)
	{
		for (prime_check = 2; prime_check <= n; prime_check++)
		{
			if ((n % prime_check) == 0)
			{
				n = (n / prime_check);
				if (prime_check > largest)
				{
					largest = prime_check;
				}
				break;
			}
		}
	}
	printf("%lu\n", largest);
	return (0);
}
