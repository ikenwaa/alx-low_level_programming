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
		int i, j;

		for (i = 1; i <= size; i++)
		{
			j = 1;

			while (j < size)
			{
				_putchar(32);
				j++;
			}

			while (j <= i)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
		}
	}
}
