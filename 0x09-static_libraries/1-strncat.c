#include "main.h"

/**
 * _strncat - concatenates two strings.
 * it will use at most n bytes from src.
 * @dest: a string to append to.
 * @src: a string to append.
 * @n: length of characters to append.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, length = 0, length2 = 0, count;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[length2] != '\0')
	{
		length2++;
	}
	for (i = length, j = 0, count = 1;
			(j <= length2 && count <= n); i++, j++, count++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
