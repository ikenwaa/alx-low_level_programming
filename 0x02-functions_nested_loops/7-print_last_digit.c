#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: int to get last digit from
 *
 * Return: Will return the last digit of n
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
	}

	i = n % 10;

	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
