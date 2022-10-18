#include <stdio.h>
/**
 * main - prints all possible combination of single_digit numbers
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 28; a <= 37; a++)
	{
		putchar(a);

		if (a != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
