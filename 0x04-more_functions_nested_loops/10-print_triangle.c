#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int space, xter;

	if (size > 0)
	{
		for (xter = 0; xter < size; xter++)
		{
			for (space = size - xter; space > 0; space--)
			{
				_putchar(' ');
			}
			for (space = 0; space < xter; space++)
				_putchar('#');
			if (xter == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

