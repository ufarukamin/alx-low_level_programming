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
	int i, length = 0, length2 = 0, count;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[length2] != '\0')
	{
		length2++;
	}
	if (length2 >= n)
	{
		for (i = 0, count = 1; (i < length && count <= n); i++, count++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		count = 1;
		for (i = 0; (i < length2); i++)
		{
			dest[i] = src[i];
			count++;
		}
		while (count <= n)
		{
			dest[i] = '\0';
			count++;
			i++;
		}
	}
	return (dest);
}
