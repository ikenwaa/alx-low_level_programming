#include "main.h"

/**
 * print_square - prints # to the terminal
 * @size: indicates size of square (#)
 */

void print_square(int size)
{
	int i = 0, j;

	while (i < size && size > 0)
	{
		j = 0;

		while (j < size)
		{
			_putchar(35);
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
