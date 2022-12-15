#include <stdio.h>
#include <unistd.h>

/**
 * maint - Entry point
 * Descriptio: Print lower & uppercase alphabets
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		putchar(l);
	}

	for (l = 'A' ; l <= 'Z' ; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
