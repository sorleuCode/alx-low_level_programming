#include "main.h"

/**
 * swap_int - function that swaps value of 2 integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	a = &b;
	*a = *b;
	b = &a;
	*b = *a;
}
