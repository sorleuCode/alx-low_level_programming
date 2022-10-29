#include "main.h"

/**
 * _puts - peints string to the stdout
 * @str: the string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		*str++;

		_putchar(*str++);
	}
	_putchar('\n');
}
