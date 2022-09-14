#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase ff'd by a new line
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
