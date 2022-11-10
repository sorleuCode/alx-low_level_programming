#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n && a[i] != '\0')
		i++;
	while (i < n)
	{
		i--;

		if (i >= 0 && a[i] != '\0')
		{
			_putchar(a[i]);
			_putchar(',');
		}

	}
	a[i] = '\0';
}
