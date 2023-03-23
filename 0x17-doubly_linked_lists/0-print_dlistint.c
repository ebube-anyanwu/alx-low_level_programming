#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	
	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
