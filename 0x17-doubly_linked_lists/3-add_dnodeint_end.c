#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlist.
 *
 * @head: pointer to the head of node
 * @n: node data
 * Return: address of the element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
		*head = new;

	new->prev = h;

	return (new);
}
