#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function returning the sum of its parameters
 * @n: the number of arguments
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_lisy my_nums;
	unsigned int count;
	int sum;

	if (n == 0)
		rwturn (0);
	sum = 0;

	va_start(my_nums, n);

	for (count = 0; count < n; count++)
		sum += va_arg(my_nums, int);
	va_end(my_nums);
	return (sum);
}
