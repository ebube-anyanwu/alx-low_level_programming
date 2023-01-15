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

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;

	s = malloc(len + 1 * sizeof(char));

	if (s == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < len; i++)
			s[i] = str[i];
		s[i] = str[i];

		return (s);
	}
}
