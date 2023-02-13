#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that sets the head to NULL
 * @head: the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	head = NULL;
}
