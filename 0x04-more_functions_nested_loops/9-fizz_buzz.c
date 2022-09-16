#include <stdio.h>
#include "main.h"

/**
 * main - print "Fizz" for multiples of 3, "Buzz" for
 * multiples of 5 and "FizzBuzz" for multiples of 15
 *
 * Description: This program prints numbers 1 to 100 and
 * print Fizz for multiples of 3, Buzz for multiples of 5
 * and FizzBuzz for multiples of 3 and 5.
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1, i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d\n", i);
	}
	printf("\n");
	return (0);
}
