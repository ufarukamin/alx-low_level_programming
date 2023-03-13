#include <stdlib.h>
#include "main.h"

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
 * argstostr - a function that concatenates
 * all the arguments of your program.
 * @ac: number of arguments
 * @av: array of strings
 * Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, index = 0, allLegth = 0, length;

	if (ac == 1 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		allLegth += _strlen(av[i]) + 1;
	array = malloc(sizeof(char) * (allLegth + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		length = _strlen(av[i]);
		for (j = 0; j < length; j++, index++)
		{
			array[index] = av[i][j];
		}
		array[index] = '\n';
		index++;
	}
	array[index] = '\0';
	return (array);
}
