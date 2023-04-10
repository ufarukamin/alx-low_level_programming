#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number to flip.
 * @m: number to flip n to.
 * Return: number of bits you would need
 * to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check_op = n ^ m, count = 0;

	while (check_op > 0)
	{
		count += (check_op & 1);
		check_op >>= 1;
	}
	return (count);
}
