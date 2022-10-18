#include <stdio.h>
/**
 * main - print all possible combination of two digits number
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a != b && b > a)
			{
				putchar(a + '0');
				putchar(b + '0');

				if (a != 8 && b = 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
