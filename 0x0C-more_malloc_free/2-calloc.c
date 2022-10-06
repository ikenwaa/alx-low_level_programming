#include "main.h"

/**
 * calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to the allocated memory,
 * NULL if nmemb or size is equal to 0 and,
 * NULL if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(sizeof(nmemb * size));

	if (s == 0)
		return NULL;

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}
