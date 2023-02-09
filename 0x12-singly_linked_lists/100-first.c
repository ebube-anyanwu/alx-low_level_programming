#include <stdio.h>

void beforeMain(void) __attribute__ ((constructor));

/**
 * beforeMain - a function that prints some stuff before main
 */

void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
