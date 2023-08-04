#include "main.h"

/**
 * flip_bits - counts how many bits have to be fliped to get to a number
 * @n: change bit from
 * @m: change bit to
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res, count;

	res = n ^ m;
	count = 0;

	while (res)
	{
		count = count + (res & 1);
		res = res >> 1;
	}
	return (count);
}
