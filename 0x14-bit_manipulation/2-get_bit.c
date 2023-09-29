#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve (0-indexed).
 *
 * Return: The value of the bit at the specified index or -1 in failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
