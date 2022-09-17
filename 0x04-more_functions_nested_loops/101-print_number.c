#include "main.h"

/**
 * print_number - prints a number on the terminal
 * @n: number to print
 * Return: 0 always
 */

void print_number(int n)
{
	unsigned int num;

	if (n <= 0)
	{
		num = -n;
		_putchar(45);
	}
	else
		num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
