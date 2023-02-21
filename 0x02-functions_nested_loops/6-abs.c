#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: An integer as input
 * Return: absolute value of an integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
