#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;

	while (i < n && a[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
