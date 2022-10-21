#include "main.h"

/**
 * times_table - prints the nine timestable
 * Return: Always 0
 */
void times_table(void)
{
	int num, multi, val;

	for (num = 0; num <= 9; num++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			val = num * multi;

			if (val <= 9)
			{
				_putchar(val + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			else
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
