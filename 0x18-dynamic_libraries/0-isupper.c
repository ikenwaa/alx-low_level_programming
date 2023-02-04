#include "main.h"

/**
 * _isupper - checks if a character is in uppercase
 * @c: character to check
 * Return: 0 if uppercase, 1 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
