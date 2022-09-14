#include "main.h"

/**
 * _isalpha - Checks for uppercase alphabet
 * @c: character param
 *
 * Description: Returns 1 if c is uppercase or lowercase
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	char low = 'a';
	char upp = 'A';

	while (low <= 'z' && upp <= 'Z')
		return (1);
	else
		return (0);
}
