#include <stdio.h>
/**
 * main - print all possible combination of two digits number
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 00; n <= 99; n++)
	{
		putchar(n + '0');

		if (n == 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

