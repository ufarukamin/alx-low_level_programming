#include "main.h"
#include <stdio.h>

/**
* _strstr - finds the first occurrence of the substring.
* @haystack: string s
* @needle: substring accept
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;
		while (*search == *haystack && *haystack != 0 && *search != 0)
		{
			haystack++;
			search++;
		}
		if (*search == 0)
			return (start);
		haystack = start + 1;
	}
	return (0);
}
