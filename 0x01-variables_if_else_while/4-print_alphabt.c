#include <stdio.h>

/**
 * main - Prints alphabet letters in lowercase except q and e
 *
 * Return: Should always return 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar(10);
	return (0);
}
