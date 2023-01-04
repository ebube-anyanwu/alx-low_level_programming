#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: 0 if strings are equal.
 * >0 if the first non-matching character in s1 is greater
 * (in ASCII) than that of s2.
 * <0 if the first non-matching character in str1 is greater
 * (in ASCII) than that of str2.
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;

	for ( ; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
			break;
	}

	return (s1[index] - s2[index]);
}
