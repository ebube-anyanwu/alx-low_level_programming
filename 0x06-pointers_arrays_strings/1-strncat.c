#include "main.h"

/**
 * _strncat - a function function is similar to the _strcat function,
 * except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: a pointer to string
 * @dest: destination
 * @n: number of bytes to use from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;
	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[len + index] = src[index];
	dest[len + index] = '\0';
	return (dest);
}
