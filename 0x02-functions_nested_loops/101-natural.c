#include <stdio.h>

/**
 * main - prints natural numbers below 1024
 * that are multiples of 3 and 5
 *
 * Return: returns the sum and 0 (success)
 */

int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
