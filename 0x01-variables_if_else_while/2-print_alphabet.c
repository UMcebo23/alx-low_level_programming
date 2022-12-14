#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print lowercase with putchar
 * Return: 0
 */

int main(void)
{
	for(int l = 'A'; l <= 'Z';
			l++)
	{
		l = tolower(l);
		putchar(l);
	}
	return (0);
}
