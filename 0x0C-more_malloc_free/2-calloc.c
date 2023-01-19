#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: size, in bytes, of each element.
 * Return: a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, *qtr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = qtr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*ptr++ = 0;

	return (qtr);
}
