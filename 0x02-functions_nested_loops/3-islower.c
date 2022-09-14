#include "main.h"

/**
 * _islower - Checks for lowercase characaters
 * @c: character param
 *
 * Description: Returns 1 if char is lowercase
 * and 0 if otherwise.
 *
 * Return: 0 always success
 */

int _islower(int c)
{
	return (c > 'a' && c < 'z');
}
