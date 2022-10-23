#include "main.h"
#include <stdio.h>

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
			printf("0");

			for (multi = 1; multi <= n; multi++)
			{
				printf(", ");

				val = num * multi;

				if (val <= 9)
				{
					printf("  %d", val);
				}
				else if (val > 9 && val < 100)
				{
					printf(" %d", val);
				}
				else
				{
					printf("%d", val);
				}
			}
			printf("\n");;
		}
	}
}
