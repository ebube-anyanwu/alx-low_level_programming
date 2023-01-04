#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @src: a pointer to string
 * @dest: destination
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index++])
		len++;
	for (index = 0; src[index] != '\0'; index++)
		dest[len + index] = src[index];
	dest[len + index] = '\0';
	return (dest);
}
