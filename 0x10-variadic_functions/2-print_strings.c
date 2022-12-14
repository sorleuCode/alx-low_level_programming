#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints string followed by a newline
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	char *str;
	unsigned int index;

	va_start(my_strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(my_strings, char*);

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (index != (n - 1)  && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_strings);
}
