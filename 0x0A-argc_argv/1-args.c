#include <stdio.h>

/**
 * main - prints number of arguments.
 * @argc: number of arguments.
 * @argv: array of strings of arguments.
 * Return: 0.
*/
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", (argc - 1));
	return (0);
}
