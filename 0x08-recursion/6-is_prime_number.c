#include "main.h"

/**
 * is_prime_number - 1 if integer is a prime number else 0
 * @n : input int
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - prime finder function
 * @n: user input
 * @i: counter
 * Return: int
 */

int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (i > n / 2)
	{
		return (0);
	}
	else if (n % i == 0 && n > 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, i + 1));
	}
}
