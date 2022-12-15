#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: combinations of two two-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 99; n1++)
	{
		for (n2 = 0; n2 <= 99; n2++)
		{
			if (n1 < n2 && n1 != n2)
			{
				putchar((n1 / 10) + '0');
				putchar((n1 % 10) + '0');
				putchar(' ');
				putchar((n2 / 10) + '0');
				putchar((n2 % 10) + '0');
				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
