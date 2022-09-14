#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Description - The function returns every minute of the day
 *starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int i = 0, j = 0;
	while (i <= 23)
	{
		while (j <= 59)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
