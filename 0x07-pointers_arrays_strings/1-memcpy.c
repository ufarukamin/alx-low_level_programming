#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area
 * src to memory area dest
 * @dest: string s
 * @src: byte char
 * @n: number bytes to copy
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n >= 1)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
