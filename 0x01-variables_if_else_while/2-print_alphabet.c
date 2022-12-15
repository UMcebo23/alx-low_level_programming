#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print lowercase with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
