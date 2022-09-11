#include <stdio.h>

/**
 * main - prints all the numbers of base16 in lowercase
 *
 * Return: is always 0
 */

int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
