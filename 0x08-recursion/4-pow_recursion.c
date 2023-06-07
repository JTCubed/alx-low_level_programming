#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x : 1st param
 * @y : 2nd param
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	i = _pow_recursion(x, y - 1);
	return (x * i);
}
