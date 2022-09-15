#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: number of "_"
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i < n; i++)
		{
			_putchar(95);
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
