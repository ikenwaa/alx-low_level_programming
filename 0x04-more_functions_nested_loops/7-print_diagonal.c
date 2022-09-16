#include "main.h"

/**
 * print_diagonal - draws a digonal line on the terminal
 * @n: number of times "\" should be printed
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;

		while (j < i)
		{
			_putchar(32);
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (i <= 0)
		_putchar(10);
}
