#include "main.h"

/**
 * _strncpy - copies a strings.
 * it will use at most n bytes from src
 * @dest: array copying to.
 * @src: array copying from.
 * @n: length of characters to coppy.
 * Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, length = 0, count;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0, count = 1; (i <= length && count <= n); i++, count++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
