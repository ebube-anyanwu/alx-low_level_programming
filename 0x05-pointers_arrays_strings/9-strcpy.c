#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: a pointer to string
 * @dest: destination
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';
	return (dest);
}
