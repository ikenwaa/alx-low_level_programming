#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory
 * @b: byte
 * @n: integer
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
