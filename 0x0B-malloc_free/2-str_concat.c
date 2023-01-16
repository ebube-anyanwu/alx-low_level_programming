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
	int i, len, index = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	index = i;

	for (i = 0; s2[i] != '\0'; i++)
	{
		s[index] = s2[i];
		index++;
	}
	s[index] = '\0';
	return (s);
}
