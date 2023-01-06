#include "main.h"

/**
 * _puts_recursion - Entry point
 * Description: Function that prints a string, then new line
 * @s: string to be printed
 * Return: 0 Always
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion((s + 1));
}
