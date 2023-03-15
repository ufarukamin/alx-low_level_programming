#include "main.h"

/**
 * _strcmp - compares two strings.
 * * @s1: array copying to.
 * @s2: array copying from.
 * Return: 0 if thesame, otherwise the difference.
*/
int _strcmp(char *s1, char *s2)
{
	int i, diff, length = 0, length2 = 0;

	while (s1[length] != '\0')
	{
		length++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	for (i = 0; (i < length && i < length2); i++)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
	}
	return (0);
}
