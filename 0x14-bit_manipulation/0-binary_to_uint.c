#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: it points to a string
 * Return: Returns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int num;

	num = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
