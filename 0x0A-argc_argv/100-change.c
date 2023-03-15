#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _count_coins - return minimium coins.
* @cents: cent
* Return: minimium coins.
*/
int _count_coins(int cents)
{
	int count = 0;

	while (cents > 0)
	{
		count++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	return (count);
}

/**
* main - prints the minimum number of coins
* to make change for an amount of money.
* @argc: number of arguments.
* @argv: array of strings of arguments.
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int cents, count;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		if (cents < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			count = _count_coins(cents);
			printf("%d\n", count);
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
