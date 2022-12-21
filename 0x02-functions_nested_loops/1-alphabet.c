#include "main.h"

/**
 * main - Entry point
 * Description: Print alphabets lowercase
 * Return: 0 Always
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
