#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the character to print
 * Return: return pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *chArray;
	int count;

	chArray = malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
	{
		chArray[count] = c;
	}
	return (chArray);
}
