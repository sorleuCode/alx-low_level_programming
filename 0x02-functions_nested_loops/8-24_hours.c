#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hr + '0');
			_putchar(hr + '0');
			_putchar(':');
			_putchar(min + '0');
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}