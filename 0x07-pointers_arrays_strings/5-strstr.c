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
	char *haystack_copy = needle, *needle_copy = haystack;

	while (*haystack)
	{
		haystack_copy = haystack;
		needle = needle_copy;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = haystack_copy + 1;
	}
	return ('\0');
}
