#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a
 * given index to 0
 * @n: input
 * @index: index
 *
 * Return: 1 if success, -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;
	return (1);
}
