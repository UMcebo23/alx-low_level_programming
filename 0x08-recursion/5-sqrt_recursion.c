#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inserted number.
 * @num: The number in which the root is determined for
 * @root: The root that is tested
 * Return: Squuare root for natural root, -1 if no natural
 * square root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 * @n: number in which square root is solved for
 * Return: square root of n, or -1 if there is no square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
