#include "main.h"

/**
 * _sqrt_recursion - Returns the square root of a num
 * @n: number
 * Return: 0 always
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - Get the naturaral square root of a number
 * @n: number to calculate
 * @i: iterate
 * Return: square root
 */

int square_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root(n, n + 1));
}
