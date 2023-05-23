#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: ASCII equivalent
 *
 * Return: 1 if is lower 0 otherwise
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

		return (0);

}
