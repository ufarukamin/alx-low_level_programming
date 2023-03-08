#include "main.h"

/**
 * check_root - check the roots of n.
 * @n: a number.
 * @root: a number as root.
 * Return: root of n.
*/
int check_root(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return  (-1);
	}
	return (check_root(n, root + 1));
}

/**
 * _sqrt_recursion - find the roots of n.
 * @n: a number.
 * Return: root of n.
*/
int _sqrt_recursion(int n)
{
	if (n >= 0)
	{
		return (check_root(n, 0));
	}
	return  (-1);
}
