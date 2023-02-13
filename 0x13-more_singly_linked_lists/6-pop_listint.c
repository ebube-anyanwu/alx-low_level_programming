#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that  deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: the head of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL)
		return (0);

	else
	{
		tmp = *head;
		*head = (*head)->next;
		data = tmp->n;
		free(tmp);
	}

	return (data);
}
