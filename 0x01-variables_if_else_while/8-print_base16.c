#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints all the no. of base 16 in lowercase
 * Return: Always 0 (SUccess)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 16 ; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar(87 + n);
		}
	}
	putchar('\n');
	return (0);
}


