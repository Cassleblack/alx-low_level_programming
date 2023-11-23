#include "main.h"

/**
 * clear_bit - Ofcourse this sets the value of a bit to 0.
 * at a given index.
 * @n: A pointer of an unsigned long int.
 * @index: Thizs is an index of the bit.
 *
 * Return: will return 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
