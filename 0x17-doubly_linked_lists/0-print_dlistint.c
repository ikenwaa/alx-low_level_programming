#include "lists.h"

/**
 * print_dlistint - Prints all elements in dlistint_t list
 * 
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t el = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        el++;
    }
    return (el);
}