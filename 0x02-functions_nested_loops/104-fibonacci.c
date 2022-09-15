#include <stdio.h>

/**
 * main - finds and prints the first 98 fib numbers
 * starting with 1 and 2
 *
 * Return: always 0
 */

int main(void)
{
	int count = 2;
	long int i, j, k;

	i = 1;
	j = i + 1;
	k = i + j;

	printf("%lu, ", i);
	printf("%lu, ", j);

	while (count < 98)
	{
		count++;
		printf("%lu", k);
		i = j;
		j = k;
		k = i + j;
		if (count < 98)
			printf(", ");
	}
	printf("\n");
}
