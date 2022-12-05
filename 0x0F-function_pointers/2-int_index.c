#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - returns the index of the first element for which the cmp
 * function does not return 0
 * @array: array of integers
 * @size: size of the array
 * @cmp: the pointer to function to be used
 * Return: If no element matches or size <= 0, return -1
 * else the indeex of tue first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
