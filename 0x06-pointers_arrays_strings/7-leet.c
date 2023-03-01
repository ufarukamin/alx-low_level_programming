#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: a string.
 * Return: s.
*/
char *leet(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] == 'a' || s[i] == 'z')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
	}
	return (s);
}
