#include "main.h"

/**
 * more_numbers - prints nunbers 0 to 14 ten times
 */

void more_numbers(voiid)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}

		_putchar('\n');
	}
	_putchar('\n');
}
