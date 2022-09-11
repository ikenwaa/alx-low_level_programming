#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Checks if an int is positive or negative.
 *
 * Description: This program will check if a random number
 * is positive or negative or zero.
 *
 * Return: 0 always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
