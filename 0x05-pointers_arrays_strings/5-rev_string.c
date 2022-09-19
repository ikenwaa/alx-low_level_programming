#include "main.h"

/**
 * rev_string - Reverses a string and prints to stdout
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(*s + i);
	}
	_putchar('\n');
}
