#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: number to be printed
 *Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	i = n;

	if (i <= 98)
	{
		while (i < 98)
			printf("%d, ", i--);
		printf("%d\n", i);
	}
	else
	{
		while (i > 98)
			printf("%d, ", i++);
		printf("%d\n", i);
	}
}
