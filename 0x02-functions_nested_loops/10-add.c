#include "main.h"

/**
 * add - print  two integers
 * @a: first number
 * @b: second number
 * Return: Always 0
 */
int add(int a, int b)
{
	int ad;

	ad = a + b;

	if (ad <= 9)
	{
		_putchar(ad + '0');
	}
	else
	{
		_putchar((ad / 10) + '0');
		_putchar((ad % 10) + '0');
	}
	return (ad);
}
