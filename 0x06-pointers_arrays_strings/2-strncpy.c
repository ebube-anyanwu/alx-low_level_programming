#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @n: number of bytes
 * @src: a pointer to string
 * @dest: destination
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	for ( ; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
