#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i = 1, j = 1;

		while (i <= size)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
