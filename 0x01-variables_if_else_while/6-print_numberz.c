#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0
 *
 * Return: is always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}
