#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: a string.
 * Return: Nothing.
*/
void rev_string(char *s)
{
	int length = 0, i, j;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0, j = (length - 1); i < (length / 2); i++, j--)
	{
		temp = *(s + i);
		s[i] = *(s + j);
		s[j] = temp;
	}
}
