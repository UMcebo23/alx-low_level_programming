#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints all single digit numbers
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
