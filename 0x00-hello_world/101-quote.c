#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Print char then new line without puts/pritnf
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
