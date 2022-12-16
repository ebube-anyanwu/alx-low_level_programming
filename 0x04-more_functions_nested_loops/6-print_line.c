#include "main.h"

/**
 * print_line - a function that prints a straight line
 * followed by a new line.
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
