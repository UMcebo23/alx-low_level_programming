#include "main.h"

/**
 * main - Entry point
 * Description: Print putchar
 * Return: 0 Always
 */

int main(void)
{
	char *p = "_putchar";

	while (*p)
	{
		_putchar(*p);
		h++;
	}
	_putchar('\n');
	return (0);
}
