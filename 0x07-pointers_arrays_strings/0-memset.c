#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: memory area being pointed to
 * @b: constant byte
 * @n: bnumber of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
