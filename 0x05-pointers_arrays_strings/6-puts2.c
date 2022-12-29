#include "main.h"

/**
 * puts2 - a function that prints a string followed by a new line.
 * @str: a pointer to string
 * Return: void
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
