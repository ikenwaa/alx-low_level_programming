#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Description: this program will print a combination of three
 * numbers, separated by ',' and must be different.
 *
 * Return: is always 0 if true and1 if otherwise.
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
