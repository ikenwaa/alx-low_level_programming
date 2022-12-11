#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: pointer to the head of node
 */

void free_dlistint(dlistint_t **head)
{
	if (!head)
		return (NULL);

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
