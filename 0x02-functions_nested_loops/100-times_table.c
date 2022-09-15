#include "main.h"

/**
 * print_times_table - prints the multiplication table up to 15
 * @n: integer parameter
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);

				k = i * j;

				if (j == 0)
					_putchar(k + 48);
				else if (k < 10 && j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(k + 48);
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else if (k >= 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar((k / 100) + 48);
					_putchar(((k /10) % 10) + 48);
					_putchar((k % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
