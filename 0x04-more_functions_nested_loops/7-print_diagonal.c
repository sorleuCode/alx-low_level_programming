#include "main.h"

/**
 * print_diagonal - prints diagonal in the terminal
 * @n: the number of time diagonal is to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (i < n)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
