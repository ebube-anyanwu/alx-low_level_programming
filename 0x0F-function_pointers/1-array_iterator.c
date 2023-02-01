#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: The array
 * @size: size of array
 * @action: pointer to function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL || size == 0)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
