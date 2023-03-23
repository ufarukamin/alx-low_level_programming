#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: an integer
 * @b: an integer
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract b from a
 * @a: an integer
 * @b: an integer
 * Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a by b
 * @a: an integer
 * @b: an integer
 * Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: an integer
 * @b: an integer
 * Return: a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the reminder of division of a by b
 * @a: an integer
 * @b: an integer
 * Return: a mod b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
