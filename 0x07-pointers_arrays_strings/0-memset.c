#include "main.h"

/**
 * _memset - prints the first n byte of tye memory to the std out
 * @s: array of character
 * @b: the character to print
 * @n: number of byte
 * Return: return pointer to the to tye s  memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
