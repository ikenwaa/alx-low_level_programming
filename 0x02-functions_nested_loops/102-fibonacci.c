#include <stdio.h>

/**
 * main -prints the first 50 Fibonacci numbers
 * starting with 1 and 2.
 *
 * Return: 0 always
 */

int main(void)
{
	int i = 1, j = 2, count = 2, k;

	printf("%d, ", i);

	while (count <= 50)
	{
		if (count == 50)
			printf("%d\n", j);
		else
			printf("%d, ", j);

		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
