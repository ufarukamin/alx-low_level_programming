#include "main.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring.
 * @s: string s
 * @accept: string accept
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
