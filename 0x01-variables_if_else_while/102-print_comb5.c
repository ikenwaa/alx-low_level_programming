#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Description: the number range from 0 to 99 and the combination
 * of two numbers is separated by a ',' and ' '.
 *
 * Return: is always 0 if true and 1 if otherwise.
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
