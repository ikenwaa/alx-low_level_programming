#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int i = 1, j, k = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{

				if (j < k)
					_putchar(32);
				else
					_putchar(35);
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
