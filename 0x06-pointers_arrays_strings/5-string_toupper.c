#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: a pointer to string
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 97 && s[index] <= 122)
			s[index] -= 32;
		index++;
	}

	return (s);
}
