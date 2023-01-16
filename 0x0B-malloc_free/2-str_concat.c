#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to s
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, len = 0, index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		s[index] = s1[i];
		index++;
	}

	for (i = 0; s2[i]; i++)
	{
		s[index] = s2[i];
		index++;
	}
	s[index] = '\0';
	return (s);
}
