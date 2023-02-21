#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: An input character or letter
 * * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
