#include "main.h"

/**
 * print_diagonal - prints diagonal in the terminal
 * @n: the number of time diagonal is to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
