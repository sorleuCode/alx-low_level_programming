#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int rem = n % 10;

	if (rem < 0)
	{
		rem *= -1;
		return (rem);
	}
}
