#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: smallest integer in the array
 * @max: largest integer in the array.
 * Return: a pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *int_array, i;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * ((max - min) + 1));
	if (int_array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		int_array[i] = min++;
	return (int_array);
}
