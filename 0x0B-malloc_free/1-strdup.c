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
	int i;

	if (*str == '\0')
		return (0);

	s = malloc(sizeof str);

	if (s == NULL)
		return (0);

	else
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
		s[i] = str[i];

		return (s);
	}
}
