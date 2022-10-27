#include "main.h"

/**
 * more_numbers - prints nunbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10 && i <= 14)
			{
				_putchar('i');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
