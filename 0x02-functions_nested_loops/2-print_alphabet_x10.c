#include "main.h"

/**
 * print_alphabet_x10(void)- a function that prints the alphabet, in
 * lowercase, followed by a new line.
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	int line;
	char i;

	for (line = 1; line <= 10; line++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
