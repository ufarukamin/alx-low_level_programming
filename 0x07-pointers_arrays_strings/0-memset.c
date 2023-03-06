#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: string s
 * @b: byte char
 * @n: number bytes to fill
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n >= 1)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
