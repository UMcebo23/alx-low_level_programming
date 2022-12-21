#include "main.h" 

/**
 * _isalpha - Entry point
 * Description: function that checks 
 * for alphabetic character
 * @c: Character received
 * Return: 1 for upper & lowercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
