#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}