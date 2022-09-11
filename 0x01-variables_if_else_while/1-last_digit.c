#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit from a random number.
 *
 * Description: This program will print the last digit from
 * a randomly generated number and compare it with 5, 0 and 6.
 *
 * Return: Should return 0 always
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
