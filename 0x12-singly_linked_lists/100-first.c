#include <stdio.h>

/* A constructors */
void beforeMainPrint(void) __attribute__((constructor));
/**
* beforeMainPrint - prints before the main function is executed.
* Return: Nothing
*/
void beforeMainPrint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
