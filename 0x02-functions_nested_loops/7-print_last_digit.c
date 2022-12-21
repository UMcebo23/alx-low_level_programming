#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: function print last digit of a number
 * @d: last digit of a number to be printed
 * Return: last digit
 */

int print_last_digit(int d)
{
	d %= 10;
	if (d < 0)
	{
		d *= -1;
	}
	_putchar('0' + d);
	return (d);
}
