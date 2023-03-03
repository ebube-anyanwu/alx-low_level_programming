#include "main.h"
#include <stddef.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: a pointer
 * Return: int
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 * @b: pointer to string representation of binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int value = 0;
	unsigned int pow = 1;
	int i;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] >= '0' && b[i] <= '1')
		{
			if (b[i] == '1')
				value += pow;
			pow *= 2;
		}

		else
			return (0);
	}

	return (value);
}
