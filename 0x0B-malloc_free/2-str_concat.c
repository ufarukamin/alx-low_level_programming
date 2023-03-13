#include "main.h"
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
 * str_concat - a function that concatenates two strings.
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @s1: string
 * @s2: string
 * Return: a pointer to the duplicated string
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int i, index;
	unsigned int length1, length2;

	if (s1 == NULL)
		s1 = "";
	length1 = _strlen(s1);
	if (s2 == NULL)
		s2 = "";
	length2 = _strlen(s2);
	array = malloc(sizeof(char) * (length1 + length2 + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0, index = 0; i < length1; i++, index++)
	{
		array[index] = s1[i];
	}
	for (i = 0; i < length2; i++, index++)
	{
		array[index] = s2[i];
	}
	array[index] = '\0';
	return (array);
}
