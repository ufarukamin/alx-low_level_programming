#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string s
 * @accept: string accept
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return  (count);
			}
			j++;
		}
		i++;
	}
	return  (count);
}
