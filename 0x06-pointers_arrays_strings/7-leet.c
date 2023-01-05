#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: a pointer to string
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '^', 'E', 'A', '^', '^', 'T'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == leet[j] || (s[i] -32) == leet[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
