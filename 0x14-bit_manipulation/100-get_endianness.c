nclude "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get endianness(void)
{
	unsigned int num = 1;
	char *c;

	c = (char *) &num;

	return ((int)*c);
}
