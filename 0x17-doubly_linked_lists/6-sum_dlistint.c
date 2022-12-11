#include "lists.h"

/**
 * sum_dlistint - Gets the sum of all data(n) in a dlist
 * @head: head of the dlist
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum)
}
