#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 *@n : int input
 *
 * Return: Always 0.
 */


int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	} else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	{
		return (0);
	}
}
