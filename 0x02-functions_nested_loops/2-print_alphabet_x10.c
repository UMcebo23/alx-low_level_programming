#include "main.h"

/**
 * print_alphabet_x10: Entry point
 * Description: prints 10 times the alphabet,
 * in lowercase, follow new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (alph = 'a' ; alph <= 'z' ; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
