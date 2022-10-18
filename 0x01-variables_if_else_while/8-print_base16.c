#include <stdio.h>
/**
 * main - prints all base 16 numbers in lowercase
 * Return: Always 0
 */
int main(void)
{
	char ch;
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
