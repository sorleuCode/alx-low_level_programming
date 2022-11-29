#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns pointer to an allocated memory
 * @b: the size of the memory to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
