#include <main.h>

/**
 * main - Entry point
 * Description: Print putchar
 * Return: 0 Always
 */

int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
	return (0);
}
