#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: integer param
 *
 * Description: Returns + if n >, - if n < 0
 * and 0 if zero
 *
 * Return: 0 always for success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
