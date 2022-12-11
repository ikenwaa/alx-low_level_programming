#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a
 * 		dlistint_t list.
 * @head: pointer to pointer of head of list
 * @n: the node to add
 *
 * Return: address of the new element or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}
