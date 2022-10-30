#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: the array to be printed
 * @n: the number of element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
		printf("\n");
}
