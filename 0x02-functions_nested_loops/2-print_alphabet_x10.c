#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
		}
		count++;
		_putchar('\n');
	}
}
