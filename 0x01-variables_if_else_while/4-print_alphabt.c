#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Print lowercase excetp q & e
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
