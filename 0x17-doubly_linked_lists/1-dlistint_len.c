#include "lists.h"

/**
 * dlistint_len - Prints the nember of elements in a list
 *
 * @h: pointer to head of list
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t el = 0;

	while (h)
	{
		h = h->next;
		el++;
	}
	return (el);
}
