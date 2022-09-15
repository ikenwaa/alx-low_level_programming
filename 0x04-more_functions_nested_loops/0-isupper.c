#include "main.h"

/**
 * _isupper - checks if a character is in uppercase
 * @c: character to check
 * Return: 0 if uppercase, 1 if otherwise
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
