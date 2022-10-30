#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned integer
 * @b: binary number to convert
 * Return: converted number or 0 if b is NULL
 * or has chars other than 0 0r 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, base_2;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_2 = 1; len >= 0; len--, base_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			i += base_2;
	}
	return (i);
}
