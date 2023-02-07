#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * list_len - a function that returns the number of elements
 * of a list_t list
 * @h: pointer to a struct list_t
 * Return: number of nodes
 *
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
