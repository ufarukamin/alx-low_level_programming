#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: a string.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: a string.
 * @s2: a string.
 * @n: s2 chars to concatenates.
 * Return: point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int l1 = 0, l2 = 0, totalLength, i, index = 0;

	if (s1 == NULL)
		s1 = "";
	l1 = _strlen(s1);
	if (s2 == NULL)
		s2 = "";
	l2 = _strlen(s2);
	if (l1 + l2 <= 0)
		return (NULL);
	if (n >= l2)
	{
		totalLength = l1 + l2;
		n = l2;
	}
	else
	{
		totalLength = l1 + n;
	}
	array = (char *)malloc(sizeof(char *) * (totalLength + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < l1; i++, index++)
		array[index] = s1[i];
	for (i = 0; i < n; i++, index++)
		array[index] = s2[i];
	array[index] = '\0';
	return (array);
}
