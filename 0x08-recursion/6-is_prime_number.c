#include "main.h"

/**
 * check_prime - count numbers divisible by n.
 * @n: a number.
 * @divisor: a number dividing n.
 * Return: how many numbers divisible by n.
*/
int check_prime(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return  (1 + check_prime(n, divisor + 1));
	}
	return (0 + check_prime(n, divisor + 1));
}

/**
* is_prime_number - a function that returns 1 if the input
* integer is a prime number, otherwise return 0.
* @n: a number.
* Return: 1 if the input integer is a prime number,
* otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n > 1)
	{
		if (check_prime(n, 1) == 2)
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
