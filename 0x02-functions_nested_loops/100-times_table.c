#include "main.h"

/**
 * print_times_table - prints the multiplication table up to 15
 * @n: integer parameter
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 && n < 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar(44); /* ASCII for "," */
				_putchar(32); /* ASCII for space */

				k = i* j;

				if (k <= 99)
					_putchar(32);

				if (k >= 100)
				{
					_putchar((k / 100) + 48);
					_putchar((k /10) % 10 + 48);
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + 48);
				}
			}
		_putchar('\n');
		}
	}
}	
