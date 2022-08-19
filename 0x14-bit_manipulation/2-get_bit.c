#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: unsigned long int input.
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x, y;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	y = n & x;
	if (y == x)
		return (1);

	return (0);
}
