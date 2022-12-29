#include "main.h"

/**
 * puts_half - a function that prints a string followed by a new line.
 * @str: a pointer to string
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
