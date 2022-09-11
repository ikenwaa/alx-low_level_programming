#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0
 *
 * Return: is always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar(10);
	return (0);
}
