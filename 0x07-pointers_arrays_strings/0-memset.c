#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: array of characters
 * @b: each character
 * @n: number of byte
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
