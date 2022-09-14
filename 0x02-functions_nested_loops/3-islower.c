#include "main.h"

/**
 * islower - Checks for lowercase characaters
 *
 * Description: Returns 1 if char is lowercase
 * and 0 if otherwise.
 *
 * Returns: Success
 */

int _islower(int c)
{
	return (c > 'a' && c < 'z');
}
