#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: a pointer
 * @b: another pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
