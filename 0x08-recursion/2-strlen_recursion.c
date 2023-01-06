#include "main.h"

/**
 * _strlen_recursion - function that returns string length
 * @s: string to be measured
 * return: string length measured
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
