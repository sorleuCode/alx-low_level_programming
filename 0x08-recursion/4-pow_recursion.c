#include "main.h"

/**
 * _pow_recursion - function that returns a value of exponential
 * @x: the base number
 * @y: the power
 * Return: returns value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
