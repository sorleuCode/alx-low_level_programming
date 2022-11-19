#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given nunber
 * Return: returns the factorial of the number if greater than or equls 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
