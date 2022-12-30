#include "main.h"

/**
 * set_bit - set the value of a bit at a given index to 1
 * @n: ponter to the string of bits
 * @index: the index to set the value at
 * Return: 1 if it works or -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
