#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: array
 * Return: a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *array;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	array = malloc(sizeof(char) * (length + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
