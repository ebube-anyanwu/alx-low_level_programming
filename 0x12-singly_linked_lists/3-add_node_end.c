#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - a function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to the first element
 * @str: string to pass
 * Return: new node
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *last;
	unsigned int i;
	char *new_str = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; new_str[i];)
		i++;

	new->str = new_str;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
