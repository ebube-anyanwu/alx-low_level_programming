#include "main.h"

/**
 * print_line - a function that prints a straight line
 * followed by a new line.
 * @n: number of dashes
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
