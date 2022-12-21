#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: function print alphabets lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
