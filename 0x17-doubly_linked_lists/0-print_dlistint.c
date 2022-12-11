#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t el = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        el ++;
    }
    return el;
}