#include "unistd.h"

/**
 * _putchar - prints a char c to stdout
 * @c: character to print
 * Return: 0 for success, -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
