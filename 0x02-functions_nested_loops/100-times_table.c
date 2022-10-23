#include "main.h"

/**
 * print_times_table - primts the n time_table, starting from 0
 * @n: the time_table number
 */
void print_times_table(int n)
{
	int num;
	int val;
	int multi;

	if ((n <= 15) && (n >= 0))
	{

		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				val = num * multi;

				if (val <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(val + '0');
				}
				else if (val > 9 && val < 100)
				{
					_putchar(' ');
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
				}
				else
				{
					printf(" %d", val);
				}
			}
			_putchar('\n');
		}
	}
}
