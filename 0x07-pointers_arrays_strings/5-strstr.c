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
* _strstr - finds the first occurrence of the substring.
* @haystack: string s
* @needle: substring accept
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int length_haystack = _strlen(haystack), i, index;
	int length_needle = _strlen(needle), j;

	for (i = 0; i <= (length_haystack - length_needle); i++)
	{
		index = i;
		for (j = 0, index = i; j < length_needle; j++, index++)
		{
			if (haystack[index] == needle[j])
			{
				if (j == (length_needle - 1))
					return (haystack + i);
				continue;
			}
			break;
		}
	}
	return ('\0');
}
