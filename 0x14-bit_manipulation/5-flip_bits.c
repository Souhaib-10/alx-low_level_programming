#include "main.h"

/**
 * flip_bits - Returns the number of bits needed .
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}

	return (num_bits);
}
