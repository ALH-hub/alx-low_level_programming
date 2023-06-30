#include <stdio.h>

void my_constructor() __attribute__((constructor));

/**
 * my_constructor - print the provided statement automatically
 */

void my_constructor()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
