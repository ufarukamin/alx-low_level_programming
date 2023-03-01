#include "main.h"

/**
 * string_toupper -  changes all lowercase
 * letters of a string to uppercase.
 * @s: a string.
 * Return: s.
*/
char *string_toupper(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
