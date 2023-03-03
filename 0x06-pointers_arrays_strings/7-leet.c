#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: a string.
 * Return: s.
*/
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = code[j];
			j++;
		}
		i++;
	}
	return (s);
}
