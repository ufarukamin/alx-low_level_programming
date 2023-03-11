#include <stdio.h>

/**
 * _strlength - returns the length of a string.
 * @s: a string.
 * Return: the length of a string.
 */
int _strlength(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * char_val - conver digit char to it's equevalent number.
 * @c: a digit char.
 * Return: char equevalent number if it is a digit, otherwis 0.
 */
int char_val(char c)
{
	int num;

	switch (c)
	{
		case '0':
			num = 0;
			break;
		case '1':
			num = 1;
			break;
		case '2':
			num = 2;
			break;
		case '3':
			num = 3;
			break;
		case '4':
			num = 4;
			break;
		case '5':
			num = 5;
			break;
		case '6':
			num = 6;
			break;
		case '7':
			num = 7;
			break;
		case '8':
			num = 8;
			break;
		case '9':
			num = 9;
			break;
		default:
			num = 0;
			break;
	}
	return (num);
}

/**
* _atoi_helper - return exact place number.
* @c: a digit char.
* @places: number of zeroes eg. 2000 - 3 zeroes
* Return: exact place number.
*/
int _atoi_helper(char c, int places)
{
	int num = char_val(c);
	int i;

	for (i = 1; i <= places; i++)
	{
		num = num * 10;
	}
	return (num);
}

/**
* _check_return_num - check if a string is a number
* convert the string to an integer.
* @s: a string.
* Return: integer if a string is a number, otherwise -1.
*/
int _check_return_num(char *s)
{
	int length = _strlength(s), i, j;
	int i_char, j_char, countPlace = 0, number = 0;
	char _num_sign = ' ';

	for (i = 0; i < length; i++)
	{
		countPlace = 0;
		i_char = s[i];
		if (i_char >= '0' && i_char <= '9')
		{
			if (i > 0 && s[i - 1] == '-')
			{
				_num_sign = '-';
			}
			for (j = i + 1; j < length; j++)
			{
				j_char = s[j];
				if (j_char >= '0' && j_char <= '9')
				{
					countPlace++;
				}
				else
				{
					return (-1);
				}
			}
			number += _atoi_helper(s[i], countPlace);
			if (countPlace == 0)
			{
				break;
			}
		}
		else
		{
			return (-1);
		}
	}
	if (_num_sign == '-')
		return (-1 * number);
	return (number);
}

/**
* main - a program that multiplies two numbers as
* arguments it receives.
* @argc: number of arguments.
* @argv: array of strings of arguments.
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			num = _check_return_num(argv[i]);
			if (num < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += num;
			}
		}
		printf("%d\n", (sum));
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}
