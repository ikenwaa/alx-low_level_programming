#include <stdio.h>

/**
 * main - Prints the letters of the alphabet in reverse
 *
 * Return: is always 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
