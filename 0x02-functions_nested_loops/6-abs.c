#include "main.h"

/**
 * _abs - Entry point
 * Description: function that computes
 * the absolute value of an integer
 * @a: absolute value
 * Return: absolute value
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}
