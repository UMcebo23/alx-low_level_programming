#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description: Print single digit no. of base 10 from 0
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
