#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0 always
 */

int main(void)
{
	long n = 612852475143;
	long div = 2;
	long lg_prm_num = 0;

	while (n != 1)
	{
		if (n % div == 0)
		{
			n /= div;
			lg_prm_num = div;
		}
		div += 1;
	}
	printf("%ld\n", lg_prm_num);
	return (0);
}
