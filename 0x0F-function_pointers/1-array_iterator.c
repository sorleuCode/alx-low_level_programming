#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator- the funtion that executes another function given as
 * parameter
 * @array: the array of elements
 * @size: the size of array
 * @action: the pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
