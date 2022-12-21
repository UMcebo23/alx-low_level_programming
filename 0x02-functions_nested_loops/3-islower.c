#include "main.h"

/**
 * int _islower - Entry point
 * Description: function that checks for lowercase character
 * @c: integer value received 
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
