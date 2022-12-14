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
	char l;
	
	for(int l = 'a'; l <= 'z';
			l++)
	{
		putchar(l);
		putchar('\n');
	}
	return (0);
}
