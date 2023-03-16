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
 * words_c - count words
 * @str: a string
 * Return: number of words.
 */
int words_c(char *str)
{
	int i, count = 0, length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] != ' ' && ((str[i + 1] == ' '
						&& i + 1 < length) || i == (length - 1)))
		{
			count++;
		}
	}
	return (count);
}

/**
 * set_strings - put word to a string location
 * @str: a string
 * @start: starting position
 * @end: last position
 * Return: array, NULL if str == NULL or str == ""
 */
char *set_strings(char *str, int start, int end)
{
	char *array = (char *)malloc(sizeof(char) * (end - start) + 1);
	int i, j;

	if (array == NULL)
		return (NULL);
	for (i = 0, j = start; j < end; i++, j++)
	{
		array[i] = str[j];
	}
	array[i] = '\0';
	return (array);
}

/**
 * strtow - returns a pointer to an array of strings (words)
 * 2 dimensional array of integers.
 * @str: a string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **array;
	int i, j, words, length, word_start, word_end, index = 0;

	if (str == NULL)
		return (NULL);
	length = _strlen(str);
	if (length < 1)
		return (NULL);
	words = words_c(str);
	if (words < 1)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * words + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		if (((i == 0 && str[i] != ' ') || ((i != 0)
						&& str[i] != ' ' && str[i - 1] == ' ')) && i < length)
		{
			j = word_start = i;
			while (j < length)
			{
				if (str[j] != ' ' && ((j + 1 < length &&
								str[j + 1] == ' ') || j == (length - 1)))
				{
					break;
				}
				j++;
			}
			i =  word_end = j + 1;
			if (index < words)
			{
				array[index] = set_strings(str, word_start, word_end);
				index++;
			}
		}
	}
	array[index] = NULL;
	return (array);
}
