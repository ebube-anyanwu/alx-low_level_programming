#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: a pointer to string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (index == 0)
		{
			if (s[index] >= 'a' && s[index] <= 'z')
				s[index] -= 32;
		}

		if (s[index] == ' ' ||
		s[index] == '\t' ||
		s[index] == '\n' ||
		s[index] == ',' ||
		s[index] == ';' ||
		s[index] == '.' ||
		s[index] == '!' ||
		s[index] == '?' ||
		s[index] == '"' ||
		s[index] == '(' ||
		s[index] == ')' ||
		s[index] == '{' ||
		s[index] == '}')
		{
			index++;
			if (s[index] >= 97 && s[index] <= 122)
				s[index] -= 32;
			else
				continue;
		}

		index++;
	}
	return (s);
}
