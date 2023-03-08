#include "main.h"

/**
 * _strlen - finds length of a string.
 * @s: a string.
 * Return: length of s.
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * pallindrome_checker - check if s is a pallindrone.
 * @s: a string.
 * @length: length of s.
 * Return: 1 if s is a pallindrone, otherwise 0.
*/
int pallindrome_checker(char *s, int length)
{
	if (length <= 0)
	{
		return (1);
	}
	else if (*s == *(s + length - 1))
	{
		return (pallindrome_checker(s + 1, length - 2));
	}
	return (0);
}

/**
* is_palindrome -  a function that returns 1 if
* a string is a palindrome and 0 if not.
* @s: a string.
* Return: 1 if s is a pallindrone, otherwise 0.
*/
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
		return (1);
	return (pallindrome_checker(s, length));
}
