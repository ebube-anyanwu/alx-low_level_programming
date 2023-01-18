#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: destination
 * @s2: source
 * @n: number of bytes from s2 to be concatenated to s1.
 * Return: a pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	new_str = malloc(sizeof(char) * (len + 1 +  n));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	new_str[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';

	return (new_str);
}
