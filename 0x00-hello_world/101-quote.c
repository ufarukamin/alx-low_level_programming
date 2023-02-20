#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints exactly and that piece of art is useful - Dora Korpar,
 * to the standard error.
 * Return: one
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		      59, 1, stderr);
	return (1);
}
