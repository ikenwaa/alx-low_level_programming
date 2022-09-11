#include <stdio.h>

/**
 * main - Prints alphabet letters in lowercase, then uppercase
 *
 * Return: Should always return 0
 */

int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar(10);
	return (0);
}
