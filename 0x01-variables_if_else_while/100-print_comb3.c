#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits.
 *
 * Description: Number combinations must be separated by ,
 *
 * Return: is always 0 if true, 1 if otherwise.
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
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
