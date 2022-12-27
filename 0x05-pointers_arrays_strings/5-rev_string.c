#include "main.h"

/**
 * rev_string - a function that prints a string followed by a new line.
 * @s: a pointer to string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, len = 0;

	while (s[len])
		len++;

	char z[len];
	char ch;
	int l = len - 1;

	for (i = l, j = 0; i >= 0, j <= l; i--, j++)
	{
		ch = s[i];
		z[j] = ch;
	}

	z[j] = '\0';

	for (i = 0; i < j; i++)
		s[i] = z[i];
	s[i] = '\0';
}
