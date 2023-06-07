#include "main.h"

/**
 * _sqrt_recursion - square root function
 * @n : given param
 * Return: int 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *  _sqrt - square root function
 * @n : user input
 * @i : iterator
 * Return: square root
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (n / 2 < i)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}
