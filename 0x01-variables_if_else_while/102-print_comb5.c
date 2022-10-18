#include <stdio.h>
/**
 * main - print all possible combination of two two_digit number
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(a + '0');
				putchar(a +'0');

				if (a == 98 && b == 99)
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
