#include "main.h"
#include "stdio.h"

/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line.
 * @a: array of integers
 * @n: number of times to print elements in array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	for (i = 0, i < n; i++)
	{
		printf("%d", *(a + 0));
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
