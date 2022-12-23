#include "main.h"

/**
 * _puts - a function that prints a string followed by a new line.
 * @str: a pointer to string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
