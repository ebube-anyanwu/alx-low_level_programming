#include "main.h"

/**
 * print_rev - a function that prints a string followed by a new line.
 * @str: a pointer to string
 * Return: void
 */

void print_rev(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
		_putchar(str[j]);
	_putchar('\n');
}
