#include "main.h"

/**
 * print_binary - Give the binary equivalent of a number
 * @n: the number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
