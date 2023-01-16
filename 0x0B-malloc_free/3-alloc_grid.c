#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: as state above
 */

int **alloc_grid(int width, int height)
{
	int **grid_array;
	int h = 0, w = 0, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_array = malloc(sizeof(int *) * height);

	if (grid_array == NULL)
		return (NULL);

	for ( ; i < height; i++)
	{
		grid_array[i] = malloc(sizeof(int) * width);
		if (grid_array[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(grid_array[i]);
			free(grid_array);
			return (NULL);
		}
	}

	while (h < height)
	{
		while (w < width)
		{
			grid_array[h][w] = 0;
			w++;
		}
		h++;
	}

	return (grid_array);
}
