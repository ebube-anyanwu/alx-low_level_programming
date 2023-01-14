#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: memory area being pointed to
 * @c: specific char
 * Return: pointer to s
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (0);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (0);

	else
	{
		for (i = 0; i < size; i++)
			s[i] = c;
		return (s);
	}
}
