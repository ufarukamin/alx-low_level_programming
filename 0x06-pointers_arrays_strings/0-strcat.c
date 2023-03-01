#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: a string to append to.
 * @src: a string to append.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, length = 0, length2 = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[length2] != '\0')
	{
		length2++;
	}
	for (i = length, j = 0; j <= length2; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
