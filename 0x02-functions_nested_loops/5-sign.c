#include "main.h"

/**
 * print_sign - Entry point
 * Description: Print sign of number
 * @n: Number sign printed
 * Return: + 0 or -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
