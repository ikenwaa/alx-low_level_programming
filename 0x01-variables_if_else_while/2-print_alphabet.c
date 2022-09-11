#include <stdio.h>

/**
 * main - prints letters of alphabet in lower case
 *
 * Return: Should awlays return 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar(10);
		c++;
	}
	return (0);
}
