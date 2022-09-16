#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: number of "_"
 */

void print_line(int n)
{
	int i;

	while (i < n && n > i)
	{
		_putchar(95);
		i++;
	}
	_putchar(10);
}
