#include "main.h"
#include <stdio.h>

/**
 * factorial - function returns factorial of given number
 * @n: Number to find factorial of
 * Return: -1 if n < 0 to indicate error, if n > 0 factorial of n
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
