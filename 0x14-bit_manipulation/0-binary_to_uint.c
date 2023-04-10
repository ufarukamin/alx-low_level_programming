#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned integer
 * @b: A binary string
 * Return: unsigned integer number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index_value = 1, int_num = 0;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	len--;
	while (len > -1)
	{
		if (b[len] == '1')
			int_num += (1 * index_value);
		index_value *= 2;
		len = len - 1;
	}
	return (int_num);
}
