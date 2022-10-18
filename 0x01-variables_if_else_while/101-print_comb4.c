#include <stdio.h>
/**
 * main - prints all combination 3 digits number
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (((a != b) && (a != c) && (b != c)) && (c > b > a))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if (!((a == 7) && (b == 8) && (c == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
