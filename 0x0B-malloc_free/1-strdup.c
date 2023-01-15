#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to s
 */

char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (*str == '\0')
		return (0);
	for (len = 0; str[len] != '\0'; len++)
		;

	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (0);

	else
	{
		for (i = 0; i < len; i++)
			s[i] = str[i];
		s[i] = str[i];

		return (s);
	}
}
