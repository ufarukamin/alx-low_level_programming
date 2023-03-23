#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of args
 * @argv: array arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *ptr;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)&main;
	bytes = atoi(argv[1]);
	i = 0;
	while (i < bytes - 1)
	{
		printf("%02hhx ", ptr[i]);
		i++;
	}
	printf("%02hhx\n", ptr[i]);
	return (0);
}
