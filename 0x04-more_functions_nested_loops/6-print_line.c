#include "main.h"

/**
 * print_line - prints straight line
 * @n: character to be printed
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n >= 1)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
