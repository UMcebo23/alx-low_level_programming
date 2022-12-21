#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: function that prints every minute
 * of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int h0, h1;
	int m0, m1;

	for (h0 = 0 ; h0 <= 2 ; h0++)
	{
		for (m0 = 0 ; m0 < 6 ; m0++)
		{
			for (m1 = 0 ; m1 < 10 ; m1++)
			{
				_putchar('0' + h0);
				_putchar('0' + h1);
				_putchar(':');
				_putchar('0' + m0);
				_putchar('0' + m1);
				_putchar('\n');
				if (h0 == 2 && h1 == 3 && m0 == 5 && m1 == 9)
				{
					return;
				}
			}
		}
	}
}
